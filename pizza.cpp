
#include <iostream>
#include <algorithm>

int main() {
    std::string houseNumber;
    std::cin >> houseNumber;

    if (houseNumber[0] == '0') {
        std::cout << "NO" << std::endl;
        return 0;
    }

    bool isMasterpiece = true;

    for (char digit : houseNumber) {
        if (digit != '0' && digit != '1' && digit != '6' && digit != '8' && digit != '9') {
            isMasterpiece = false;
            break;
        }
    }

    if (isMasterpiece) {
        std::string upsideDown = houseNumber;
        for (char &digit : upsideDown) {
            if (digit == '6') digit = '9';
            else if (digit == '9') digit = '6';
        }

        std::reverse(upsideDown.begin(), upsideDown.end());

        if (houseNumber == upsideDown) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}