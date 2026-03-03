#pragma once
 
#define TARGET_BOARD_IDENTIFIER "F411"
 
// --- LƯỢC BỎ TÍNH NĂNG ĐỂ GIẢM DUNG LƯỢNG FLASH ---
#undef USE_NAV
#undef USE_OSD
#undef USE_BLACKBOX
#undef USE_MAG
#undef USE_BARO
#undef USE_LED_STRIP
#undef USE_TRANSPONDER

// --- CẤU HÌNH RECEIVER M-BUS (SBUS) ---
#define USE_RX_SBUS
#define SBUS_UART UART1 
// UART1 RX là chân PA10 trên Black Pill

// --- CẤU HÌNH CẢM BIẾN GYRO (MPU6500) ---
#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define MPU6500_CS_PIN          PA4
#define MPU6500_SPI_INSTANCE    SPI1

// --- ĐỊNH NGHĨA CHÂN CHO DELTA WING ---
#define HW_PIN_MOTOR_1 PA8      // Chân tín hiệu ESC
#define HW_PIN_SERVO_1 PA15     // Servo Elevon trái
#define HW_PIN_SERVO_2 PB3      // Servo Elevon phải
