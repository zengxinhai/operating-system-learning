#include <stdio.h>
#include <sys/time.h>

int main(int argc, char **argv) {
  int rounds = 10000;
  double totalTime = 0;
  struct timeval startTime;
  struct timeval endTime;
  for (int i = 0; i < rounds; ++i) {
    gettimeofday(&startTime, NULL);
    FILE* x = fopen("./empty.txt", "w");
    fclose(x);
    gettimeofday(&endTime, NULL);
    totalTime += endTime.tv_usec - startTime.tv_usec;
  }
  printf("Average time for reading empty file: %f microseconds\n", totalTime / rounds);
}
