#include "../src/electronics.h"
#include "../src/food.h"
#include "../src/clothing.h"
#include "../src/discounted_product.h"
#include "../src/store.h"
#include <iostream>

int main() {
    Electronics* laptop = new Electronics("Laptop", 1000.0);
    Food* apple = new Food("Apple", 1.0);
    Clothing* shirt = new Clothing("Shirt", 20.0);

    DiscountedProduct* discountedLaptop = new DiscountedProduct(laptop, 10.0); // 10% sleva

    Store store;
    store.addProduct(discountedLaptop);
    store.addProduct(apple);
    store.addProduct(shirt);

    store.displayProducts();

    return 0;
}