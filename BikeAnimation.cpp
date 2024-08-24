#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);

//Frame 1 

//LCD cima 1/A
byte PaF1[8] = {
  B00000,
  B00000,
  B00000,
  B00001,
  B00011,
  B01111,
  B00111,
  B01100
};

//LCD Baixo 1/B
byte PbF1[8] = {
  B00000,
  B00001,
  B00001,
  B00001,
  B01111,
  B10110,
  B11010,
  B01100
};

//LCD Cima 2/C
byte PcF1[8] = {
  B00000,
  B00000,
  B00000,
  B11100,
  B11100,
  B11110,
  B01100,
  B10000
};

//LCD Baixo 2/D
byte PdF1[8] = {
  B10001,
  B01111,
  B00000,
  B11111,
  B11000,
  B01101,
  B00001,
  B00000
};

//LCD Cima 3/E
byte PeF1[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 3/F
byte PfF1[8] = {
  B00000,  
  B10000,
  B10000,
  B10000,
  B11000,
  B01100,
  B10100,
  B11000
};

//LCD Cima 4/G
byte PgF1[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 4/H
byte PhF1[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//Frame 2

//LCD cima 1/A
byte PaF2[8] = {
  B00000,
  B00000,
  B00011,
  B11111,
  B01111,
  B00011,
  B00000,
  B00000
};

//LCD Baixo 1/B
byte PbF2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00111,
  B01101,
  B01011,
  B00110
};

//LCD Cima 2/C
byte PcF2[8] = {
  B00000,
  B00000,
  B10000,
  B11110,
  B11110,
  B11111,
  B00110,
  B01000
};

//LCD Baixo 2/D
byte PdF2[8] = {
  B11000,
  B10111,
  B10000,
  B11111,
  B10000,
  B01000,
  B00110,
  B00000
};

//LCD Cima 3/E
byte PeF2[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 3/F
byte PfF2[8] = {
  B10000,  
  B11000,
  B01000,
  B11000,
  B01100,
  B11010,
  B10110,
  B01100
};

//LCD Cima 4/G
byte PgF2[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 4/H
byte PhF2[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};


//Frame 3

//LCD cima 1/A
byte PaF3[8] = {
  B00000,
  B00000,
  B00111,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 1/B
byte PbF3[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00011,
  B00101,
  B00110,
  B00011
};

//LCD Cima 2/C
byte PcF3[8] = {
  B00000,
  B10000,
  B11111,
  B11111,
  B11111,
  B11111,
  B00011,
  B00100
};

//LCD Baixo 2/D
byte PdF3[8] = {
  B01100,
  B01011,
  B01000,
  B01111,
  B11000,
  B10100,
  B10100,
  B00011
};

//LCD Cima 3/E
byte PeF3[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B00000,
  B00000
};

//LCD Baixo 3/F
byte PfF3[8] = {
  B01000,  
  B11100,
  B00100,
  B11100,
  B00110,
  B01011,
  B01101,
  B00110
};

//LCD Cima 4/G
byte PgF3[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 4/H
byte PhF3[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};



//Frame 4

//LCD cima 1/A
byte PaF4[8] = {
  B00000,
  B00000,
  B00000,
  B00011,
  B00001,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 1/B
byte PbF4[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00001,
  B00000
};

//LCD Cima 2/C
byte PcF4[8] = {
  B00000,
  B00000,
  B01111,
  B11111,
  B11111,
  B01111,
  B00001,
  B00010
};

//LCD Baixo 2/D
byte PdF4[8] = {
  B00110,
  B00101,
  B00100,
  B00111,
  B11111,
  B10101,
  B01110,
  B11001
};

//LCD Cima 3/E
byte PeF4[8] = {
  B00000,  
  B00000,
  B00000,
  B10000,
  B10000,
  B11000,
  B10000,
  B00000
};

//LCD Baixo 3/F
byte PfF4[8] = {
  B00100,  
  B11110,
  B00010,
  B11110,
  B00011,
  B00110,
  B00101,
  B00011
};

//LCD Cima 4/G
byte PgF4[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 4/H
byte PhF4[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B10000,
  B10000,
  B00000
};



//Frame 5

//LCD cima 1/A
byte PaF5[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 1/B
byte PbF5[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Cima 2/C
byte PcF5[8] = {
  B00000,
  B00000,
  B00011,
  B01111,
  B11111,
  B11111,
  B01110,
  B00001
};

//LCD Baixo 2/D
byte PdF5[8] = {
  B00011,
  B00010,
  B00011,
  B00011,
  B01111,
  B10111,
  B11011,
  B01100
};

//LCD Cima 3/E
byte PeF5[8] = {
  B00000,  
  B00000,
  B10000,
  B11000,
  B11000,
  B11100,
  B11000,
  B00000
};

//LCD Baixo 3/F
byte PfF5[8] = {
  B00010,  
  B11111,
  B00001,
  B11111,
  B10001,
  B10010,
  B00011,
  B10001
};

//LCD Cima 4/G
byte PgF5[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

//LCD Baixo 4/H
byte PhF5[8] = {
  B00000,  
  B00000,
  B00000,
  B00000,
  B10000,
  B11000,
  B01000,
  B10000
};



void setup()
{
  lcd.begin(16,2);              
  lcd.clear();           
 


  
}

void Frame1(int pos){
  
  lcd.createChar(0, PaF1);
  lcd.createChar(1, PbF1);
  lcd.createChar(2, PcF1);
  lcd.createChar(3, PdF1);
  lcd.createChar(4, PeF1);
  lcd.createChar(5, PfF1);
  lcd.createChar(6, PgF1);
  lcd.createChar(7, PhF1);
  Animar(pos);




 

}

void Frame2(int pos){
  
  lcd.createChar(0, PaF2);
  lcd.createChar(1, PbF2);
  lcd.createChar(2, PcF2);
  lcd.createChar(3, PdF2);
  lcd.createChar(4, PeF2);
  lcd.createChar(5, PfF2);
  lcd.createChar(6, PgF2);
  lcd.createChar(7, PhF2);
  Animar(pos);

  





}

void Frame3(int pos){
  
  lcd.createChar(0, PaF3);
  lcd.createChar(1, PbF3);
  lcd.createChar(2, PcF3);
  lcd.createChar(3, PdF3);
  lcd.createChar(4, PeF3);
  lcd.createChar(5, PfF3);
  lcd.createChar(6, PgF3);
  lcd.createChar(7, PhF3);
  Animar(pos);


}
void Frame4(int pos){
  
  lcd.createChar(0, PaF4);
  lcd.createChar(1, PbF4);
  lcd.createChar(2, PcF4);
  lcd.createChar(3, PdF4);
  lcd.createChar(4, PeF4);
  lcd.createChar(5, PfF4);
  lcd.createChar(6, PgF4);
  lcd.createChar(7, PhF4);
  Animar(pos);


}

void Frame5(int pos){
  
  lcd.createChar(0, PaF5);
  lcd.createChar(1, PbF5);
  lcd.createChar(2, PcF5);
  lcd.createChar(3, PdF5);
  lcd.createChar(4, PeF5);
  lcd.createChar(5, PfF5);
  lcd.createChar(6, PgF5);
  lcd.createChar(7, PhF5);
   
  Animar(pos);


}


void Animar(int pos){

  lcd.display();
  lcd.setCursor(pos, 0);
  
  lcd.write(byte(0));
  lcd.setCursor(pos, 1);  
  
  lcd.write(byte(1));
  lcd.display();
  
  lcd.setCursor(pos+1, 0);  
  lcd.write(byte(2));
  
  lcd.setCursor(pos+1, 1);  
  lcd.write(byte(3));  
  
  lcd.setCursor(pos+2, 0);  
  lcd.write(byte(4));
  
  lcd.setCursor(pos+2, 1);  
  lcd.write(byte(5));
  
  lcd.setCursor(pos+3, 0);  
  lcd.write(byte(6));
  
  lcd.setCursor(pos+3, 1);  
  lcd.write(byte(7));
  
}

void loop()
{


  for(int i = -2; i <= 16; i++){

    for(int frame = 0; frame<=4; frame++){

      switch(frame){
        case 0:
            Frame1(i);


          break;

        case 1:
          Frame2(i);

          break;
        case 2:
          Frame3(i);


        break;       	

        case 3:
          Frame4(i);

          break;       	

        case 4:
          Frame5(i);
          break;      


      }

       delay(30);

    }
	lcd.clear();
 
  }
}