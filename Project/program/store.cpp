#include "../src/store.h"
#include <iostream>

void Store::addProduct(Product* product) {
    products.push_back(product);
}

void Store::displayProducts() const {
    for(const auto& product : products) {
        std::cout << "Product: " << product->getName() << ", Price: " << product->getPrice() << std::endl;
    }
}

Store::~Store() {
    for(auto& product : products) {
        delete product;
    }
}