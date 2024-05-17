#define ELECTRONICS_H

#include "product.h"

class Electronics : public Product {
private:
    std::string name;
    double price;
public:
    Electronics(const std::string& n, double p) : name(n), price(p) {}
    std::string getName() const override;       //přetížené metody 
    double getPrice() const override;
};