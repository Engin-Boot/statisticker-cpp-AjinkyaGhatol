#include"stats.h"
template<typename T> double Statistics::ComputAverage(const std::vector<T>& data)
{
    double sum = 0;
    int size = data.size();
    for (int i = 0; i < size; i++)
    {
        sum += data[i];
    }
    return sum / size;
}
template<typename T> T Statistics::ComputMax(const std::vector<T>& data)
{
    return *max_element(data.begin(), data.end());
}
template<typename T> T Statistics::ComputMin(const std::vector<T>& data)
{
    return *min_element(data.begin(), data.end());
}
template <typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& data)
{
    Stats<T> ans;
    if (data.size() == 0)
    {
        ans.average = std::numeric_limits<T>::quiet_NaN();
        ans.max = std::numeric_limits<T>::quiet_NaN();
        ans.min = std::numeric_limits<T>::quiet_NaN();
    }
    else
    {
        ans.average = ComputAverage(data);
        ans.max = ComputMax(data);
        ans.min = ComputMin(data);
    }
    return ans;
}