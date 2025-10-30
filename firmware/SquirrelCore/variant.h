#pragma once

// =========================================================
// SquirrelCore Variant Definition
// Hardware: ESP32-S3FN8 + SX1262 + PA1010D + BME280 + OLED (HS91L02W2C01)
// =========================================================

// -------------------- Board Identification --------------------
#define VENDOR_CUSTOM
#define BOARD_SQUIRRELCORE
#define BOARD_NAME                  "SquirrelCore"
#define HAS_LORA
#define HAS_BME280
#define HAS_GPS
#define HAS_DISPLAY
#define HAS_BUZZER
#define HAS_BATTERY_MONITOR

// -------------------- I2C Bus --------------------
#define I2C_SDA                     8
#define I2C_SCL                     9

// Shared bus devices (different I2C addresses):
//  - BME280:    0x76 or 0x77
//  - GPS (PA1010D): 0x10 (default, depends on config)
//  - OLED (HS91L02W2C01): 0x3C (typical)

// -------------------- LoRa (SX1262) --------------------
#define LORA_SCK                    18
#define LORA_MISO                   33
#define LORA_MOSI                   17
#define LORA_NSS                    21
#define LORA_RESET                  36
#define LORA_DIO1                   35
#define LORA_BUSY                   34
// DIO0 not required for SX1262, only DIO1 used for IRQ

// -------------------- GPS (PA1010D) --------------------
#define GPS_SDA                     I2C_SDA
#define GPS_SCL                     I2C_SCL
#define GPS_RESET                   -1     // Tied to 3.3V
#define GPS_WAKE                    37
#define GPS_POWER_EN                -1     // Always powered

// -------------------- Sensors --------------------
#define BME280_SDA                  I2C_SDA
#define BME280_SCL                  I2C_SCL

// -------------------- Display --------------------
#define OLED_SDA                    I2C_SDA
#define OLED_SCL                    I2C_SCL
#define OLED_ADDR                   0x3C

// -------------------- Battery Sense --------------------
#define BATTERY_SENSE_PIN           4
#define BATTERY_DIVIDER_HIGH        220000.0f  // 220kΩ
#define BATTERY_DIVIDER_LOW         100000.0f  // 100kΩ
#define BATTERY_VREF                3.3f
// Voltage divider output = Vbat * (Rlow / (Rhigh + Rlow))

// -------------------- Indicators --------------------
#define LED_PIN                     14
#define LED_ACTIVE_LEVEL            HIGH

// -------------------- Buzzer --------------------
#define BUZZER_PIN                  38
#define BUZZER_ACTIVE_LEVEL         HIGH

// -------------------- Helper Macros --------------------
#define UNUSED_PIN                  (-1)
