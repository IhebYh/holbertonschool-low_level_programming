#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <elf.h>
#include <stdint.h>
typedef struct {
  uint8_t     e_ident[16];         /* Magic number and other info */
  uint16_t    e_type;              /* Object file type */
  uint16_t    e_machine;           /* Architecture */
  uint32_t    e_version;           /* Object file version */
  uint64_t    e_entry;             /* Entry point virtual address */
  uint64_t    e_phoff;             /* Program header table file offset */
  uint64_t    e_shoff;             /* Section header table file offset */
  uint32_t    e_flags;             /* Processor-specific flags */
  uint16_t    e_ehsize;            /* ELF header size in bytes */
  uint16_t    e_phentsize;         /* Program header table entry size */
  uint16_t    e_phnum;             /* Program header table entry count */
  uint16_t    e_shentsize;         /* Section header table entry size */
  uint16_t    e_shnum;             /* Section header table entry count */
  uint16_t    e_shstrndx;          /* Section header string table index */
} Elf64Hdr;

int main(int argc, char **argv) {
  Elf64Hdr elf_header;

  FILE* file = fopen(argv[1], "r");
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
      printf("Class:\t%d\n", elf_header.e_ident[4]);
      printf("Data:\t%d\n",  elf_header.e_ident[5]);
      printf("Version:\t%d\n",  elf_header.e_ident[6]);
      printf("OS/ABI:\t%d\n",  elf_header.e_ident[7]);
      printf("ABI Version:\t%d\n",  elf_header.e_ident[8]);
      printf("Type:\t%d\n",  elf_header.e_type);
      printf("Entry point adress:\t%lx\n",  elf_header.e_entry);
     }

    // finally close the file
   fclose(file);
  }
  return (0);
}
