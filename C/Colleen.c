/*
	Comment outside
*/

#include <unistd.h>
#include <stdio.h>

static char	*s="/*\n\tComment outside\n*/\n\n#include <unistd.h>\n#include <stdio.h>\n\nchar\t*s=%c%s%c\n\nvoid\tft_putchar(char c)\n{\n\twrite(1, &c, 1);\n}\n\nint\tmain(void)\n{\n\t/*\n\t\tComment inside the 'main' function\n\t*/\n\tprintf(s, \'\\\"\', s, \'\\\"\');\n\tft_putchar(\'\\n\');\n\treturn (0);\n}\n";

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	/*
		Comment inside the 'main' function
	*/
	printf(s, '\"', s, '\"');
	ft_putchar('\n');
	return (0);
}
