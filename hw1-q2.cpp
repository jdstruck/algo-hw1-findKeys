#include <iostream>
#include <cmath>

int main() {
        int countMe = 0;
        int n = 2;
        int ipow = std::pow(2,3);
        int jpow = std::pow(2,4) / 5;

        std::cout << "ipow: " << ipow << std::endl;
        std::cout << "jpow: " << jpow << std::endl;
        std::cout << "jpow floor: " << std::floor(std::pow(2,4)/5) << std::endl;

        for (int i=0; i<ipow; i++) {
                for (int j=0; j<std::floor(std::pow(2,4)/5); j++) {
                        countMe++;
                }
        }
        std::cout << countMe << std::endl;

}

