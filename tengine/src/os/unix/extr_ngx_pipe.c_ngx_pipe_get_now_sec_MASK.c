
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int gmtoff; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static time_t
FUNC_2()
{
    FUNC_1();

    return FUNC_0() + VAR_0->gmtoff * 60;
}
