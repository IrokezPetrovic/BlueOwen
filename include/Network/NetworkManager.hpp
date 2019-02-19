#if !defined(NETWORKING_HPP)
#define NETWORKING_HPP


#define BLE_NRF51       1
#define WIFI_ESP8266    2


#if NETWORK_MODULE==BLE_NRF51

#include "NRF51/NRF51NetworkModule.hpp"
#define NetworkModule Nrf51NetworkModule

#elif NEWORK_MODULE==WIFI_ESP8266

#include "ESP8266/ESP8266NetworkModule.hpp"
#define NetworkModule Esp8266NetworkModule

#else
#error  Сетевой модуль не определен!
#include "INetworkModule.hpp"
#define NetworkModule INetworkModule
#endif 

#endif// NETWORKING_HPP