#include <vector>
#include <math.h>
 namespace   Statistics {
    template <typename T> struct Stats
    {
        double average;
        T max;
        T min;

    };
    template<typename T> double ComputAverage(const std::vector<T>& );
 
    template<typename T> T ComputMax(const std::vector<T>&);
  
    template<typename T> T ComputMin(const std::vector<T>&);
   
    template <typename T> Stats<T> ComputeStatistics(const std::vector<T>&);
}