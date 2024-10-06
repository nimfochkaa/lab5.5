#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5 n 3/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My55
{
	TEST_CLASS(My55)
	{
	public:
		
=		TEST_METHOD(TestMethod1)
		{
			maxDepth = 0;  
			int result = V0(1, 1);
			Assert::AreEqual(1, result);
			Assert::AreEqual(1, maxDepth); 

			maxDepth = 0;
			result = V0(2, 1);
			Assert::AreEqual(1, result); 
			Assert::AreEqual(2, maxDepth);  

			maxDepth = 0;
			result = V0(3, 1);
			Assert::AreEqual(3, result);  
			Assert::AreEqual(2, maxDepth);

			maxDepth = 0;
			result = V0(10, 1);
			Assert::AreEqual(5, result);  
			Assert::AreEqual(4, maxDepth);
		}
	};
}
