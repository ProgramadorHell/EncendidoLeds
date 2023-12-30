// Definir el pin al que está conectado el LED
int led = 13;

void setup() {
  // Configurar el pin del LED como salida
  pinMode(led, OUTPUT);
}

void loop() {
  // Encender el LED
  digitalWrite(led, HIGH);
  delay(1000); // Esperar 1 segundo

  // Apagar el LED
  digitalWrite(led, LOW);
  delay(1000); // Esperar 1 segundo
}
