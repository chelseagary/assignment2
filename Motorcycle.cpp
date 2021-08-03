#include "Motorcycle.h"

Motorcycle::Motorcycle(string brand, string model, string fuelType) {
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
}

Motorcycle::~Motorcycle() = default;

double Motorcycle::mileageEstimate(double time) {

	//similar to cars mileage, except much better
	
  double mileage = 30 * time;
  if (fuelType == "electricity") {
    mileage += mileage * 0.10;
  }
  return mileage;
}

string Motorcycle::toString() {
  return "-> Motorcycle\n" + PoweredVehicle::toString();
}
