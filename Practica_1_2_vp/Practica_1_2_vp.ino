/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Quinto perito
Quinto electronica
Codigo Tecnico: EB5AM / EBSAV
Curso: Taller de electronica digital y reparacion de computadoras I
Proyecto: Escritura en un pin digital (Encender o apagar un pin digital)
Dev: Profe. Alejandro Lopez Navas
Fecha: 12 de abril
*/

//Directivas de preprocesador
#define LedNaranja 4  //pin conectado a un led
#define tiempo_espera 500 //tiempo entre estados del led

void setup()
{
pinMode(LedNaranja, OUTPUT); //Pina como salida.
digitalWrite(LedNaranja, LOW); //LED conectado al pin13 inicia apagado
}

void loop() {
digitalWrite(LedNaranja, HIGH); //Enciendo el led conectado al pin4
delay(tiempo_espera); //espera de 500 milisegundos.
digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin4
delay(tiempo_espera); //espera de 500 milisegundos
}