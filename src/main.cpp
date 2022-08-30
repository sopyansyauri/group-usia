#include <iostream>
#include <string>

void cluster(int &usia) {
     if (usia > 0 && usia <= 14) {
          std::cout << "Usia kamu masih anak anak" << std::endl;
     } else if (usia >= 15 && usia <= 19) {
          std::cout << "Usia kamu udah remaja" << std::endl;
     } else if (usia >= 20 && usia <= 30) {
          std::cout << "Usia kamu masih muda" << std::endl;
     } else {
          std::cout << "Usia kamu udah tua" << std::endl;
     }
}

int main() {
     std::string name;
     int umur;

     std::cout << "Nama: ";
     std::getline(std::cin, name);
     std::cout << "Umur: ";
     std::cin >> umur;

     std::cout << "Nama kamu adalah " << name << std::endl;
     std::cout << "Usia kamu adalah " << umur << " Tahun" << std::endl;

     cluster(umur);

}