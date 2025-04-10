#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampuMerah = 33;
int lampuKuning = 25;
int lampuHijau = 26;

void setup() {
    Serial.begin(9600);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Traffic Light System");

    // Atur pin sebagai OUTPUT
    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuHijau, OUTPUT);
}

void loop() {
    // Nyalakan lampu merah (STOP)
    digitalWrite(lampuMerah, HIGH);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Lampu Merah - STOP");
    delay(3000); // Lampu merah menyala selama 3 detik

    // Nyalakan lampu hijau (JALAN)
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, HIGH);
    Serial.println("Lampu Hijau - JALAN");
    delay(3000); // Lampu hijau menyala selama 3 detik

    // Nyalakan lampu kuning (SIAP-SIAP)
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Lampu Kuning - SIAP");
    delay(500); // Lampu kuning menyala selama 0,5 detik
}