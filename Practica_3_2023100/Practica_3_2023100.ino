/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AMCurso: Taller de electronica digital y reparacion de computadoras I
   Proyecto:Catalago de productos
   Alumno: Ricardo Andres Rodriguez de León
   Fecha: 19/4/2024
   link de la simulacion: https://www.tinkercad.com/things/lGgfp7nYovo-dazzling-bigery-krunk/editel?tenant=circuits
*/

   struct nombres_dulce
   {
     char nombres_dulce[50];   //variable tipo char donde almacenare nombres de los dulces
     byte cantidad_dulce;      //variable tipo byte donde almacenare la cantidad de dulces
   };
nombres_dulce dulce1 = {"Dulce de leche", 50};
nombres_dulce dulce2 = {"Dulce de mango", 25};
nombres_dulce dulce3 = {"Dulce de chocolate",30};
nombres_dulce dulce4 = {"Dulce de caramelo", 40};


//Funcion donde realizo las configuraciones
void setup() {
  Serial.begin(9600);     //Inicio la comunicación serial.
  pinMode(2, INPUT);     //Pin 2 del arduino como entrada.
  pinMode(3, INPUT);     //Pin 3 del arduino como entrada.
}

byte contador = 0;
void loop() {
  if(digitalRead(2)==HIGH) {
  delay(350);
  contador = contador+1; 
  Serial.println(contador );
    
    
  if(digitalRead(2)==HIGH)  //Leo el estado digital del pin 2 y si este es bajo.
  {
   delay(350);
   contador = contador+1;   //aumento en uno el contador
    Serial.println(contador);}
  
  
  
  if (contador == 1){
  Serial.print("El nombre del dulce 1 es: ");
  Serial.println(dulce1.nombres_dulce);
  Serial.print("La cantidad del dulce 1 es: ");
  Serial.println(dulce1.cantidad_dulce);}
  
  if (contador == 2){
  Serial.print("El nombre del dulce 2 es: ");
  Serial.println(dulce2.nombres_dulce);
  Serial.print("La cantidad del dulce 2 es: ");
  Serial.println(dulce2.cantidad_dulce);}
  
  if (contador == 3){
  Serial.print("El nombre del dulce 3 es: ");
  Serial.println(dulce3.nombres_dulce);
  Serial.print("La cantidad del dulce 3 es: ");
  Serial.println(dulce3.cantidad_dulce);}
  
  if (contador == 4){
  Serial.print("El nombre del dulce 4 es: ");
  Serial.println(dulce4.nombres_dulce);
  Serial.print("La cantidad del dulce 4 es: ");
  Serial.println(dulce4.cantidad_dulce);}
}
  


 
  else if(digitalRead(3)==HIGH){  
   delay(350);
   contador = contador-1;  
    Serial.println(contador );
   
    
    if (contador == 1) {
  Serial.print("El nombre del dulce 1 es: ");
  Serial.println(dulce1.nombres_dulce);
  Serial.print("La cantidad del dulce 1 es: ");
  Serial.println(dulce1.cantidad_dulce);}
  
    if (contador == 2){
  Serial.print("El nombre del dulce 2 es: ");
  Serial.println(dulce2.nombres_dulce);
  Serial.print("La cantidad del dulce 2 es: ");
  Serial.println(dulce2.cantidad_dulce);}
  
    if (contador == 3){
  Serial.print("El nombre del dulce 3 es: ");
  Serial.println(dulce3.nombres_dulce);
  Serial.print("La cantidad del dulce 3 es: ");
  Serial.println(dulce3.cantidad_dulce);}
  
    if (contador == 4){
  Serial.print("El nombre del dulce 4 es: ");
  Serial.println(dulce4.nombres_dulce);
  Serial.print("La cantidad del dulce 4 es: ");
      Serial.println(dulce4.cantidad_dulce);}
    
  }
}
  