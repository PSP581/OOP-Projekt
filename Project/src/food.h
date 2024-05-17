#define FOOD_H

#include "product.h"

class Food : public Product {
private:
    std::string name;
    double price;
public:
    Food(const std::string& n, double p) : name(n), price(p) {}
    std::string getName() const override;           //přetížené metody 
    double getPrice() const override;
};