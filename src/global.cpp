#include "global.h"

// Task 1
// QueueHandle_t tempQueue =  xQueueCreate(1, sizeof(float));
SemaphoreHandle_t tempCold = xSemaphoreCreateBinary();
SemaphoreHandle_t tempWarm = xSemaphoreCreateBinary();
SemaphoreHandle_t tempHot = xSemaphoreCreateBinary();



// Task 2
// QueueHandle_t humiQueue =  xQueueCreate(1, sizeof(float));
SemaphoreHandle_t humiCold = xSemaphoreCreateBinary();
SemaphoreHandle_t humiWarm = xSemaphoreCreateBinary();
SemaphoreHandle_t humiHot = xSemaphoreCreateBinary();

//Task 3
QueueHandle_t stateQueue = xQueueCreate(1, sizeof(display_state_t));

//Task 4
SemaphoreHandle_t sensorMutex = xSemaphoreCreateMutex();
float glob_temperature = 0;
float glob_humidity = 0;

SemaphoreHandle_t thresholdMutex = xSemaphoreCreateMutex();
float temp_warn = 30.0;
float temp_crit = 35.0;
float humi_warn = 70.0;
float humi_crit = 80.0;


