/**
  ******************************************************************************
  * @file           : complex.c
  * @author         : wj
  * @brief          : None
  * @attention      : None
  * @date           : 2024/7/22
  ******************************************************************************
  */

#include "complex.h"

#include <stdio.h>
//创建一个复数
complex * creatComplex(double real,double imag)
{
  complex * c =(complex *) malloc(sizeof(*c));
  if(c!=NULL)
  {
    c->real = (double *)malloc(sizeof(double));
    c->imag = (double *)malloc(sizeof(double));
    if(c->real !=NULL && c->imag != NULL)
    {
      *(c->real) = real;
      *(c->imag) = imag;
    }
    else
    {
      free(c->real);
      free(c->imag);
      free(c);
      c=NULL;//防御性编程
    }
  }
  return c;
}

//复数的加法
complex * add(complex * a,complex *b)
{
  return creatComplex(*(a->real) + *(b->real) ,*(a->imag) + *(b->imag));
}

//复数的减法
complex * sub(complex * a, complex *b)
{
  return creatComplex(*(a->real) - *(b->real), *(a->imag) - *(b->imag));
}

//复数的除法
complex * division(complex * a,complex * b)
{
  double fenmu = *(b->real) * *(b->real) + *(b->imag) * *(b->imag);
  if(fenmu == 0)
  {
    printf("分母为0!");
    return NULL;
  }
  double real = (*(a->real) * *(b->imag) + *(a->imag) * *(b->imag)) / fenmu;
  double imag = (*(b->imag) * *(b->real) + *(a->real) * *(b->imag) )/ fenmu;
  return creatComplex( real,imag );
}

//释放空间
void freeComplex(complex * a)
{
  if(a!=NULL)
  {
    free(a->real);
    free(a->real);
    free(a);
  }
}

//打印结果
void printComplex(complex *a)
{
  if( *(a->imag) >= 0)
  {
    printf("%.2lf + %.2lfi\n",*(a->real),*(a->imag));
  }
  else
  {
    printf("%.2lf - %.2lfi\n",*(a->real),-(*(a->imag)));
  }
}