#include <stdio.h>
#define MAXN 10
int SumaCyfr(long c);
void LiniaRamky(int dr);

int main(){
  long chysl,chmax;
  int n=0, sumc, maxsum=0, nmax;
  printf("\n\n Вводьте числа (0 - кінець):\n");
  while(1){
    scanf("%ld",&chysl);
    if ((chysl==0) || (n>MAXN)) break;
    n++;
    sumc=SumaCyfr(chysl);
    if(sumc>maxsum){
      maxsum = sumc;
      nmax = n;
      chmax = chysl;
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
