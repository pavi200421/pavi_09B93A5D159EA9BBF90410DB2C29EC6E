#include <iostream>
#include <vector>

std::vector<int> linear_search_product(const std::vector<std::string>& product_list, const std::string& target_product) {
    std::vector<int> indices;

    for (int i = 0; i < product_list.size(); ++i) {
        if (product_list[i] == target_product) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::vector<std::string> products = {"Apple", "Banana", "Orange", "Apple", "Mango", "Apple"};
    std::string target = "Apple";
    std::vector<int> result = linear_search_product(products, target);

    for (int index : result) {
        std::cout << "Found at index: " << index << std::endl;
    }

    return 0;
}
