#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class vehicle {
protected:
	bool has_name;
	int wheel_number;
	int max_speed;
public:
	vehicle();
	vehicle(int, int);
	vehicle(int, int, bool);
	virtual int get_wheel_number();
	virtual int get_max_speed();
	virtual bool get_has_name();
	const char* get_class_name();
	virtual void set_wheel_number(int);
	virtual void set_max_speed(int);
	virtual void set_has_name(bool);

};

#endif
