
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dv_refcount; } ;
typedef TYPE_1__ dict_T ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static dict_T *
FUNC_2(void)
{
    dict_T *VAR_0;

    if (!(VAR_0 = FUNC_1()))
    {
 FUNC_0();
 return ((void*)0);
    }
    ++VAR_0->dv_refcount;

    return VAR_0;
}
