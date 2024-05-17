#include "../src/discounted_product.h"

std::string DiscountedProduct::getName() const {
    return product->getName();
}

double DiscountedProduct::getPrice() const {
    return getDiscountedPrice();
}

double DiscountedProduct::getDiscountedPrice() const {
    return product->getPrice() * (1 - discountPercentage / 100);
}
