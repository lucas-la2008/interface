#include "app.hpp"
#include "elements/button.hpp"
#include <iostream>

int main(){
    //Creates the main application
    App main(200,200,"Hello World");

    // Uses the main application to create an element
    // and receive an reference to it, in this case, a Button
    Button& button = main.createElement<Button>();

    // Use the reference to modify the button properties
    // like color,size and etc...
    button
        .setColor(213.f,190.f,212.f,1.f)
        .setBorderSize(2.f)
        .setBorderColor(113.f,90.f,112.f,1.f)
        .setPosition(60.0f,70.0f)
        .setSize(80.0f,50.0f);

    // Connects a function that receives a
    // reference to a Button and return void
    // connect means the function to be
    // called when a click occurs
    button.connect([](Button& self)-> void{
        std::cout << "hello\n";
        self.setVisibility(!self.getVisibility());
    });

    // Starts the main loop
    main.run();
}