//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);
}

shared_mut::~shared_mut() {
    release();
}

Object* shared_mut::get() const{
	if(_mgr == nullptr){
		return nullptr;
	}
    return _mgr->ptr;
}

void shared_mut::release(){
   _mgr->count--;
   if(_mgr->count == 0){
       _mgr->~mgr();
   }
   _mgr = new mgr();
}

int shared_mut::count(){
	return _mgr->count;
}

void shared_mut::increase(){
	_mgr->count++;
}


Object* shared_mut::operator->() {
    return this->_mgr->ptr;
}

shared_mut::shared_mut(const shared_mut& r){	// copy constructor   
    _mgr = r._mgr;
    this->increase();
}

shared_mut shared_mut::operator+(const shared_mut &shared){
        int newval = this->_mgr->ptr->get() + shared._mgr->ptr->get();
        return shared_mut(new Object(newval));

}

shared_mut shared_mut::operator-(const shared_mut &shared){
        int newval = this->_mgr->ptr->get() - shared._mgr->ptr->get();
        return shared_mut(new Object(newval));

}
shared_mut shared_mut::operator*(const shared_mut &shared){
	int newval = this->_mgr->ptr->get() * shared._mgr->ptr->get();
        return shared_mut(new Object(newval));
}

shared_mut shared_mut::operator/(const shared_mut &shared){
        int newval = this->_mgr->ptr->get() / shared._mgr->ptr->get();
        return shared_mut(new Object(newval));


}
shared_mut& shared_mut::operator=(const shared_mut &r){
	this->_mgr->~mgr();
	this->_mgr = r._mgr;
	this->increase();
	return *this;
}


} // end of namespace ptr
