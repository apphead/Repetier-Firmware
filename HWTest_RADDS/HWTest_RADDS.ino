#define MOTHERBOARD 402
//#define RFSERIAL SerialUSB
//#define SERIAL_PORT 1
#include "pins.h"

void setup() {
  pinMode(FAN_PIN , OUTPUT);
  pinMode(FAN2_PIN , OUTPUT);
  pinMode(HEATER_0_PIN , OUTPUT);
  pinMode(HEATER_1_PIN , OUTPUT);
  pinMode(HEATER_2_PIN , OUTPUT);
  pinMode(LED_PIN  , OUTPUT);
  
  pinMode(ORIG_X_STEP_PIN  , OUTPUT);
  pinMode(ORIG_X_DIR_PIN    , OUTPUT);
  pinMode(ORIG_X_ENABLE_PIN    , OUTPUT);
  
  pinMode(ORIG_Y_STEP_PIN  , OUTPUT);
  pinMode(ORIG_Y_DIR_PIN    , OUTPUT);
  pinMode(ORIG_Y_ENABLE_PIN    , OUTPUT);
  
  pinMode(ORIG_Z_STEP_PIN  , OUTPUT);
  pinMode(ORIG_Z_DIR_PIN    , OUTPUT);
  pinMode(ORIG_Z_ENABLE_PIN    , OUTPUT);
  
  pinMode(ORIG_E0_STEP_PIN  , OUTPUT);
  pinMode(ORIG_E0_DIR_PIN    , OUTPUT);
  pinMode(ORIG_E0_ENABLE_PIN    , OUTPUT);

  pinMode(ORIG_E1_STEP_PIN  , OUTPUT);
  pinMode(ORIG_E1_DIR_PIN    , OUTPUT);
  pinMode(ORIG_E1_ENABLE_PIN    , OUTPUT);

  pinMode(ORIG_E2_STEP_PIN  , OUTPUT);
  pinMode(ORIG_E2_DIR_PIN    , OUTPUT);
  pinMode(ORIG_E2_ENABLE_PIN    , OUTPUT);

  pinMode(ORIG_E3_STEP_PIN  , OUTPUT);
  pinMode(ORIG_E3_DIR_PIN    , OUTPUT);
  pinMode(ORIG_E3_ENABLE_PIN    , OUTPUT);

  pinMode(ORIG_E4_STEP_PIN  , OUTPUT);
  pinMode(ORIG_E4_DIR_PIN    , OUTPUT);
  pinMode(ORIG_E4_ENABLE_PIN    , OUTPUT);
  
  pinMode(ORIG_E5_STEP_PIN  , OUTPUT);
  pinMode(ORIG_E5_DIR_PIN    , OUTPUT);
  pinMode(ORIG_E5_ENABLE_PIN    , OUTPUT);
  
  digitalWrite(ORIG_X_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_Y_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_Z_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_E0_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_E1_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_E2_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_E3_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_E4_ENABLE_PIN    , LOW);
  digitalWrite(ORIG_E5_ENABLE_PIN    , LOW);
}

void loop () {
  
  if (millis() %1000 <500) 
    digitalWrite(LED_PIN, HIGH);
  else
   digitalWrite(LED_PIN, LOW);
  
  if (millis() %1000 <300) {
    digitalWrite(HEATER_0_PIN, HIGH);
    digitalWrite(HEATER_1_PIN, LOW);
      digitalWrite(HEATER_2_PIN, LOW);
    digitalWrite(FAN_PIN, LOW);
      digitalWrite(FAN2_PIN, LOW);
  } else if (millis() %1000 <600) {
    digitalWrite(HEATER_0_PIN, LOW);
    digitalWrite(HEATER_1_PIN, HIGH);
      digitalWrite(HEATER_2_PIN, HIGH);
    digitalWrite(FAN_PIN, LOW);
      digitalWrite(FAN2_PIN, LOW);
  } else  {
    digitalWrite(HEATER_0_PIN, LOW);
    digitalWrite(HEATER_1_PIN, LOW);
      digitalWrite(HEATER_2_PIN, LOW);
    digitalWrite(FAN_PIN, HIGH);
      digitalWrite(FAN2_PIN, HIGH);
  }
  
  if (millis() %10000 <5000) {
    digitalWrite(ORIG_X_DIR_PIN    , HIGH);
    digitalWrite(ORIG_Y_DIR_PIN    , HIGH);
    digitalWrite(ORIG_Z_DIR_PIN    , HIGH);
    digitalWrite(ORIG_E0_DIR_PIN    , HIGH);
    digitalWrite(ORIG_E1_DIR_PIN    , HIGH);
    digitalWrite(ORIG_E2_DIR_PIN    , HIGH);
    digitalWrite(ORIG_E3_DIR_PIN    , HIGH);
    digitalWrite(ORIG_E4_DIR_PIN    , HIGH);
    digitalWrite(ORIG_E5_DIR_PIN    , HIGH);
  }
  else {
    digitalWrite(ORIG_X_DIR_PIN    , LOW);
    digitalWrite(ORIG_Y_DIR_PIN    , LOW);
    digitalWrite(ORIG_Z_DIR_PIN    , LOW);
    digitalWrite(ORIG_E0_DIR_PIN    , LOW);
    digitalWrite(ORIG_E1_DIR_PIN    , LOW);
    digitalWrite(ORIG_E2_DIR_PIN    , LOW);
    digitalWrite(ORIG_E3_DIR_PIN    , LOW);
    digitalWrite(ORIG_E4_DIR_PIN    , LOW);
    digitalWrite(ORIG_E5_DIR_PIN    , LOW);
  }
  
  
    digitalWrite(ORIG_X_STEP_PIN    , HIGH);
    digitalWrite(ORIG_Y_STEP_PIN    , HIGH);
    digitalWrite(ORIG_Z_STEP_PIN    , HIGH);
    digitalWrite(ORIG_E0_STEP_PIN    , HIGH);
    digitalWrite(ORIG_E1_STEP_PIN    , HIGH); 
    digitalWrite(ORIG_E2_STEP_PIN    , HIGH); 
    digitalWrite(ORIG_E3_STEP_PIN    , HIGH); 
    digitalWrite(ORIG_E4_STEP_PIN    , HIGH); 
    digitalWrite(ORIG_E5_STEP_PIN    , HIGH); 
  delay(1);
    
    digitalWrite(ORIG_X_STEP_PIN    , LOW);
    digitalWrite(ORIG_Y_STEP_PIN    , LOW);
    digitalWrite(ORIG_Z_STEP_PIN    , LOW);
    digitalWrite(ORIG_E0_STEP_PIN    , LOW);
    digitalWrite(ORIG_E1_STEP_PIN    , LOW);
    digitalWrite(ORIG_E2_STEP_PIN    , LOW);
    digitalWrite(ORIG_E3_STEP_PIN    , LOW);
    digitalWrite(ORIG_E4_STEP_PIN    , LOW);
    digitalWrite(ORIG_E5_STEP_PIN    , LOW);
}
