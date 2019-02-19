//#define NETWORK_INTERFACE BLE_NRF51
//#define NETWORK_INTERFACE ESP8266

#include <Arduino.h>
#include <TaskScheduler.h>
#include "Thermistor/Max6675Thermistor.hpp"
#include "Pid/TriacPid.hpp"
#include "Owen/Owen.hpp"
#include "Controller/OwenController.hpp"
#include "Network/NetworkManager.hpp"

Max6675Thermistor thermistor;
Scheduler scheduler;
TiracPid pid;

Owen owen(&thermistor, &pid);
OwenController controller(&owen);
NetworkModule networkModule(&controller);


void setup()
{
  
}

void loop()
{
//  scheduler.execute();    
}