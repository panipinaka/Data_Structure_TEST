#include <stdint.h>
#include <assert.h>
#include "heap.h"

void test_sort( f data[], uint32_t len)
{
	uint32_t idx;
	for (idx = 1; idx <= len; ++idx) {
		assert (data[idx].time_stamp <= data[idx+1].time_stamp);
	}
}

void test_heap()
{

f data[] = { {0,167365,1},
                            {1130,224678,0},
                            {1030,247291,1},
                            {1330,84202,0},
                            {130,163191,0},
                            {450,136190,1},
                            {1654,234653,1}
                            };

	Heap heap = heap_new(data,6);
	//heap_insert(&heap, 47);
	//heap_test(&heap);
	//assert(heap_get_max(&heap) == 93);
	//assert(heap_extract_max(&heap) == 93);
	//heap_test(&heap);
	//assert(heap_size(&heap) == 10);

	heap_sort(&heap);
	test_sort(heap.data, 6);

}

int main()
{
	test_heap();
	return 0;
}
