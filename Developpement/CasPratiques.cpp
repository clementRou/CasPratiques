#include "pch.h"
#include "CppUnitTest.h"
#include "abregerUtils.h"
#include "journalLog.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace CasPratiques 
{
	TEST_CLASS(AbregerTest)
	{
	public:
		
		TEST_METHOD(TestAbreger)
		{
			Assert::AreEqual(string(""), Abreger::AbregerUtils::abreger(""));
			Assert::AreEqual(string("a"), Abreger::AbregerUtils::abreger("a"));
			Assert::AreEqual(string("la"), Abreger::AbregerUtils::abreger("la"));
			Assert::AreEqual(string("a3e"), Abreger::AbregerUtils::abreger("arbre"));
			Assert::AreEqual(string("p7e"), Abreger::AbregerUtils::abreger("parachute"));
			Assert::AreEqual(string("p80"), Abreger::AbregerUtils::abreger("parachute0"));
		}
	};

	TEST_CLASS(JournalLogTest)
	{
	public:
		TEST_METHOD(TestJournalLog)
		{
			// Questions: cf. fichier ReponsesQuestions
			Assert::AreEqual(0, JournalLog::JournalLogUtils::getLeastFrequentWeekDay());
		}


		TEST_METHOD(TestJournalLogBiggestDates)
		{
			// Questions: cf. fichier ReponsesQuestions
			Assert::IsTrue(5 == JournalLog::JournalLogUtils::getMostFrequentDates(5).size());
		}
	};
}
