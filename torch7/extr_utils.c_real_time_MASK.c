
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {double tv_sec; double tv_usec; } ;
struct TYPE_6__ {double QuadPart; } ;
struct TYPE_5__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct timeval*,int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static double FUNC_3()
{
  struct timeval VAR_1;
  FUNC_2(&VAR_1, ((void*)0));
  return (VAR_1.tv_sec + VAR_1.tv_usec/1000000.0);

}
