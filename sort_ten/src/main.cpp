#include <iostream>
#include <stdlib.h>
#include "sort.h"
#include "unistd.h"

void PrintVec(std::vector<int>& varVec);
void Push2Vec(std::vector<int>& vec);

int main()
{
    std::vector<int> vecTest;
    std::string command;

    while(true)
    {
        std::cout << ">>";
        std::cin >> command;

        if (command.size() > 0)
        {
            if (command.compare("BubbleSort") == 0)
            {
                vecTest.clear();
                std::cout << "未排序：" << std::endl;
                Push2Vec(vecTest);
                PrintVec(vecTest);
                BubbleSort(vecTest);
                std::cout << "BubbleSort排序后：" << std::endl;
                PrintVec(vecTest);
            }
            else if(command.compare("SelectionSort") == 0)
            {
                vecTest.clear();
                std::cout << "未排序：" << std::endl;
                Push2Vec(vecTest);
                PrintVec(vecTest);
                SelectionSort(vecTest);
                std::cout << "SelectionSort排序后：" << std::endl;
                PrintVec(vecTest);
            }
            else if(command.compare("InsertionSort") == 0)
            {
                vecTest.clear();
                std::cout << "未排序：" << std::endl;
                Push2Vec(vecTest);
                PrintVec(vecTest);
                InsertionSort(vecTest);
                std::cout << "InsertionSort排序后：" << std::endl;
                PrintVec(vecTest);
            }
            else
            {
                std::cout << "输入错误" << std::endl;
                sleep(1);
            }
        }
    }
   
    return 0;
}

/**************************************************
 * @Name:PrintVec
 * @Description : 遍历打印容器内容
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/19
 * ************************************************/
void PrintVec(std::vector<int>& varVec)
{
    for (std::vector<int>::iterator iter = varVec.begin(); iter != varVec.end(); iter++)
    {
        std::cout << *iter  << ", ";
    }
    std::cout << std::endl;
}

/**************************************************
 * @Name:Push2Vec
 * @Description : 往容器内放入值
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/19
 * ************************************************/
void Push2Vec(std::vector<int>& vec)
{
    //生成随机数并放入容器vector,生成0 ~ 100的随机数30个
    srand(time(NULL));
    for (size_t i = 0; i < 30; i++)
    {
        int varTemp = rand() % 100;
        vec.push_back(varTemp);
    }
}