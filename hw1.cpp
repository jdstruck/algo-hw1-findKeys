#include <iostream>
#include <chrono>
#include <vector>
#include <unordered_set>
#include <functional>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <tuple>

std::vector<std::tuple<int, int, int>> findAllSumKeys(std::vector<int> A) {
        std::vector<std::tuple<int, int, int>> outputVec;
        std::sort(A.begin(), A.end());

                for (int i=A.size()-1; i >= 0; --i) { 
                        int key = A[i];
                        std::unordered_set<int> uset;
                        for (int i=0; i<A.size(); ++i) {
                                int diff = key-A[i];
                                if (diff < 0) continue;
                                if (uset.find(diff) == uset.end()) {
                                        uset.emplace(A[i]);
                                } else {
                                       // std::cout << key << " " << diff << " " << A[i] << std::endl;
                                        
                                        outputVec.emplace_back(std::make_tuple(key, diff, A[i]));
                                        uset.erase(A[i]);
                                }                   
                        }
                A.erase(A.end()-1);
        }
        return outputVec;
}

int main(int argc, char *argv[]) {

        if (argc < 3 || argc > 3) {
                std::cerr << "Usage: " << argv[0] << " inputFile outputFile" << std::endl;
                return 1;
        }

        std::vector<int> A;
        std::string line;

        std::ifstream ifile(argv[1]);
        std::istream_iterator<int> input(ifile);
        std::copy(input, std::istream_iterator<int>(), std::back_inserter(A));

        std::vector<std::tuple<int,int,int>> keySums = findAllSumKeys(A);

        std::ofstream ofile (argv[2]);
        if (ofile.is_open()) {
                for (int i = keySums.size()-1; i >= 0; --i) {
                        std::tuple<int,int,int> k = keySums[i];
                        ofile << std::get<0>(k) << " ";
                        ofile << std::get<1>(k) << " ";
                        ofile << std::get<2>(k) << "\n";
                }
                ofile.close();
        }
        return 0;

}

