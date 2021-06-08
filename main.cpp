#include <iostream>

using namespace std;

int main()
{

    const int smallRoomPrice{25};
    const int largeRoomPrice{35};
    const int validDays{30};
    const double salesTax{.06};

    int smallRoomNum{0};
    int largeRoomNum{0};
    int totalCost{0};
    double totalTax{0};

    cout << "How many small rooms do you need cleaned?" << std::endl;
    cin >> smallRoomNum;

    cout << "How many large rooms do you need cleaned?" << std::endl;
    cin >> largeRoomNum;

    cout << "Estimate for carpet cleaning service" << std::endl;
    cout << "Number of small rooms: " << smallRoomNum << "\nNumber of large rooms: " << largeRoomNum << std::endl;
    cout << "Price per small room: $" << smallRoomPrice << "\nPrice per large room: $" << largeRoomPrice << std::endl;

    totalCost += (smallRoomNum * smallRoomPrice) + (largeRoomNum * largeRoomPrice);
    totalTax += salesTax * totalCost;

    cout << "Cost: $" << totalCost << "\nTax: $" << totalTax << std::endl;
    cout << "=============================================================" << std::endl;

    totalCost = totalCost + totalTax;

    cout << "Total estimate: $" << totalCost << "\nThis estimate is valid for " << validDays << " days." << std::endl;

    return 0;
}