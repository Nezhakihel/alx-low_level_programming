#include "main.h"

/**
 * main -  displays info in the ELF header at the start of an ELF file.
 * @argc: var
 * @argv: pointer
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int open, read;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		return (1);
	}
	open = open(argv[1], O_RDONLY);
	if (open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(open);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read = read(open, header, sizeof(Elf64_Ehdr));
	if (read == -1)
	{
		free(header);
		close_elf(open);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	if (header->e_ident[0] != 0x7f || header->e_ident[1] != 'E' || header->e_ident[2] != 'L' || header->e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
	}
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osAbi(header->e_ident);
	print_abiVersion(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entryPointAdress(header->e_entry, header->e_ident);
	free(header);
	close_elf(open);
	return (0);
}
