#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALFMAX 30

int main()    {

  unsigned long long int j, ni, k, i, x;

  scanf("%llu", &j);

  while(j--){
    scanf("%llu", &ni);
    scanf("%llu", &k);

    char s[ni+2];
    unsigned long long int alf[ALFMAX];
    for(i=0;i<ALFMAX;i++) alf[i] = 0;

    scanf("%s", s);

    while(k--){
      scanf("%llu", &x);
      for(i=0;i<x;i++) alf[s[i]-'a']++;
               }

    unsigned long long int tam = strlen(s);
    for(i=0;i<tam;i++) alf[s[i]-'a']++;

    for(i=0;i<26;i++){
      if(i!=0) printf(" ");
      printf("%llu", alf[i]);
                     }

    printf("\n");
  }

  return 0;
}
