#include <knn1.h>
#include"datos_entrenamiento.h"
float result;

int on=0;
int datostotal=106;
int i=0;
int j=0;
float suma1=0, suma2, suma3,  suma4;
int cont=0;
float prom1,prom2,prom3,prom4;
float distancia;
float norm[106];
float mayor=0;
float v1[106];
float si[106];
float criterio1 = 0.0;
float criterio2 =0.31;
float vectorR[106][5];
int a=0;
int cont2=0;
int cont3=0;
int cont4=0;
float vectorR2[106][5];
float total;


void setup() {
  Serial.begin(9600);
}

void loop() {
if(on==0){
      /*
       * Promedio de las filas, con el fin de obtener el centro de cada uno de los 3 grupos
       */
  for(int i;i<datostotal;i++){
      suma1+=matriz[i][0];
      cont++;
  
     } 
    prom1=suma1/cont;
    cont=0;
    i=0;
        //Serial.println(prom1);
   for(int i;i<datostotal;i++){
      suma2+=matriz[i][1];
      cont++;
     }
    prom2=suma2/cont;
    cont=0;
    i=0;
        //Serial.println(prom2);
  for(int i;i<datostotal;i++){
      suma3+=matriz[i][2];
      cont++;
     }
    prom3=suma3/cont;
    cont=0; 
    i=0;
        //Serial.println(prom3);
    for(int i;i<datostotal;i++){
      suma4+=matriz[i][3];
      cont++;
     }
    prom4=suma4/cont;
    i=0;
       //Serial.println(prom4);
    /*
     * Distancia punto y el centro del conjunto(promedio)
     */
    for(int n;n<=cont-1;n++){
      distancia=sqrt(pow((matriz[n][0]-prom1),2)+
               pow((matriz[n][1]-prom2),2)+
               pow((matriz[n][2]-prom3),2)+
               pow((matriz[n][3]-prom4),2));
       v1[n]=distancia; 
           //Serial.println(v1[n]);

      if(mayor<=v1[n]){ //busca el numero mayor entre la distancia antes echa
        mayor=v1[n];
        }
      }
          //Serial.println(':');
          //Serial.print(mayor);

      for(j=0;j<cont;j++){
        norm[j]=v1[j]/mayor; //vector normalizacion
          //Serial.print(':');
          //Serial.println(norm[j]);
        }

      for(j=0;j<datostotal;j++){ //comparacion con criterios para posterior eliminacion
        if(norm[j]>criterio1 && norm[j]<criterio2){
           si[j]=1;
            vectorR[j][0]=j;
            cont2++;
            //Serial.println(vectorR[j][0]);
            Serial.println(" ");
           for(int a =0;a<4;a++){
            vectorR2[cont2][a]=matriz[j][a];
              Serial.println(vectorR2[cont2][a]);
  }
}           
              }
              
               on=1;
}      
      }
  
     
