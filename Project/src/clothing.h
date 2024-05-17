#define CLOTHING_H

#include "product.h"

class Clothing : public Product {
private:
    std::string name;
    double price;
public:
    Clothing(const std::string& n, double p) : name(n), price(p) {}
    std::string getName() const override;           //přetížené metody 
    double getPrice() const override;
};