#include "SPI.h"

void spi_bus_init() {
    spi_device_interface_config_t dev_config = {};
    dev_config.clock_speed_hz = 10000000;
    dev_config.mode = 3;
    dev_config.spics_io_num = _cs_pin;
    dev_config.queue_size = 1;

}

uint8_t SpiDevice ::mcp4132_wrrite_register (uint8_t tx_data) {
    uint8_t rx_data = 0; 

    spi_transaction_t t={};
    t.length = 16;
    t.tx_buffer = &tx_data;
    t.rx_buffer = &rx_data;

    return rx_data;
}
