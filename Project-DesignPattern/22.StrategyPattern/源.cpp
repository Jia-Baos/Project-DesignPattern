#include <iostream>
#include "Class/Context.h"
#include "Class/Strategy.h"
#include "Class/BubbleSort.h"
#include "Class/InsertSort.h"
#include "Class/SelectionSort.h"

int main(int argc, char* argv[])
{
	Context* ctx = new Context();
	int arr[] = { 10, 23, -1, 0, 300, 87, 28, 77, -32, 2 };
	ctx->setInput(arr, sizeof(arr) / sizeof(int));
	std::cout << "ÊäÈë" << std::endl;
	ctx->print();

	// BubbleSort
	ctx->setSortStrategy(new BubbleSort());
	ctx->sort();

	// SelectionSort
	ctx->setSortStrategy(new SelectionSort());
	ctx->sort();

	// InsertSort
	ctx->setSortStrategy(new InsertSort());
	ctx->sort();

	delete ctx;
	ctx = nullptr;

	return 0;
}
