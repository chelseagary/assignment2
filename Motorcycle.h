#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle {

private:

public:
    Motorcycle();

    explicit Motorcycle(string brand, string model, string fuelType);

    virtual ~Motorcycle();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif
