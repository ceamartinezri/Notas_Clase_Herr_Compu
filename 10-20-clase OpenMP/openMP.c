 #include <stdio.h>
    int main(void)
    {
    #pragma omp parallel
      printf("HelloXS, world.\n");
      return 0;
    }
