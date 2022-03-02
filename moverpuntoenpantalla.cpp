//Gustavo 59990 13 21853

#include <LiquidCrystal.h> 
#define COLS 16 
#define ROWS 2 
#define VELOCIDAD 300 

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
// Textos
String texto_fila = "Punto";
 
void setup() {
  
  Serial.begin(9600);
 
  lcd.begin(COLS, ROWS);
}
 
void loop() {
 
  
  int tam_texto=texto_fila.length();
 
  for(int i=tam_texto; i>0 ; i--)
  {
    String texto = texto_fila.substring(i-1);
 
    lcd.clear();
 
    lcd.setCursor(0, 0);
 
    
    lcd.print(texto);
 
    
    delay(VELOCIDAD);
  }
 
  for(int i=1; i<=16;i++)
  {
  
    lcd.clear();
 
    lcd.setCursor(i, 0);
 

    lcd.print(texto_fila);
 
    delay(VELOCIDAD);
  }
 
  for(int i=16;i>=1;i--)
  {

    lcd.clear();
 

    lcd.setCursor(i, 1);

    lcd.print(texto_fila);
 
    delay(VELOCIDAD);
  }
 
  
  for(int i=1; i<=tam_texto ; i++)
  {
    String texto = texto_fila.substring(i-1);
 

    lcd.clear();

    lcd.setCursor(0, 1);

    lcd.print(texto);
 
    delay(VELOCIDAD);
  }
}
