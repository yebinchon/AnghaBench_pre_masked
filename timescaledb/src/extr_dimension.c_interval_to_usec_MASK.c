
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {int month; int day; scalar_t__ time; } ;
typedef TYPE_1__ Interval ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int64
FUNC_0(Interval *VAR_2)
{
 return (VAR_2->month * VAR_0 * VAR_1) + (VAR_2->day * VAR_1) +
     VAR_2->time;
}
