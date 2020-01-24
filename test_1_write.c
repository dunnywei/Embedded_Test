#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

void *reader_thread(void *arg)
{
  while(1)
  {
  }
  return NULL;
}
void *writer_thread(void *arg)
{
  while(1)
  {
  }
  return NULL;
}

#define M 10
#define N 20

int main(int argc, char **argv)
{
  int i,j;
  for(i=0;i<N;i++)
  {
     pthread_create(NULL,NULL,reader_thread);
  }
  
  for(j=0;j<M;j++)
  {
     pthread_create(NULL,NULL,reader_thread);
  }
}
