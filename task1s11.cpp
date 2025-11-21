#include <iostream>

using namespace std;

class DeliveryTimeEstimator
{
public:
	int estimatTime(int distanceInKm)
	{
		int delivery = (distanceInKm / 10) + 1;
		return delivery;
	}
	int estimatTime(string cityName)
	{
        if (cityName == "Cairo")
        {
            return 2;
        }
        else if (cityName == "Alex")
        {
            return 3; 
        }
        else
        {
            return 5;
        }
	}
};



int main()
{
    DeliveryTimeEstimator d;
	cout<<"Delivery Time : "<<d.estimatTime(20) << endl;
	cout << "Delivery Time : " << d.estimatTime("Cairo")<<endl;
    cout << "Delivery Time : " << d.estimatTime("Giza") << endl;;
	return 0;
   
}

