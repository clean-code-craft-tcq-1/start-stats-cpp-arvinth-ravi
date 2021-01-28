#include "stats.h"
#include <algorithm>
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& vect) {

	std::vector<float>::const_iterator itr = vect.begin();
	Stats S1;
	float t = 0.0F;
    S1.min = *std::min_element(vect.begin(),vect.end());
    S1.max = *std::max_element(vect.begin(),vect.end());

		for( ; itr!=vect.end(); ++itr)
		{
			t = t + *itr;
		}

		S1.avg = t / vect.size() ;
		return S1;
}
