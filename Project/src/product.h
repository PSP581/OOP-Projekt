#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
    protected:
    std::string name; 
    double price;     
public:
    virtual std::string getName() const = 0;
    virtual double getPrice() const = 0;
    virtual ~Product() = default;
};
#endif
