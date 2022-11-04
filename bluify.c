#include <stdio.h>

int main(int argc, char *argv[]){

	printf("\033[38;2;59;132;177m");
	FILE * input;

	if(argc == 1){
		input = stdin;
	
	}
	else
	{
		input = fopen(argv[1], "r");
	}

	char buf;
	while(buf = fgetc(input))
		{
			printf("%c", buf);
			if(buf == EOF)
			{
				break;
			}
		}

	printf("\033[0m");
	fclose(input);
	return 0;
}
