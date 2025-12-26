#define BUTTON_PIN 9
#define PIN_BUZZER 12
#define LED_PIN 13      // 12 or 13 (DIO)
#define LED_STATE_ON 1 // High active

#define I2C_SCL 2
#define I2C_SDA 3
#define USE_SSD1306

#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define USE_SX1268
#define LORA_SCK 10
#define LORA_MISO 6
#define LORA_MOSI 7
#define LORA_CS 8
#define LORA_DIO0 RADIOLIB_NC
#define LORA_RESET 5
#define LORA_DIO1 1
#define LORA_DIO2 RADIOLIB_NC
#define LORA_RXEN 0
#define LORA_BUSY 4
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_RXEN LORA_RXEN
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_MAX_POWER 22
