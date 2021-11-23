#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <elf.h>
typedef struct {
  uint8     e_ident[16];         /* Magic number and other info */
  uint16    e_type;              /* Object file type */
  uint16    e_machine;           /* Architecture */
  uint32    e_version;           /* Object file version */
  uint64    e_entry;             /* Entry point virtual address */
  uint64    e_phoff;             /* Program header table file offset */
  uint64    e_shoff;             /* Section header table file offset */
  uint32    e_flags;             /* Processor-specific flags */
  uint16    e_ehsize;            /* ELF header size in bytes */
  uint16    e_phentsize;         /* Program header table entry size */
  uint16    e_phnum;             /* Program header table entry count */
  uint16    e_shentsize;         /* Section header table entry size */
  uint16    e_shnum;             /* Section header table entry count */
  uint16    e_shstrndx;          /* Section header string table index */
} Elf64Hdr;

int main(int argc, char *argv) {
  struct Elf64Hdr elf_header;

  FILE* file = open(argv[1], O_RDWR);
  if(file) {
    // read the header
    fread(&elf_header, 1, sizeof(elf_header), file);

    // check so its really an elf file
    if(elf_header.e_type == 0x7f &&
       elf_header.e_ident[1] == 'E' &&
       elf_header.e_ident[2] == 'L' &&
       elf_header.e_ident[3] == 'F') {

       // write the header to the standard output
      printf("ELF Header:\nMagic:\t");
      printf("%x%x%x%x\n", elf_header.e_ident[0], elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3]);
      printf("Class:\t%s\n", elf_header.e_ident[4]);
      printf("Data:\t%s\n",  elf_header.e_ident[5]);
      printf("Version:\t%s\n",  elf_header.e_ident[6]);
      printf("OS/ABI:\t%s\n",  elf_header.e_ident[7]);
      printf("ABI Version:\t%s\n",  elf_header.e_ident[8]);
      printf("Type:\t%s\n",  elf_header.e_type);
      printf("Entry point adress:\t%s\n",  elf_header.e_entry);
     }

    // finally close the file
    close(file);
  }
  return (0);
}
