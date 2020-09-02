#include <vector>
#include <math.h>
template <typename T> struct Stats
{
    T average;
    T max;
    T min;

}; 
namespace   Statistics {
    template<typename T> T ComputAverage(Stats<T>&,const std::vector<T>& );
 
    template<typename T> T ComputMax(Stats<T>& ,const std::vector<T>&);
  
    template<typename T> T ComputMin(Stats<T>& ,const std::vector<T>&);
   
    template <typename T> Stats<T> ComputeStatistics(const std::vector<T>&);
}
template<typename T> T Statistics:: ComputAverage(Stats<T>& stat,const std::vector<T>& data)
    {
        T sum=0;
        int size=data.size();
        for(int i=0;i<size;i++)
        {
            sum+=data[i];
        }
        return sum/size;
    }
    template<typename T> T Statistics:: ComputMax(Stats<T>& stat,const std::vector<T>& data)
    {
        return *max_element(data.begin(), data.end()); 
    }
    template<typename T> T Statistics::ComputMin(Stats<T>& stat,const std::vector<T>& data)
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
            ans.average= ComputAverage(ans,data);
            ans.max= ComputMax(ans,data);
            ans.min= ComputMin(ans,data);
        }
        return ans;
    }
