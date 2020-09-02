#include <vector>
#include <math.h>
template <typename T> struct Stats
{
    T average;
    T max;
    T min;

}; 
namespace   Statistics {
    template<typename T> T ComputAverage(const std::vector<T>& );
 
    template<typename T> T ComputMax(const std::vector<T>&);
  
    template<typename T> T ComputMin(const std::vector<T>&);
   
    template <typename T> Stats<T> ComputeStatistics(const std::vector<T>&);
}
template<typename T> T Statistics:: ComputAverage(const std::vector<T>& data)
    {
        T sum=0;
        int size=data.size();
        for(int i=0;i<size;i++)
        {
            sum+=data[i];
        }
        return sum/size;
    }
    template<typename T> T Statistics:: ComputMax(const std::vector<T>& data)
    {
        return *max_element(data.begin(), data.end()); 
    }
    template<typename T> T Statistics::ComputMin(const std::vector<T>& data)
    {
        return *min_element(data.begin(), data.end()); 
    }
    template <typename T> Stats<T> Statistics:: ComputeStatistics(const std::vector<T>& data)
    {
        Stats<T> ans;
        if(data.size()==0)
        {
            ans.average=NAN;
            ans.max=NAN;
            ans.min=NAN;
        }
        else
        {
            ans.average= ComputAverage(data);
            ans.max= ComputMax(data);
            ans.min= ComputMin(data);
        }
        return ans;
    }
