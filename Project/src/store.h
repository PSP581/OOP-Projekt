#define STORE_H

#include "product.h"
#include <vector>

class Store {
private:
    std::vector<Product*> products;
public:
    void addProduct(Product* product);
    void displayProducts() const;
    ~Store();
};

