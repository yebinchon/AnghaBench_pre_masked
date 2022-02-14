
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int time; int day; scalar_t__ month; } ;
typedef TYPE_1__ Interval ;


 int VAR_0 ;
 int VAR_1 ;

int64
FUNC_0(Interval *VAR_2)
{
 return VAR_2->time +
     ((((int64) VAR_2->month * VAR_0) + VAR_2->day) * VAR_1);
}
