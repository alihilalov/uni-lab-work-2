#include <iostream>
#include <map>

using namespace std;

// Hazirki mezenne
map<string, double> exchangeRates = {
    {"SEK", 0.166}, // 1 SEK = 0.166 AZN
    {"KWD", 3.804}, // 1 KWD = 3.804 AZN
    {"CNY", 0.416}  // 1 CNY = 0.416 AZN
};

// Cevirmeleri aparan funksiya
double convertToAZN(double amount, const string &fromCurrency)
{
    if (exchangeRates.find(fromCurrency) == exchangeRates.end())
    {
        cout << "Invalid currency!" << endl;
        return -1;
    }

    double exchangeRate = exchangeRates[fromCurrency];
    return amount * exchangeRate;
}

int main()
{
    double amount;
    string fromCurrency;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Enter currency to convert from (SEK, KWD, CNY): ";
    cin >> fromCurrency;

    double convertedAmount = convertToAZN(amount, fromCurrency);
    if (convertedAmount != -1)
    {
        cout << amount << " " << fromCurrency << " is equivalent to " << convertedAmount << " AZN" << endl;
    }

    return 0;
}