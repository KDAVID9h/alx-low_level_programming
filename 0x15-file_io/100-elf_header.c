#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/* Une fonction qui affiche les informations sur la classe ELF */
void print_class(unsigned char e_class)
{
	printf("  Class:                             ");
	switch (e_class)
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_class);
		break;
	}
}

/* Une fonction qui affiche les informations sur l'encodage des données */
void print_data(unsigned char e_data)
{
	printf("  Data:                              ");
	switch (e_data)
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_data);
		break;
	}
}

/* Une fonction qui affiche les informations sur le type de fichier ELF */
void print_type(uint16_t e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
		break;
	}
}

/* Une fonction qui affiche les informations sur le système d'exploitation et l'interface ABI */
void print_osabi(unsigned char e_osabi)
{
	printf("  OS/ABI:                            ");
	switch (e_osabi)
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_osabi);
		break;
	}
}

/* Le point d'entrée du programme */
int main(int argc, char **argv)
{
	int fd; /* le descripteur de fichier */
	Elf64_Ehdr ehdr; /* la structure de l'en-tête ELF */
	ssize_t n_read; /* le nombre d'octets lus */

	/* Vérifier si le nombre d'arguments est correct */
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	/* Ouvrir le fichier ELF en mode lecture */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}

	/* Lire l'en-tête ELF */
	n_read = read(fd, &ehdr, sizeof(ehdr));
	if (n_read == -1)
	{
		perror("Error reading file");
		close(fd);
		exit(98);
	}

	/* Vérifier si le fichier est un fichier ELF valide */
	if (n_read < sizeof(ehdr) || ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
		ehdr.e_ident[EI_MAG1] != ELFMAG1 || ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
		ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "%s: Error: Not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	/* Afficher les informations de l'en-tête ELF */
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");
	print_class(ehdr.e_ident[EI_CLASS]);
	print_data(ehdr.e_ident[EI_DATA]);
	printf("  Version:                           %d (current)\n", ehdr.e_ident[EI_VERSION]);
	print_osabi(ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);
	print_type(ehdr.e_type);
	printf("  Entry point address:               0x%lx\n", ehdr.e_entry);

	/* Fermer le fichier */
	close(fd);

	/* Retourner 0 en cas de succès */
	return (0);
}
