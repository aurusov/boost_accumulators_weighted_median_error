
#include <iostream>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/sum.hpp>
#include <boost/accumulators/statistics/min.hpp>
#include <boost/accumulators/statistics/max.hpp>
#include <boost/accumulators/statistics/count.hpp>
#include <boost/accumulators/statistics/weighted_variance.hpp>
#include <boost/accumulators/statistics/weighted_median.hpp>

int main()
{
	typedef boost::accumulators::accumulator_set<
		double,
		boost::accumulators::stats<
			boost::accumulators::tag::weighted_mean,
			boost::accumulators::tag::min,
			boost::accumulators::tag::max,
			boost::accumulators::tag::count,
			boost::accumulators::tag::weighted_variance,
			boost::accumulators::tag::weighted_median(boost::accumulators::with_p_square_quantile)
		>,
		double
	> acc_type;

	acc_type acc;
	acc(0, boost::accumulators::weight = 7.000000);
	acc(1, boost::accumulators::weight = 7.000000);
	acc(2, boost::accumulators::weight = 3.000000);
	acc(1, boost::accumulators::weight = 4.000000);
	acc(2, boost::accumulators::weight = 6.000000);
	acc(1, boost::accumulators::weight = 1.000000);
	acc(2, boost::accumulators::weight = 7.000000);
	acc(3, boost::accumulators::weight = 2.000000);
	acc(2, boost::accumulators::weight = 5.000000);
	acc(3, boost::accumulators::weight = 5.000000);
	acc(2, boost::accumulators::weight = 2.000000);
	acc(3, boost::accumulators::weight = 7.000000);
	acc(4, boost::accumulators::weight = 1.000000);
	acc(3, boost::accumulators::weight = 6.000000);
	acc(4, boost::accumulators::weight = 4.000000);
	acc(3, boost::accumulators::weight = 3.000000);
	acc(4, boost::accumulators::weight = 7.000000);
	acc(5, boost::accumulators::weight = 0.000000);
	acc(4, boost::accumulators::weight = 7.000000);
	acc(5, boost::accumulators::weight = 3.000000);
	acc(4, boost::accumulators::weight = 4.000000);
	acc(5, boost::accumulators::weight = 6.000000);
	acc(4, boost::accumulators::weight = 1.000000);
	acc(5, boost::accumulators::weight = 7.000000);
	acc(6, boost::accumulators::weight = 2.000000);
	acc(5, boost::accumulators::weight = 0.000000);

	double median = boost::accumulators::weighted_median(acc);
	std::cout << median << std::endl;

    return 0;
}
