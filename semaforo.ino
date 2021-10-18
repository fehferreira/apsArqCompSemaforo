int green_1 = 11; 
int yellow_1 = 12; 
int red_1  = 13; 
 
int green_2 = 2; 
int yellow_2 = 3; 
int red_2  = 4; 
 

void setup() { 

  //Configurando semáforo 1
  pinMode(red_1, OUTPUT); //Led Vermelho 1 
  pinMode(yellow_1, OUTPUT); //Led Amarelo 1
  pinMode(green_1, OUTPUT); //Led Verde 1

   
  //Configurando semáforo 2
  pinMode(red_2, OUTPUT); //Led Vermelho 2
  pinMode(yellow_2, OUTPUT); //Led Amarelo 2  
  pinMode(green_2, OUTPUT); //Led Verde 2

} 

void loop() { 
  
  //Ciclo 1
  //-------------------------------------------------
  cicloSemaforo(red_1, green_2, yellow_2);

  //Ciclo 2
  //-------------------------------------------------
  cicloSemaforo(red_2, green_1, yellow_1);
}


void cicloSemaforo(int red, int green, int yellow){
  digitalWrite(red,HIGH); //Led Vermelho 1 aceso 
  digitalWrite(green,HIGH); //Led Verde 2 aceso 

  delay(3500); //Delay de 3,5s 

  digitalWrite(green,LOW); //Led Verde 2 apagado  
  digitalWrite(yellow,HIGH); //Led Amarelo 2 aceso  

  delay(1500); //Delay de 1,5s 
   

  digitalWrite(red,LOW); //Led Vermelho 1 apagado 
  digitalWrite(yellow,LOW); //Led Amarelo 2 apagado 
   
  delay(500); //Delay de 0,5s 
}

