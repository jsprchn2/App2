#include "pch.h"
#include "StockList.h"

StockList::StockList()
{
}


void StockList::AddToList(Platform::String^ tickerName)
{
	Stock newStock;
	newStock.UpdateStockInfo(tickerName);
	list.insert(list.end(), newStock);
}

Stock StockList::SearchForName(Platform::String^ searchName)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (searchName == list.at(i).GetName())
		{
			return list.at(i);
		}

		Stock NotFound;
		return NotFound;
	}
}

Stock StockList::OutputStock(int32 position)
{
	return list.at(position);
}