// C++ code
//
#define A2 110
#define B2 123
#define C3 131
#define C3s 139
#define D3 147
#define D3s 156
#define E3 165
#define F3 175
#define F3s 185
#define G3 196
#define G3s 208
#define A3 220
#define A3s 233
#define B3 247
#define C4 262
#define aa5 A5
#define aa4 A4
#define aa1 A1
int m[]={
A3,G3,F3s,0,F3s ,E3, D3,0,D3, E3,F3s,E3, 0,F3s,E3,0,
E3,F3s,G3,0,G3,E3,C3s,0,C3s,D3,E3,D3,0,E3,D3,0,
D3,D3,B3,0,B3,A3,G3,0,G3,B3,A3,0,
A3,F3s,D3,0,D3,E3,F3s,0,F3s,G3,F3s,0,
E3,D3,E3,0,A2,
};
int t[]={
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,1,4,
  3,
};
//int leds=0;
int ledp[14]={
	2,3,4,5,6,7,8,9,10,11,12,aa5,aa4,aa1
};
byte pb1=0, bs1=1; 
byte pb2=2, bs2=2; 
byte pb3=3, bs3=3; 
byte pb4=4, bs4=4; 
byte pb5=5, bs5=5; 
byte pb6=6, bs6=6; 
byte pb7=7, bs7=7; 
byte pb8=8, bs8=8; 
byte pb9=9, bs9=9; 
byte pb10=10, bs10=10; 
byte pb11=11, bs11=11; 
byte pb12=12, bs12=12; 
byte pb13=13, bs13=13; 
void setup()
{
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    pinMode(6, INPUT_PULLUP);
    pinMode(7, INPUT_PULLUP);
    pinMode(8, INPUT_PULLUP);
    pinMode(9, INPUT_PULLUP);
    pinMode(10, INPUT_PULLUP);
    pinMode(11, INPUT_PULLUP);
    pinMode(12, INPUT_PULLUP);
   // pinMode(13, OUTPUT);
    pinMode(aa5, INPUT_PULLUP);
    pinMode(aa4,INPUT_PULLUP);
    // pinMode(aa1, OUTPUT);
   Serial.begin(9600);
}

void loop()
{
  
 
    bs1 = digitalRead(2);
    bs2 = digitalRead(3);
    bs3 = digitalRead(4);
    bs4 = digitalRead(5);
    bs5 = digitalRead(6);
    bs6 = digitalRead(7);
    bs7 = digitalRead(8);
    bs8 = digitalRead(9);
    bs9 = digitalRead(10);
    bs10 = digitalRead(11);
    bs11 = digitalRead(12);
    bs12 = digitalRead(A5);
    bs13 = digitalRead(A4);

 if(bs1==0&&pb1==1){
    pb1=0;
  tone(13,C3,200); delay(201);
  
  }
  if(pb1==0){
  pb1=1;
    noTone(13);
  }
 if(bs2==0){
    pb2=0;
  tone(13,C3s,200); delay(101);
  
  }  if(pb2==0){
  pb2=1;
    noTone(13);
  }
 if(bs3==0){
    pb3=0;
 tone(13,D3,200); delay(101);
  
  }
    if(pb3==0){
  pb3=1;
    noTone(13);
  }
  if(bs4==0){
     pb4=0;
 tone(13,D3s,200); delay(101);
  
  }  if(pb4==0){
  pb4=1;
    noTone(13);
  }
   if(bs5==0){
     pb5=0;
 tone(13,E3,300); delay(101);
  
  }  if(pb5==0){
  pb5=1;
    noTone(13);
  }
   if(bs6==0){
     pb6=0;
 tone(13,F3,200); delay(201);
  
  }  if(pb6==0){
  pb6=1;
    noTone(13);
  }
   if(bs7==0){
     pb7=0;
 tone(13,F3s,200); delay(201);
  
  }  if(pb7==0){
  pb7=1;
    noTone(13);
  }
   if(bs8==0){
     pb8=0;
 tone(13,G3,200); delay(201);
  
  }  if(pb8==0){
  pb8=1;
    noTone(13);
  }
   if(bs9==0){
     pb9=0;
 tone(13,G3s,200); delay(201);
  
  }  if(pb9==0){
  pb9=1;
    noTone(13);
  }
   if(bs10==0){
     pb10=0;
 tone(13,A3,200); delay(201);
  
  }  if(pb10==0){
  pb10=1;
    noTone(13);
  }
   if(bs11==0){
     pb11=0;
 tone(13,A3s,200); delay(201);
  
  }  if(pb11==0){
  pb11=1;
    noTone(13);
  }
  if(bs12==0){
     pb12=0;
 tone(13,B3,200); delay(201);
  
  }  if(pb12==0){
  pb12=1;
    noTone(13);
  }
 if(bs13==0){
     pb13=0;
 tone(13,C4,200); delay(201);
  
  }  if(pb13==0){
  pb13=1;
    noTone(13);
  }
 // delay(1000);
  
    //Serial.print(" bs1 =");
   //Serial.print(bs1);
   // Serial.print(" pb1=");
    // Serial.println(pb1);
//delay(200);

}
  