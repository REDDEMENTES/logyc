#include <stdio.h>

main()
{
  FILE *fp;

  fp = fopen("./tmp/test.txt", "w");
  fprintf(fp, "This is testing...\n");
  fclose(fp);

}
