#include <stdio.h>
#include <ctype.h>

int alph()
{
int c, out, x, y = 0;
while ( ( c = ( toupper( getchar ( ) ) ) ) != EOF )
{

	switch( c )
	{
		case 'A':
			out = 'U',
			y++;
			break;

		case 'T':
			out = 'A',
			y++;
			break;

		case 'G':
			out = 'C',
			y++;
			break;

		case 'C':
			out = 'G';
			y++;
			break;

		case '\n':
			printf("\n");
			for( x = 0; x < y; x++ )
				printf("-");
			printf("\n ^\n |\nThis is your RNA string\n");
			return 0;
			break;

		default:
			out = '?',
			y++;
			break;

	}

	printf("%c", out ) ;

}

return 0;
}

void ins()
{
	int c;
	printf("Do you want to see instruction?Y/N");
	if( ( c = tolower( getchar( ) ) ) == 'y' )
	{
		printf("\n? - unpossible nucleotide\n\nPossible nucleotides in DNA:\nA - Adenine\nT - Thymine\nC - Cytosine\nG - Guanine\n\nPossible nucleotides in RNA:\nA - Adenine\nU - Uracil\nC - Cytosine\nG - Guanine\n\n");
	}
	getchar();

}
