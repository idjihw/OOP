#ifndef CAR_H
#define CAR_H
	
#include "vehicle.h"

class car : public vehicle{
protected:
	char* car_name;
public:
	car();
	car(int, int);
	car(int, int, char*);
	car(int, int, char*, bool);


	char* get_car_name();
	const char* get_class_name();
	void set_car_name(char*);

	int get_wheel_number();
	int get_max_speed();
	bool get_has_name();
	void set_wheel_number(int);
	void set_max_speed(int);
	void set_has_name(bool);
};

#endif
