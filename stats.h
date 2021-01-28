#include <vector>

namespace Statistics {
	struct Stats
	{
		float min;
		float max;
		float avg;
	};
    Stats ComputeStatistics(const std::vector<float>& vect);
}
