# Mini BrazoRobotico

 Un brazo robótico es un tipo de brazo mecánico, normalmente programable, con funciones parecidas a las de un brazo humano; este puede ser la suma total del mecanismo o puede ser parte de un robot más complejo. Las partes de estos manipuladores o brazos son interconectadas a través de articulaciones que permiten tanto un movimiento rotacional (tales como los de un robot articulado), como un movimiento traslacional o desplazamiento linea. 
 El propósito de esta práctica es desarrollar paso a paso un proyecto para controlar y programar un Brazo Robot, simulando las funciones básicas de un robot industrial.
 El robot debe tener dos funciones básicas
    
 *  Programar: Registrar las posiciones de los brazos en tres dimensiones (cada registro es un "paso", un programa consiste en una serie de pasos).
 *  Ejecutar: Realice en secuencia las posiciones registradas en el "Programa". El robot ejecutará el programa hasta que se use el comando "ABORTAR".
 Características principales:
   - El proyecto se usa para controlar robots con  5 DOF ("Grados de libertad").
   - El robot se debe controlar en modo "REMOTO" (a través de una programa en java -o en un lenguaje de su elección- por medio del puerto serial).
   - La información para el usuario se podrá proporcionar a través de LEDS de colores, una pantalla LCD y/ó sonido (un zumbador).
   - Debe de contener un botón de paro de emergencia (Físico).
   - Si existe un fallo y/o corte de energía, después de restablecerse la corriente el robot debe de continuar el programa (aunque este no se encuentre conectado a la aplicación).
    
Los brazos robóticos se pueden clasificar de acuerdo con el número de "articulaciones" o "Grados de libertad" (DOF) que tienen.
   -La "Base", o "Cintura", por lo general puede girar el brazo 180o o 360o, dependiendo del   tipo de Servo utilizado (aquí en este proyecto, se debe utilizar un motor a pasos para girar 360o)
   -El "Hombro" es el responsable de "levantar o bajar" el brazo verticalmente
   -El "codo" hará que el brazo "avance o retroceda".
   -La Muǹeca hará que “gire” la Pinza.
   -La "Garra" o "Pinza" funciona abriendo o cerrándose para "agarrar cosas".
   
 MATERIAL:
* brazo robotico 
* protoboard
* cables 
* tornillos 
* Arduino 
 
Servos:
* Un motor paso a paso en la base giratoria
* Dos motores paso a paso para el hombro y el codo, que son lasarticulaciones con más carga
* Dos motores paso a paso(muñeca) y
* Un motor paso a paso (pinza)
 # Implementación 
Primeramente, se realizó el armado del brazo robótico y así mismo la conexión con la protoboard, el cual concluyo en lo siguiente:

![imagen brazo robotico](https://github.com/CLAUjade24/MiniBrazoRobotico/blob/master/baseBrazo.jpg)

 brazo funciona con servomotor Sg90 como lo muestra en la imagen de uno de los servomotores
  
 ![imagen del servomoteres](https://github.com/CLAUjade24/MiniBrazoRobotico/blob/master/servomotor.PNG)
 
 
 Conexión motora a pasos
![diagrama motor a pasos](https://github.com/CLAUjade24/MiniBrazoRobotico/blob/master/diagrama%20motor%20a%20pasos.PNG)

 Después se comenzó con la programación para su funcionalidad, para controlarlo vía remoto, el código fue creado en java con una interfaz amigable para el usuario, ya que este podrá ingresar los grados a los cuales quiere que el brazo gire. Al dar clic en el botón de ejecutar realizara las anteriores acciones de forma automática. 
 
 ![imagen interfaz](https://github.com/CLAUjade24/MiniBrazoRobotico/blob/master/interfaz.jpg)
 
 Se creó el código en Arduino, indicando que se realizaría con cada uno de los servomotores al momento en que se ingresaran los valores. 
 # Funcionalidad
El robot funciona de la siguiente manera, el usuario ingresa los datos en la interfaz, los grado que necesita que de vuelta en la base, motor derecho, motor izquierdo y finalmente en la pinza. En caso de que se desee que solo realice un movimiento se ingresan los grados la parte que se desea mover y seguidamente en aceptar. Para que este realice los movimientos de forma automática se da clic en el botón ejecutar después de haber ingresado los parámetros. 
Al momento en el cual va realizando cada una de las acciones se iluminan leds que indican, que efectivamente el robot esta ejecutando tales movimientos. 

En caso de que se desee detener la funcionalidad del robot se da clic en el botón de reset del Arduino. 

 # Pruebas
Se comenzó realizando algunas pruebas dejando un objeto para que el robot lo recogiera con las pinzas, se ingresaron los parámetros correctos y con ello pudimos concluir que este funciona correctamente. 
![Primeras pruebas](https://github.com/CLAUjade24/MiniBrazoRobotico/blob/master/probandominibrazo.jpg)
