#include <stdio.h>
#define SCODE "#include <stdio.h>%c#define SCODE %c%s%c%c#define MAIN int main() { FILE* fkid = fopen(%cGrace_kid.c%c, %cw+%c); fprintf(fkid, SCODE, 10, 34, SCODE, 34, 10, 34, 34, 34, 34, 10); fclose(fkid); }%cMAIN"
#define MAIN int main() { FILE* fkid = fopen("Grace_kid.c", "w+"); fprintf(fkid, SCODE, 10, 34, SCODE, 34, 10, 34, 34, 34, 34, 10); fclose(fkid); }
MAIN