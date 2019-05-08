#include "StockList.h""
#include <vector>

ref class StockPortfolio sealed
{
public:
	ref class StockPortfolio();
	void AddToList(Platform::String^ tickerName, int32 quantity, float32 price);
	Stock SearchForName(Platform::String^ searchName);
	Stock OutputStock(int32 position);

private:
	std::vector<Stock> list;
};