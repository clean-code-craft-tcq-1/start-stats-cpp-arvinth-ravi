#include "stats.h"

using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& vect) {

	std::vector<float>::const_iterator itr = vect.begin();
	Stats S1();
	float t = 0.0F;
    S1.min = *min_element(vect.begin(),vect.end());
    S1.max = *max_element(vect.begin(),vect.end());

		for( ; itr!=vect.end(); ++itr)
		{
			t = t + *itr;
		}

		S1.avg = t / t.size() ;
		return S1;
}
