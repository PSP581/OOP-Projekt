#define DISCOUNTED_PRODUCT_H

#include "product.h"
#include <string>

//třídA v roli objektu
//produkt jako atribut
class DiscountedProduct : public Product {
private:
    Product* product;
    double discountPercentage;
public:
    DiscountedProduct(Product* p, double d) : product(p), discountPercentage(d) {}  //hierarchie objektů
    std::string getName() const override;
    double getPrice() const override;
    double getDiscountedPrice() const;
};