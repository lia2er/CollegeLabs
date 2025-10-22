#include <stdio.h>
#define MAXN 10
int SumaCyfr(long c);
void LiniaRamky(int dr);

int main(){
  long numb,chmax;
  int n=0, sumc, maxsum=0, nmax;
  printf("\nВведіть кілька чисел:\n");
  while(1){
    scanf("%ld",&numb);
    if ((numb==0) || (n>MAXN)) break;
    n++;
    sumc=SumaCyfr(numb);
    if(sumc>maxsum){
      maxsum = sumc;
      nmax = n;
      chmax = numb;
    }
  }
  LiniaRamky(30);
  printf("\tНайбільшу суму цифр - %2d має %2d-е число %10ld", maxsum, nmax, chmax);
  LiniaRamky(30);
}

int SumaCyfr(long c){
  int sum=0;
  while(c>0){
    sum+=c%10;
    c/=10;
  }
  return sum;
}

void LiniaRamky(int dr){
  int k;
  printf("\n\n\t");
  for(k=0; k<dr; k++)
    printf("*=");
  printf("*\n");
}
