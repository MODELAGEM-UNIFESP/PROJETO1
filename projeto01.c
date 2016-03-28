
#include<stdlib.h>
#include<stdio.h>
#define PARAM 5

int grama(int *Pop, float *Vparam){

        long int V;
                 //crescimento   //mortalidade            // sendo comidoh1            //sendo comidoh2         //sendo comidoc1
    V = Pop[0] * ( Vparam[0] - ((Vparam[1]/1000)*Pop[0]) - ((Vparam[2]/1000)*Pop[1]) - ((Vparam[3]/1000)*Pop[2]) - (Vparam[4]/1000*Pop[3]) );

    //int DV = V*(a - (b/k)*V - (c1*H1) - (c2*H2) );

    return V;
}

int herb1(int *Pop, float *H1param){

   long int H1;

   H1 = Pop[1] * ( -H1param[0] + (H1param[1]*Pop[0]) - (H1param[2]*Pop[3]) - (H1param[3]*Pop[4]) );

   return H1;
}

int herb2(int *Pop, float *H2param){

   int H2;

   H2 = Pop[2] *( -H2param[0] + (H2param[1]*Pop[0]) - (H2param[2]*Pop[3]) - (H2param[3]*Pop[4]) );

   return H2;
}

int carn1(int *Pop, float *C1param){

   int C1;

   C1 = Pop[3] *( -C1param[0] + (C1param[1]*Pop[1]) + (C1param[2]*Pop[2]) + (C1param[3]*Pop[0]) - (C1param[4]*Pop[4]) );

   return C1;
}

int carn2(int *Pop, float *C2param){

   int C2;

   C2 = Pop[4] *( -C2param[0] + (C2param[1]*Pop[1]) + (C2param[2]*Pop[2]) + (C2param[3]*Pop[3]) );

   return C2;
}


int main(void){

   int i = 0;

   int Aold[PARAM], Anew[PARAM];

   float Vparam[5], H1param[4], H2param[4], C1param[5], C2param[4];


   for(i = 0; i < PARAM; i++)
        scanf("%d", &(Anew[i]));

   //for(i = 0; i < PARAM; i++) printf("Vold[%d] = %d", i, Vold[i]);


  for(i = 0; i < 5; i++) scanf("%f", &Vparam[i]);

  for(i = 0; i < 4; i++) scanf("%f", &H1param[i]);

  for(i = 0; i < 4; i++) scanf("%f", &H2param[i]);

  for(i = 0; i < 5; i++) scanf("%f", &C1param[i]);

  for(i = 0; i < 4; i++) scanf("%f", &C2param[i]);


  int t, j;
  scanf("%d", &t);

/*
  for(i = 0; i < 5; i++) printf("Parametros Vparam[%d]: %f\n",i, Vparam[i]);

  for(i = 0; i < 4; i++) printf("Parametros H1[%d]: %f\n",i, H1param[i]);

  for(i = 0; i < 4; i++) printf("Parametros H2[%d]: %f\n",i, H2param[i]);

  for(i = 0; i < 5; i++) printf("Parametros C1[%d]: %f\n",i, C1param[i]);

  for(i = 0; i < 4; i++) printf("Parametros C2[%d]: %f\n",i, C2param[i]);
*/


 FILE *f = fopen("file.txt", "w");

  for (i=0; i<t; i++){

    for(j=0; j<PARAM; j++){
    Aold[j]=Anew[j];
    }

    fprintf(f, "%d, ", Anew[0]);
    fprintf(f, "%d, ", Anew[1]);
    fprintf(f, "%d, ", Anew[2]);
    fprintf(f, "%d, ", Anew[3]);
    fprintf(f, "%d\n", Anew[4]);

    printf("%d, %d, %d, %d, %d \n", Anew[0], Anew[1], Anew[2], Anew[3], Anew[4]);

    if (Anew[0]+grama(Aold, Vparam) < 0){
        Anew[0]=0;
    }
    else Anew[0]+=grama(Aold, Vparam);

    if (Anew[0]>100){
        Anew[0]+= (rand() %2)-1;
    }

    if (Anew[1]+herb1(Aold, H1param) < 0){
        Anew[1]=0;
    }
    else Anew[1]+=herb1(Aold, H1param);

    if (Anew[1]>100){
        Anew[1]+= (rand() %2)-1;
    }

    if (Anew[2]+herb2(Aold, H2param) < 0){
        Anew[2]=0;
    }
    else Anew[2]+=herb2(Aold, H2param);

    if (Anew[2]>100){
        Anew[2]+= (rand() %2)-1;
    }

    if (Anew[3]+carn1(Aold, C1param) < 0){
        Anew[3]=0;
    }
    else Anew[3]+=carn1(Aold, C1param);

    if (Anew[3]>100){
        Anew[3]+= (rand() %2)-1;
    }

    if (Anew[4]+carn2(Aold, C2param) < 0){
        Anew[4]=0;
    }
    else Anew[4]+=carn2(Aold, C2param);

    if (Anew[4]>100){
        Anew[4]+= (rand() %2)-1;
    }

    // desastres naturais
    /* if(i == 0.5 * t)
    	    Anew[0]= Anew[0] - 0.4 * Anew[0];
    if(i == 0.75 * t)
        Anew[2]= Anew[2] - 0.37 * Anew[2];
    if(i == 0.33 * t)
        Anew[1]= Anew[1] - 0.47 * Anew[1];
    */
}

    fclose(f);
  return 0;

}
