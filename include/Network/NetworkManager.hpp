#if !defined(NETWORKING_HPP)
#define NETWORKING_HPP



//NRF51922
#if NETWORK_MODULE == BLE_NRF51
//#include "NRF51/NRF51NetworkModule.hpp"
//#define NetworkModule Nrf51NetworkModule
#endif

//ESP8266
#if NEWORK_MODULE == ESP8266
#endif

#endif // NETWORKING_HPP
