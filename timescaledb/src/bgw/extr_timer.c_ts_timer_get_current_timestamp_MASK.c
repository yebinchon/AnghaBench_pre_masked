
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_2__ {int (* get_current_timestamp ) () ;} ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

TimestampTz
FUNC_2()
{
 return FUNC_1()->get_current_timestamp();
}
