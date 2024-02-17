#include<stdio.h>

float validacion(){
  float a;
  char term;
  while(true){
    printf("Ingrese la temperatura:\n");
    if(scanf("%f%c",&a,&term) != 2 || term != '\n'){
      printf("Error, Ingrese un numero valido.\n");
      while(getchar() != '\n');
    }else break;
  }
  return a;
}

char menu(){
  char x; 
  while(true){
    printf("Menu de opciones:\na) F a C\nb) K a C\nc) C a K\nd) F a K\ne) C a F\nf) K a F\ng) salir\n");
    scanf("%c",&x);
    return x;
  }
}

int main(){
  float frac1 = 1.8;
  float frac2 = 5/9;
  float kelvin = 273.15;
  char opci;
  float F, C, K, conversion;
  do{
    opci = menu();
    switch(opci){
      case 'a':
        F = validacion();
        C = ( F - 32) / 1.8;
        printf("%f F son: %f C.\n",F,C);
        break;
      case 'b':
        K = validacion();
        C = K - kelvin;
        printf("%f K son: %f C.\n",K,C);
        break;
      case 'c':
        C = validacion();
        K = C + kelvin;
        printf("%f C son: %f K.\n",C,K);
        break;
      case 'd':
        F = validacion();
        K = (F - 32) * frac2 + kelvin;
        printf("%f F son: %f K.\n",F,K);
        break;
      case 'e':
        C = validacion();
        F = C * frac1 + 32;
        printf("%f C son: %f F.\n",C,F);
        break;
      case 'f':
        K = validacion();
        F = (K - kelvin) * frac1 + 32;
        printf("%f K son: %f F.\n",K,F);
        break;
      case 'g':
        printf("Saliendo del programa.\n");
        break;
      default:
        printf("Error, Seleccione una opcion valida\n");
        break;
    }
  }while(opci != 'g');
  return 0;
}