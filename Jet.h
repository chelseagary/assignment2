#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines=1);

    virtual ~Jet();
    int getNumEngines();
    void setNumEngines(int num);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif
