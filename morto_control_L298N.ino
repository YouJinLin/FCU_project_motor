 // Nano connect L298N
 const int IN1=8;
 const int IN2=7;
 const int ENA=9;
 const int IN3=5;
 const int IN4=4;
 const int ENB=3;
// NX connect Nano
int val=0;
const int NXinput=6;

void setup() {
pinMode (ENA, OUTPUT) ; 
pinMode (IN1, OUTPUT);
pinMode (IN2, OUTPUT); 

}
void Forward1(){  //OUTPUT1 & OUTPUT2
analogWrite(ENA, 70);
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
 }

void Forward2(){  //OUTPUT3 & OUTPUT4
analogWrite(ENB, 70);
digitalWrite(IN3,LOW);
digitalWrite(IN4,HIGH);
 }

 
void back1(){
analogWrite(ENA, 70);
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
 }

void back2(){
analogWrite(ENB, 70);
digitalWrite(IN3,HIGH);
digitalWrite(IN4,LOW);
 }

 
void stop1(){
analogWrite(ENA, 0);
digitalWrite(IN1,LOW);
digitalWrite(IN2,LOW);
 }

void stop2(){
analogWrite(ENB, 0);
digitalWrite(IN3,LOW);
digitalWrite(IN4,LOW);
 }

/*void loop(){
  // nx 輸出需接上拉電阻10k~20k
  val = digitalRead(NXinput);
  if(val == HIGH){
    Forward1();
    Forward2();
  }
  else{
    stop1();
    stop2();
  }
}*/


void loop(){
  Forward1();
  Forward2();
}
