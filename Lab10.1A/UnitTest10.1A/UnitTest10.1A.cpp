#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.1A/Lab10.1A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101A
{
	TEST_CLASS(UnitTest101A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Students students[3] = {
				{"Іванов", 1, ITIS, 4, 5, 3},
				{"Петров", 2, RE, 5, 4, 4},
				{"Сидоров", 3, KN, 4, 4, 4}
			};

			int count_math, count_physics, count_info, count_physics_5;
			count_good_grades(students, 3, count_math, count_physics, count_info, count_physics_5);

			Assert::AreEqual(count_math, 2);
		}
	};
}