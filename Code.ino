#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9  // Reset pin
#define SS_PIN 10  // Slave select pin

MFRC522 rfid(SS_PIN, RST_PIN);

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  SPI.begin();         // Initialize SPI bus
  rfid.PCD_Init();     // Initialize RFID module
  Serial.println("Place your NFC ID near the reader...");
}

void loop() {
  // Check for new RFID card
  if (!rfid.PICC_IsNewCardPresent()) {
    return;
  }

  // Verify if the card is readable
  if (!rfid.PICC_ReadCardSerial()) {
    return;
  }

  Serial.print("Card UID: ");
  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(rfid.uid.uidByte[i], HEX);  // Print UID in HEX
  }
  Serial.println();

  // Halt PICC (Card)
  rfid.PICC_HaltA();

  // Stop encryption on PCD
  rfid.PCD_StopCrypto1();
}
