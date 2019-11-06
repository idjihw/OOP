#ifndef BIKE_H
#define BIKE_H


#include "vehicle.h"


class bike : public vehicle{
protected:
	char* bike_name;
	int bike_number;
public:
	bike();
	bike(int, int);
	bike(int, int, char*);
	bike(int, int, char*, int);
	bike(int, int, char*, int, bool);

	int get_bike_number();
	char* get_bike_name();
	const char* get_class_name();

	void set_bike_name(char*);
	void set_bike_number(int);

	int get_wheel_number();
	int get_max_speed();
	bool get_has_name();
	void set_wheel_number(int);
	void set_max_speed(int);
	void set_has_name(bool);
};

#endif 
