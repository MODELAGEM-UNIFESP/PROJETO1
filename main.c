#include<stdlib.h>
#include<stdio.h>
#define PARAM 5

int grama(int *Pop, float *Vparam){

    int V;

    V = Pop[0] * ( Vparam[0] - ((Vparam[1]/Vparam[2])*Pop[0]) - (Vparam[3]*Pop[1]) - (Vparam[4]*Pop[2]) );


    //int DV = V*(a - (b/k)*V - (c1*H1) - (c2*H2) );

    return V;
}

int herb1(int *Pop, float *H1param){

   int H1;

   H1 = Pop[1] *( -H1param[0] + (H1param[1]*Pop[0]) - (H1param[2]*Pop[3]) - (H1param[3]*Pop[4]) );

   return H1;
}

int herb2(int *Pop, float *H2param){

   int H2;

   H2 = Pop[2] *( -H2param[0] + (H2param[1]*Pop[0]) - (H2param[2]*Pop[3]) - (H2param[3]*Pop[4]) );

   return H2;
}

int carn1(int *Pop, float *C1param){

   int C1;

   C1 = Pop[3] *( -C1param[0] + (C1param[1]*Pop[1]) + (C1param[2]*Pop[2]) );

   return C1;
}

int carn2(int *Pop, float *C2param){

   int C2;

   C2 = Pop[3] *( -C2param[0] + (C2param[1]*Pop[1]) + (C2param[2]*Pop[2]) );

   return C2;
}


int main(void){

   int i = 0;

   int Aold[PARAM], Anew[PARAM];

   float Vparam[5], H1param[4], H2param[4], C1param[3], C2param[3];


   printf("Entre com os valoes iniciais de cada população:\n");

   for(i = 0; i < PARAM; i++) scanf("%d", &Aold[i]);

   //for(i = 0; i < PARAM; i++) printf("Vold[%d] = %d", i, Vold[i]);


  printf("Parametros grama:\n");

  for(i = 0; i < 5; i++) scanf("%f", &Vparam[i]);

    printf("Parametros H1:\n");

   for(i = 0; i < 4; i++) scanf("%f", &H1param[i]);

    printf("Parametros H2:\n");

  for(i = 0; i < 4; i++) scanf("%f", &H2param[i]);

   printf("Parametros C1:\n");

   for(i = 0; i < 3; i++) scanf("%f", &C1param[i]);

   printf("Parametros C2:\n");

    for(i = 0; i < 3; i++) scanf("%f", &C2param[i]);


  int t, j;
  scanf("%d", &t);

  for (i=0; i<t; i++){

    for(j=0; j<PARAM; j++){
    Anew[j]=Aold[j];
    }

    Anew[0]+=grama(Anew, Vparam);
    Anew[1]+=herb1(Anew, H1param);
    Anew[2]+=herb2(Anew, H2param);
    Anew[3]+=carn1(Anew, C1param);
    Anew[4]+=carn2(Anew, C2param);
  }


  return 0;

}
