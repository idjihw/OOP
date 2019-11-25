#include "String.h"
#include "Object.h"

String::String(const std::string& str){
	this->_val = str;
}

std::string String::val(){
	return this->_val;
}

void String::set_val(const std::string& str){
	this->_val = str;
}

json_object* String::parse(const char* str, int length, char base){
	int& _pos = json_object::_index;
	std::string _str = "";

	while (_pos < length){
		switch (str[_pos]){
			case '\'':
				return new String(_str);
			default:
				_str += str[_pos];
				break;
		}
		++_pos;
	}

	return NULL;
}

Object<std::string>::_type String::type(){
	return json_object::STRING;
}

std::string String::to_string(){
	return '\''+_val +'\'';
}
