#pragma once 
#include "driver/spi_master.h"
#include "driver/gpio.h"

class SpiDevice{
    public: 
        SpiDevice(spi_host_device_t host, gpio_num_t cs_pin);

        void begin(int clock_speed_hz = 1000000);
        
        uint8_t transfer(uint8_t data);

    private : 
        spi_host_device_t _host;
        gpio_num_t _cs_pin;
        spi_device_handle_t _handle;
};