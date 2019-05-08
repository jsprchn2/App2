#include "Stock.h"
#include <vector>

class StockList
{
public:
	StockList();
	void AddToList(Platform::String^ tickerName);
	Stock SearchForName(Platform::String^ searchName);
	Stock OutputStock(int32 position);

private:
	std::vector<Stock> list;
};

