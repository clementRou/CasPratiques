#include "pch.h"
#include "journalLog.h"
#include <algorithm>

using namespace std;
using namespace JournalLog;

bool JournalLog::JournalLogUtils::hasNextCount()
{
    return false;
}

int JournalLog::JournalLogUtils::getWeekDayFromDate(string date)
{
    return 0;
}

pair<string, long> JournalLog::JournalLogUtils::getNextCount()
{
    return make_pair(string(), 0L);
}

int JournalLog::JournalLogUtils::getLeastFrequentWeekDay()
{
    vector<long> useByDay = getTotalUseByDay();
    int leastFrequentDay = 0;
    long minUse = useByDay.at(0);
    for (int i = 1; i < 7; i++)
    {
        if (useByDay.at(i) < minUse) {
            leastFrequentDay = i;
            minUse = useByDay.at(i);
        }
    }

    return leastFrequentDay;
}

vector<long> JournalLog::JournalLogUtils::getTotalUseByDay()
{
    vector<long> useByDay(7, 0);
    pair<string, long> currentPair;
    int currentDay = 0;
    while (hasNextCount()) {
        currentPair = getNextCount();
        currentDay = getWeekDayFromDate(currentPair.first);
        useByDay.at(currentDay) += currentPair.second;
        }
    return useByDay;
}

vector<string> JournalLog::JournalLogUtils::getMostFrequentDates(int k)
{
    vector<string> biggestDates(k);
    vector<pair<string, long>> useByDates = getTotalUseByDates();
    // Sort Entries by value 
    sort(useByDates.begin(), useByDates.end(), comparePairBySecond);

    // Sort Entries by value descending
    reverse(useByDates.begin(), useByDates.end());

    int maxIndex = k < useByDates.size() ? k : useByDates.size();
    vector<pair<string, long>>::iterator iter = useByDates.begin();
    vector<pair<string, long>>::iterator end = useByDates.begin() + maxIndex;
    while (iter != end) {
        biggestDates.push_back(iter->first);
        ++iter;
    }

    return biggestDates;
}

vector<pair<string, long>> JournalLog::JournalLogUtils::getTotalUseByDates()
{
    vector<pair<string, long>> useByDates;
    pair<string, long> currentPair;
    int currentDay = 0;
    while (hasNextCount()) {
        currentPair = getNextCount();
        currentDay = getWeekDayFromDate(currentPair.first);
        useByDates.push_back(make_pair(currentPair.first, currentPair.second));
    }

    // sort entries by dates so that entries with same dates are located consecutively
    sort(useByDates.begin(), useByDates.end(), comparePairByFirst);

    vector<pair<string, long>>::iterator iter = useByDates.begin();
    vector<pair<string, long>>::iterator end = useByDates.end();
    string lastDate = iter != end ? iter->first : "";
    if (iter != end) {
        ++iter;
    }
    
    long entryCount = 0L;

    while (iter != end) {
        if (iter->first == lastDate) {
            // Merge current entry with last one
            entryCount = iter->second;
            iter = useByDates.erase(iter);
            iter--;
            iter->second += entryCount;
        }
        ++iter;
    }

    return useByDates;
}

// Comparator function to sort pairs by first value
bool JournalLog::JournalLogUtils::comparePairByFirst(pair<string, long> &a, pair<string, long> &b)
{
    return a.first < b.first;
}

// Comparator function to sort pairs by second value
bool JournalLog::JournalLogUtils::comparePairBySecond(pair<string, long>& a, pair<string, long>& b)
{
    return a.second < b.second;
}