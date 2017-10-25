#include <omp.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  const int N = 10;
  int i,tid, a[N];
  
#pragma omp parallel private(tid)
  {tid = omp_get_thread_num();
#pragma omp parallel for 
  for(i = 0; i < N; i++)
      { 
	a[i] = 2*i;
	printf("vector", a[i],"from thread:= %d\n ",tid);
      }
  }
  return 0;
}
