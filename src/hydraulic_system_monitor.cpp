#include "robot_info/hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor() {}

void HydraulicSystemMonitor::set_hydraulic_oil_temperature(std::string hydraulic_oil_temperature) {
  // set member variables
  this->hydraulic_oil_temperature = hydraulic_oil_temperature;
}

void HydraulicSystemMonitor::set_hydraulic_oil_tank_fill_level(std::string hydraulic_oil_tank_fill_level) {
  // set member variables
  this->hydraulic_oil_tank_fill_level = hydraulic_oil_tank_fill_level;
}

void HydraulicSystemMonitor::set_hydraulic_oil_pressure(std::string hydraulic_oil_pressure) {
  // set member variables
  this->hydraulic_oil_pressure = hydraulic_oil_pressure;
}

std::string HydraulicSystemMonitor::get_hydraulic_oil_temperature() {
  // return member variables
  return this->hydraulic_oil_temperature;
}

std::string HydraulicSystemMonitor::get_hydraulic_oil_tank_fill_level() {
  // return member variables
  return this->hydraulic_oil_tank_fill_level;
}

std::string HydraulicSystemMonitor::get_hydraulic_oil_pressure() {
  // return member variables
  return this->hydraulic_oil_pressure;
}