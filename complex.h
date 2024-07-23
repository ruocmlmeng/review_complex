/**
  ******************************************************************************
  * @file           : complex.h
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/22
  ******************************************************************************
  */

#ifndef COMPLEX_H
#define COMPLEX_H
#include <stdlib.h>
#include <stdio.h>
typedef struct complex
{
  double* real;
  double* imag;
} complex;

//创建一个复数
complex * creatComplex(double real,double imag);

//复数的加法
complex * add(complex * a,complex *b);

//复数的减法
complex * sub(complex * a, complex *b);

//复数的除法
complex * division(complex * a,complex * b);

//释放空间
void freeComplex(complex * a);

//打印结果
void printComplex(complex *a);
#endif //COMPLEX_H
