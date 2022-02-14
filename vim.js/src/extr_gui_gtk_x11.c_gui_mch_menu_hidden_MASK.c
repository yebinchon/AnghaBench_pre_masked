
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ id; } ;
typedef TYPE_1__ vimmenu_T ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

void
FUNC_4(vimmenu_T *VAR_0, int VAR_1)
{
    if (VAR_0->id == 0)
 return;

    if (VAR_1)
    {
 if (FUNC_0(VAR_0->id))
 {
     FUNC_1(VAR_0->id);
     FUNC_3();
 }
    }
    else
    {
 if (!FUNC_0(VAR_0->id))
 {
     FUNC_2(VAR_0->id);
     FUNC_3();
 }
    }
}
