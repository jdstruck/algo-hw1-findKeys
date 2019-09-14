#include <iostream>
#include <chrono>
#include <vector>
#include <unordered_set>
#include <functional>

void findSumKeys(std::vector<int> A, int key) {
        std::unordered_set<int> uset;
        for (int i=0; i<A.size(); ++i) { 
                int diff = key-A[i];
                if (diff < 0) continue;
                if (uset.find(diff) == uset.end()) {
                        uset.emplace(A[i]);
                } else {
                        std::cout << key << ": ";
                        std::cout << key-A[i] << " ";
                        std::cout << A[i] << std::endl;
                        uset.erase(A[i]);
                }                      
        }
}

int main() {
        auto t1 = std::chrono::high_resolution_clock::now();
        std::vector<int> A = {18,23,4,35,99,67,198,20,38,55,2,18,19,487,11,40,10,13,27,22};
        std::sort(A.begin(), A.end());//, std::greater<int>());

        //for (auto key: A) {
        //for (int i=0; i<A.size(); ++i) { 
        for (int i=A.size()-1; i >= 0; --i) { 
                //std::cout << A[i] << " ";
                int key = A[i];

                findSumKeys(A,key);

                A.erase(A.end()-1);
        
        }

        auto t2 = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count();

        std::cout << "\n" << "Execution Time: " << duration << " μs" << std::endl;
        return 0;

}

