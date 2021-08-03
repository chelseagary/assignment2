#include "Jet.h"

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
  setBrand(brand);
  setModel(model);
  setFuelType(fuelType);
  setNumEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumEngines() {
  return numberOfEngines;
}

void Jet::setNumEngines(int num) {
  numberOfEngines = num;
}

double Jet::mileageEstimate(double time) {
	//found on cplusplus, generates random number between 40-100
  double mileage = (rand() % 61+40) * time;

	if(numberOfEngines > 2 && fuelType == "Rocket"){
    mileage += mileage * 0.055;
  }

  return mileage;
}

string Jet::toString() {
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: " +
		getNumEngines();
}
