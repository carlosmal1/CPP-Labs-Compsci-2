#include <iostream>
#include <vector>

using namespace std;

class CashRegister
{
private:
	vector<double> prices;
	vector<bool> taxables;
	double taxRate = 0;

public:
	CashRegister(double aTaxRate);


	 void addItem(double price, bool taxable);
	 double getTotal();
	 int getCount();
	 void clear();
};

int main () {

int CashRegister(double aTaxRate)
{
	prices = vector<double>();
	taxables = vector<bool>();
	taxRate = aTaxRate;
}

void CashRegister.addItem(double price, bool taxable)
{
	prices.push_back(price);
	taxables.push_back(taxable);
}

double CashRegister.getTotal()
{
	double totalPrice = 0;
	double taxableTotal = 0;
	for (int i = 0; i < prices.size(); ++i)
	{
		totalPrice += prices[i];
		if (taxables[i])
		{
			taxableTotal += prices[i];
		}
	}
	return totalPrice + taxableTotal * taxRate / 100;
}

int CashRegister.getCount()
{
	return prices.size();
}

void CashRegister.clear()
{
	prices.clear();
	taxables.clear();
}
}