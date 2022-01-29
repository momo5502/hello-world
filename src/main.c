#include <stdio.h>

int main(int argc, const char** argv)
{
	for(int i = 0; i < argc; ++i)
	{
		puts(argv[i]);
		puts("\n");
	}
	return 0;
}
