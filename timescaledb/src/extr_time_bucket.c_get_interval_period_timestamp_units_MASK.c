
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_3__ {scalar_t__ month; scalar_t__ time; int day; } ;
typedef TYPE_1__ Interval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline int64
FUNC_4(Interval *VAR_4)
{
 if (VAR_4->month != 0)
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("interval defined in terms of month, year, century etc. not supported")));
 }



 if (VAR_4->time != FUNC_3(VAR_4->time))
 {
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("interval must not have sub-second precision")));
 }
 return VAR_4->time + (VAR_4->day * VAR_2);

}
