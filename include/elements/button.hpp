#ifndef BUTTON__
#define BUTTON__

#include "elements/baseObject.hpp"
#include "style/style.hpp"
#include <functional>
#include <vector>

class Button : public Element<Button>{
    friend class App;
    void clicked() override;
    std::vector<std::function<void(Button&)>> callbacks;
    Style style;
public:
    Button();
    void connect(std::function<void(Button&)>);
    
    Button& setColor(float,float,float,float);

    Button& setBorderSize(float);

    Button& setBorderColor(float,float,float,float);

    Button& setVisibility(bool);

    bool getVisibility();
    
    Style getStyle() const override;
};

#endif