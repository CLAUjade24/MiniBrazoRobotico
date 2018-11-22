#include <Servo.h>

//Creamos los objetos servo
Servo servo;
Servo servo2;
Servo servo3;
Servo servo4;

int enviado; //Aqui enviamos el numero completo
int num; //Numero del servo
int posicion; //Posicion del servo

void setup()
{
  //Inicializamos los Servos
  servo.attach(3);
  servo2.attach(6);
  servo3.attach(10);
  servo4.attach(8);
  //inicializacion de los led
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  //Inicializamos la comunicacion por Serial
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() >= 1)
  {
    /*
      1- Leer un numero entero por serial
      2- Calculamos su modulo por 10 (sera el numero del motor)
      3- Dividir el entero inicial por 10
      4- Lo que quede, sera la posicion del motor
    */
    enviado = Serial.parseInt();
    num = enviado % 10;
    enviado = enviado / 10;
    posicion = enviado;

    //Hora de mover los servos!
    //Si el primer servo comienza, tomara una
    //posición y su correspondente LED prendera
    if (num == 1)
    {
      servo.write(posicion);
      digitalWrite(4, HIGH);
      delay(1000);
    }
    else if (num == 2)
    {
      
      digitalWrite(5, HIGH);
      servo2.write(posicion);
    }
    else if (num == 3)
    {

      servo.write(posicion);
      digitalWrite(6, HIGH);
      delay(1000);;
      ;

    }
    else if (num == 4)
    {
      servo4.write(posicion);
      digitalWrite(7, HIGH);
      delay(1000);
    }
  }

}
