const int led_merah = 3;
const int led_kuning = 2;
const int led_hijau = 1;

const int jeda_led_merah=7000;
const int jeda_led_kuning=1000;
const int jeda_led_hijau=4000;

void setup () {
pinMode(led_merah, OUTPUT);
pinMode(led_kuning, OUTPUT);
pinMode(led_hijau, OUTPUT);
}

void loop() {
//LED hijau menyala
digitalWrite(led_hijau, HIGH);
delay(jeda_led_hijau);
//LED hijau mati
digitalWrite(led_hijau, LOW);

//LED kuning menyala
digitalWrite(led_kuning, HIGH);
delay(jeda_led_kuning);
//LED hijau mati
digitalWrite(led_kuning, LOW);

//LED hijau menyala

digitalWrite(led_merah, LOW);
}

