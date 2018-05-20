#define Green 13
#define Red 12
#define button 10
#define button2 2
int COUNT=1;
#define buzzle 9
#define segA 11 //connecting segment A to PIN11

#define segB 3 // connecting segment B to PIN3

#define segC 4 // connecting segment C to PIN4

#define segD 5 // connecting segment D to PIN5

#define segE 6 // connecting segment E to PIN6

#define segF 7 // connecting segment F to PIN7

#define segG 8 // connecting segment G to PIN8

int buttonPressed=0;
int button2Pressed=0;
void setup(){
  pinMode(button,INPUT);
  pinMode(button2,INPUT);
for (int i=2;i<14;i++)
{
                if(i!=button || i!=button2)
                {
                                    pinMode(i, OUTPUT);// taking all pins from 2-13 as output except button and button2
                }
}
}

void loop() {
   
  buttonPressed=0;
  if(buttonPressed == 0 && button2Pressed == 1)
  {
    digitalWrite(Red,HIGH);
    digitalWrite(Green,LOW);
  }
if(digitalRead(button)==HIGH)
{
 buttonPressed=1;
 button2Pressed=0;
}

if(buttonPressed==1 && button2Pressed==0)
{
  digitalWrite(Green,HIGH);
  digitalWrite(Red,LOW);
  tone(buzzle,900,200);
  delay(300);
  tone(buzzle,750,200);
}

if(digitalRead(button2)==HIGH)
{
  buttonPressed=0;
  button2Pressed=1;
}

switch (COUNT)
                {
                case 0://when count value is zero show”0” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, LOW);

                break;

 

                case 1:// when count value is 1 show”1” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 2:// when count value is 2 show”2” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, HIGH);

                break;

 

                case 3:// when count value is 3 show”3” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, HIGH);

                break;

 

                case 4:// when count value is 4 show”4” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 5:// when count value is 5 show”5” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, LOW);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, LOW);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 6:// when count value is 6 show”6” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, LOW);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 7:// when count value is 7 show”7” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 8:// when count value is 8 show”8” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 9:// when count value is 9 show”9” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, LOW);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;
                
                break;

                }

                if (COUNT==10)

                {

                                COUNT=0;// if count integer value is equal to 10, reset it to zero.

                                delay(1000);

                }

                if(buttonPressed==1)
                {
                  COUNT++;
                }

}


