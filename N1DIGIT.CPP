#include <iostream>
#include <string>

int kiemtra(int N) {
    int kq = 0;
    for (int i = 1; i <= N; ++i) {
        std::string ki_tu = std::to_string(i);
        bool somotso = true;
        for (char ch : ki_tu) {
            if (ch != ki_tu[0]) {
                somotso = false;
                break;
            }
        }
        if (somotso) {
            kq += 1;
        }
    }
    return kq;
}

int main() {
    int N;
    std::cin >> N;
    int kq = kiemtra(N);
    std::cout << kq << std::endl;
    return 0;
}

