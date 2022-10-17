#include <iostream>;

using namespace std;

int main () {
		
	float sumTemperatures = 0, temperature, maxTemp, minTemp;
	int temperatureNumber = 1;

	while ( temperatureNumber <= 6 ) {
		cout<<"Ingresa la temperatura "<<temperatureNumber<<": ";
		cin>>temperature;
		
		if ( temperatureNumber == 1 ) {
			maxTemp = temperature;
			minTemp = temperature;
		} else {
			if ( temperature >= maxTemp ) maxTemp = temperature;
			if ( temperature <= minTemp ) minTemp = temperature;
		}
		
		sumTemperatures += temperature; 
		temperatureNumber++;
		cout<<"\n";
	}
	
	cout<<"Temperature promedio: "<<sumTemperatures / temperatureNumber<<endl;
	cout<<"Temperatura mas alta: "<<maxTemp<<endl;
	cout<<"Temperatura mas baja: "<<minTemp<<endl;
		
	return 0;
}
