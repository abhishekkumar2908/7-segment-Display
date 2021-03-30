int a=2,b=3,c=4,d=5,e=6,f=7,g=8,dot=13;//,D1=9,D2=10,D3=11,D4=12;
int arr[4],val=0;



void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dot,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(D1,HIGH);
  delay(5);
  digitalWrite(D1,LOW);
   digitalWrite(D2,HIGH);
  delay(5);
  digitalWrite(D2,LOW);
   digitalWrite(D3,HIGH);
  delay(5);
  digitalWrite(D3,LOW);
   digitalWrite(D4,HIGH);
  delay(5);
  digitalWrite(D4,LOW);
  delay(5);
  */
   
  Serial.println("writa a four digit no.");
  while(Serial.available()==0){};
  //val=Serial.parseInt();
  //for(int i=0;i<4;i++)
  
    arr[1]=Serial.parseInt();
  
  for(int i=1;i<=4;i++){  
   digitalWrite(i+8,HIGH);
   //switch(arr[i]){
    
   //case 0:
   if(arr[i]==0){
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   analogWrite(g,HIGH);
   digitalWrite(dot,HIGH);
   
  //digitalWrite(D1,LOW);
   }
  else if(arr[i]==1){
   //case 1:
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   analogWrite(g,128);
   //digitalWrite(dot,HIGH);
    
    //digitalWrite(D2,LOW);
  }
  else if(arr[i]==2){
   //case 2:
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   analogWrite(g,127);
   
    //digitalWrite(D3,LOW);
  }
   else if(arr[i]==3){
   //case 3:
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   analogWrite(g,127);
     //delay(100);
   
    }
    else if(arr[i]==4){
   //case 4:
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   analogWrite(g,127); 
 
    }
    else if(arr[i]==5){

   //case 5:
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   analogWrite(g,127);
  
    }
    
    else if(arr[i]==6){
  // case 6:
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   analogWrite(g,127);
  
    }
  else if(arr[i]==7){
   //case 7:
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   analogWrite(g,128);
  
  }
else if(arr[i]==8){
   //case 8:
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   analogWrite(g,127);
   
}
   else if(arr[i]==9){
//   case 9:
   digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   analogWrite(g,127);
   
   } 
  }
  delay(1000);
  for(int i=9;i<=12;i++)
  {
    digitalWrite(i,LOW);
  }
  

}
