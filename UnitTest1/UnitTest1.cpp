#include "pch.h"
#include "CppUnitTest.h"
#include "../Goods.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestGoods
{
    TEST_CLASS(UnitTestGoods)
    {
    public:



        // Тест обчислення вартості товару
        TEST_METHOD(TestGoodsCostCalculation)
        {
            Goods g(12.5, 4);
            Assert::AreEqual(50.0, g.cost());  // 12.5 * 4 = 50.0
        }


    };
}