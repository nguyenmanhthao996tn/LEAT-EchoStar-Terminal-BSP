#ifndef __ES_SENSORS_H__
#define __ES_SENSORS_H__

#include <Arduino.h>
#include <Wire.h>
#include "project_configuration.h"

class es_sensors
{
private:
    bool lis3dhtr_available;
    bool kx023_available;
    bool bme280_available;
    bool bme680_available;
    bool bme688_available;

    bool ping_lis3dhtr(void);
    bool ping_kx023(void);
    bool ping_bme280(void);
    bool ping_bme68x(void);

    bool is_bme688(void);

public:
    es_sensors(void);
    ~es_sensors(void);

    void power_on(void);
    void power_off(void);

    void init(void);
    void deinit(void);

    float read_temperature(void);
    float read_humidity(void);
    float read_pressure(void);

    void get_accel(float *x, float *y, float *z);
    float get_accel_x(void);
    float get_accel_y(void);
    float get_accel_z(void);
};

extern es_sensors SENSORS;

#endif /* __ES_SENSORS_H__ */
