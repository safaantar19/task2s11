#include <iostream>
using namespace std;
class Delivery
{
public:
    virtual double calculateCost(double weight)
    {
        return 0;

    }

};
class StandardDelivery : public Delivery {
public:

    double calculateCost(double weight) override {
        double cost = 10 + weight * 2;
        return cost;
    }
};

class ExpressDelivery : public Delivery {
public:

    double calculateCost(double weight)  override {
        double cost = 20.0 + (weight * 3.0);
        return cost;
    }
};


int main()
{
    Delivery* a;
    StandardDelivery s;
    ExpressDelivery e;
	a = &s;
	cout << "Standard Delivery Cost for 5kg: " << a->calculateCost(5) << endl;
	a = &e;
	cout << "Express Delivery Cost for 5kg: " << a->calculateCost(5) << endl;




}
