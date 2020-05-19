#include "sort.h"

/**************************************************
 * @Name:BubbleSort
 * @Description :冒泡排序
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/19
 * ************************************************/
void BubbleSort(std::vector<int>& varVec)
{
    int sizeVec = varVec.size();
    for (size_t i = 0; i < sizeVec; i++)
    {
       for (size_t j = 0; j < sizeVec - 1 - i; j++)
       {
           if (varVec[j] > varVec[j + 1])
           {
               std::swap(varVec[j], varVec[j + 1]);
           }
       }
    }
}

/**************************************************
 * @Name:SelectionSort
 * @Description :选择排序首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置。
 *               再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
 *               重复第二步，直到所有元素均排序完毕。
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/19
 * ************************************************/
void SelectionSort(std::vector<int>& varVec)
{
    int vecSize = varVec.size();
    for (size_t i = 0, imaxIndex; i < vecSize; i++)     //需要循环的次数
    {
        imaxIndex = vecSize - i - 1;
        for (size_t j = 0; j < vecSize - i - 1; j++)    //找到未排序数据中最大值
        {
            if (varVec[j] > varVec[imaxIndex])
            {
                imaxIndex = j;
            }
        }

        std::swap(varVec[imaxIndex], varVec[vecSize - i -1]);
    }
}

/**************************************************
 * @Name:InsertionSort
 * @Description：插入排序（Insertion sort） 是一种简单直观的排序算法。
 *              它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
 *              插入排序的算法步骤如下：
 *                  1、从第一个元素开始，该元素可以认为已经被排序；
 *                  2、取出下一个元素，在已经排序的元素序列中从后向前扫描；
 *                  3、如果该元素（已排序）大于新元素，将该元素移到下一位置；
 *                  4、重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
 *                  5、将新元素插入到该位置后；
 *                  6、重复步骤2~5。
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/19
 * ************************************************/
void InsertionSort(std::vector<int>& varVec)
{
    int vecSize = varVec.size();
    for (size_t i = 0, j, temp; i < vecSize - 1 ; i++)
    {
        j = i;
        temp = varVec[i + 1];
        while (j >= 0 && varVec[j] > temp)
        {
            varVec[j + 1] = varVec[j];
            j--;
        }
        varVec[j + 1] = temp;
    }
}

/**************************************************
 * @Name:ShellSort
 * @Description：希尔排序，也称 递减增量排序算法，是 插入排序 的一种更高效的改进版本。希尔排序是非稳定排序算法。
 *               它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
 *               希尔排序的算法步骤如下：
 *                  1、定义一个用来分割的步长；
 *                  2、按步长的长度K，对数组进行K趟排序；
 *                  3、不断重复上述步骤；
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/19
 * ************************************************/