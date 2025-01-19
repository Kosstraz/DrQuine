#include <stdio.h>
#include <stdlib.h>
static int i = 13;
#define FNAME "Sully_X.c"
#define CMD "(cc Sully_X.c -o Sully_X ; ./Sully_X)"
#define SCODE "#include <stdio.h>%c#include <stdlib.h>%cstatic int i = %d;%c#define FNAME %cSully_%d.c%c%c#define CMD %c(cc Sully_%d.c -o Sully_%d ; ./Sully_%d)%c%c#define SCODE %c%s%c%c#define MAIN() int main() { if (i < 0) return (0); FILE* fkid = fopen(FNAME, %cw%c); fprintf(fkid, SCODE, 10, 10, i - 1, 10, 34, i - 1, 34, 10, 34, i - 1, i - 1, i - 1, 34, 10, 34, SCODE, 34, 10, 34, 34, 10); fclose(fkid); system(CMD); }%cMAIN()"
#define MAIN() int main() { if (i < 0) return (0); FILE* fkid = fopen(FNAME, "w"); fprintf(fkid, SCODE, 10, 10, i - 1, 10, 34, i - 1, 34, 10, 34, i - 1, i - 1, i - 1, 34, 10, 34, SCODE, 34, 10, 34, 34, 10); fclose(fkid); system(CMD); }
MAIN()