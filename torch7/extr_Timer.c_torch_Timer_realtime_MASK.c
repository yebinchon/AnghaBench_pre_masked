
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ TimeType ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static TimeType FUNC_2()
{





  struct timeval VAR_0;
  FUNC_1(&VAR_0, ((void*)0));
  return (VAR_0.tv_sec + VAR_0.tv_usec/1000000.0);

}
