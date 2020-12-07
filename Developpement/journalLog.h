#pragma once
#ifndef DEF_JOURNAL_LOG_CLASS
#define DEF_JOURNAL_LOG_CLASS

//#include <string>
#include <utility>
#include <vector>
#include <map>
#include <list>

namespace JournalLog {


	class JournalLogUtils
	{
	public:
		static bool hasNextCount();
		static int getWeekDayFromDate(std::string date);
		static std::pair<std::string, long> getNextCount();
		static int getLeastFrequentWeekDay();
		static std::vector<std::string> getMostFrequentDates(int k);


	private:
		static std::vector<long> getTotalUseByDay();
		static std::vector<std::pair<std::string, long>> getTotalUseByDates();
		static bool comparePairByFirst(std::pair<std::string, long>& a, std::pair<std::string, long>& b);
		static bool comparePairBySecond(std::pair<std::string, long>& a, std::pair<std::string, long>& b);
	};
}

#endif