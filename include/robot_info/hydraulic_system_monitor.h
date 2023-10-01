#ifndef HYDRO_SYSTEM_H
#define HYDRO_SYSTEM_H

#include <ros/ros.h>
#include <string>

class HydraulicSystemMonitor {
protected:
  // member variables
  std::string hydraulic_oil_temperature;
  std::string hydraulic_oil_tank_fill_level;
  std::string hydraulic_oil_pressure;

public:
  // constructor
  HydraulicSystemMonitor();

  // member functions (setter)
  void set_hydraulic_oil_temperature(std::string hydraulic_oil_temperature);
  void set_hydraulic_oil_tank_fill_level(std::string hydraulic_oil_tank_fill_level);
  void set_hydraulic_oil_pressure(std::string hydraulic_oil_pressure);

  // member functions (getter)
  std::string get_hydraulic_oil_temperature();
  std::string get_hydraulic_oil_tank_fill_level();
  std::string get_hydraulic_oil_pressure();
};

#endif
