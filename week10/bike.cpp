#include "bike.h"


bike::bike(){

}
bike::bike(int wheel_number, int max_speed) : vehicle(wheel_number, max_speed){
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
}
bike::bike(int wheel_number, int max_speed, char* bike_name) : vehicle(wheel_number, max_speed){
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
	this->bike_name = bike_name;

}
bike::bike(int wheel_number, int max_speed, char* bike_name, int bike_number) : vehicle(wheel_number, max_speed){
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
	this->bike_name = bike_name;
	this->bike_number = bike_number;
}
bike::bike(int wheel_number, int max_speed, char* bike_name, int bike_number, bool has_name) : vehicle(wheel_number, max_speed, has_name){
	this->wheel_number = wheel_number;
	this->max_speed = max_speed;
	this->bike_name = bike_name;
	this->bike_number = bike_number;
	this->has_name = has_name;
}

int bike::get_bike_number(){
	return this->bike_number;
}

char* bike::get_bike_name(){
	return this->bike_name;
}
const char* bike::get_class_name(){
	return "bike";
}

void bike::set_bike_name(char* bike_name){
	this->bike_name = bike_name;
}
void bike::set_bike_number(int bike_number){
	this->bike_number = bike_number;
}

int bike::get_wheel_number(){
	return this->wheel_number;
}
int bike::get_max_speed(){
	return this->max_speed;
}
bool bike::get_has_name(){
	return this->has_name;
}
void bike::set_wheel_number(int wheel_number){
	this->wheel_number = wheel_number;
}
void bike::set_max_speed(int max_speed){
	this->max_speed = max_speed;
}

void bike::set_has_name(bool has_name){
	this->has_name = has_name;
}
