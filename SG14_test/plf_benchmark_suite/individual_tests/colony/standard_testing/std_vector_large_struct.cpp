#include "../../../plf_bench.h"


int main(int argc, char **argv)
{
	output_to_csv_file(argv[0]);

	benchmark_range< std::vector<large_struct> >(10, 100000, 1.1, 25, true);

	benchmark_range_remove_if< std::vector<large_struct_bool> >(10, 100000, 1.1, 25, true);

	return 0;
}
