#include "elf.h"
#include "main.h"
#include <elf.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %ld\n",
				 e_ident[EI_ABIVERSION]);
}
