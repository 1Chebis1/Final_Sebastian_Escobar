#include "SPI.h"

void spi_bus_init() {
    spi_device_interface_config_t dev_config = {};
    dev_config.clock_speed_hz = 10000000;
    dev_config.mode = 3;
    dev_config.spics_io_num = _cs_pin;
    dev_config.queue_size = 1;

}