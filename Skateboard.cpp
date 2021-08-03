#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
  setBrand(brand);
  setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
  double mileage = rand()%41+10;
	mileage = mileage/100;
	floor(mileage);
  mileage = mileage * time;

	double third = time/3;
	double random;

	if ((time>=25) && (time<=250)){
		random = rand()%third+1;
		mileage = random;
	}

  return mileage;
}

string Skateboard::toString() {
  return "-> Skateboard\n" + Vehicle::toString();
}
