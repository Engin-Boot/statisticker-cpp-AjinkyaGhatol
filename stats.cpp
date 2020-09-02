/*#include "stats.h"
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
*/