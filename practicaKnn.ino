//#include <dato_02.h>
#include <knn1.h>


int on=0;
float result;
int i=0;
int a=0;
int b=0;
int total =0;
float s1, s2, s3, s4;

float vector[30][5]={
{5.1,3.5,1.4,0.2,1},
{4.9,3,1.4,0.2,1},
{4.7,3.2,1.3,0.2,1},
{4.6,3.1,1.5,0.2,1},
{5,3.6,1.4,0.2,1},
{5.4,3.9,1.7,0.4,1},
{4.6,3.4,1.4,0.3,1},
{5,3.4,1.5,0.2,1},
{4.4,2.9,1.4,0.2,1},
{4.9,3.1,1.5,0.1,1},
{7,3.2,4.7,1.4,2},
{6.4,3.2,4.5,1.5,2},
{6.9,3.1,4.9,1.5,2},
{5.5,2.3,4,1.3,2},
{6.5,2.8,4.6,1.5,2},
{5.7,2.8,4.5,1.3,2},
{6.3,3.3,4.7,1.6,2},
{4.9,2.4,3.3,1,2},
{6.6,2.9,4.6,1.3,2},
{5.2,2.7,3.9,1.4,2},
{6.3,3.3,6,2.5,3},
{5.8,2.7,5.1,1.9,3},
{7.1,3,5.9,2.1,3},
{6.3,2.9,5.6,1.8,3},
{6.5,3,5.8,2.2,3},
{7.6,3,6.6,2.1,3},
{4.9,2.5,4.5,1.7,3},
{7.3,2.9,6.3,1.8,3},
{6.7,2.5,5.8,1.8,3},
{7.2,3.6,6.1,2.5,3}
};



void setup() {
    Serial.begin(9600);

}

void loop() {
  porcentaje();
}

float porcentaje(){
if(on==0){
    for(;i<30;i++){
      result=knn(35,5,3,3,vector[i]);
      Serial.println(result);
      Serial.print(" :   ");
   if(result==vector[i][4]){
    a++;
    }
    else{
b++;
      }
    }
    
    Serial.print("ACIERTOS:   ");
    Serial.println(a);
    Serial.print("ERRORES:   ");
    Serial.println(b);

    total = (a*100)/30;
    Serial.print("PORCENTAJE ACIERTOS:   ");
    Serial.println(total);
    on=1;
}}
