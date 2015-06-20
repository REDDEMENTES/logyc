#include <stdio.h>

main()
{
  FILE *fp;
  char buffer[20];

  fp = fopen("./tmp/test.txt", "r");
  fscanf(fp, "%s", buffer);
  printf("Read Buffer: %s\n", %buffer );
  fclose(fp;);

}
