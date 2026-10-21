#include "elements/baseObject.hpp"
#include "vectors.hpp"

// Setters
BaseObject& BaseObject::setPosition(float x, float y){
    position = {x,y};
    return *this;
}

BaseObject& BaseObject::setSize(float x, float y){
    size = {x,y};
    return *this;
}

// Getters
Vec::Vector2 BaseObject::getPosition(){
    return position;
}

Vec::Vector2 BaseObject::getSize(){
    return size;
}