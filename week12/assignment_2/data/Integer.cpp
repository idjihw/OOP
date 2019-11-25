#include "Integer.h"

Integer::Integer(int value){
	this->_val = value;
}

int Integer::val(){
	return this->_val;
}

void Integer::set_val(const int& value){
	this->_val = value;
}

json_object* Integer::parse(const char* str, int length){

	int& _pos = json_object::_index;
	std::string num = "";
	while (_pos < length){
		if (str[_pos] > 47 && str[_pos] < 57)
			num += str[_pos];
		else
			break;
		++_pos;
	}

	return new Integer(atoi(num.c_str()));
}

Object<int>::_type Integer::type(){
	return json_object::INT;
}

std::string Integer::to_string(){
	return std::to_string(_val);
}





