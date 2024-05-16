#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// Hàm tìm số nguyên tố ngẫu nhiên
int findRandomPrime() {
    int num;
    do {
        num = rand() % 100 + 1;
    } while (!isPrime(num));
    return num;
}

// Hàm tìm ước số chung lớn nhất
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Hàm tính toán khóa công khai và khóa riêng tư
void generateKeys(int& publicKey, int& privateKey, int& n) {
    int p = findRandomPrime();
    int q = findRandomPrime();

    n = p * q;
    int phi = (p - 1) * (q - 1);

    publicKey = rand() % (phi - 2) + 2;
    while (gcd(publicKey, phi) != 1) {
        publicKey = rand() % (phi - 2) + 2;
    }

    // Tìm khóa riêng tư dựa trên khóa công khai và mô đun phi
    int k = 2;
    while (((k * phi) + 1) % publicKey != 0) {
        k++;
    }
    privateKey = ((k * phi) + 1) / publicKey;
}

// Hàm mã hóa
int encrypt(int plaintext, int publicKey, int n) {
    return int(pow(plaintext, publicKey)) % n;
}

// Hàm giải mã
int decrypt(int ciphertext, int privateKey, int n) {
    return int(pow(ciphertext, privateKey)) % n;
}

int main() {
    srand(time(NULL));

    int publicKey, privateKey, n;
    generateKeys(publicKey, privateKey, n);

    int plaintext;
    cout << "Nhập vào plaintext: ";
    cin >> plaintext;

    int ciphertext = encrypt(plaintext, publicKey, n);
    cout << "Ciphertext: " << ciphertext << endl;

    int decryptedText = decrypt(ciphertext, privateKey, n);
    cout << "Plaintext sau khi giải mã: " << decryptedText << endl;

    return 0;
}
