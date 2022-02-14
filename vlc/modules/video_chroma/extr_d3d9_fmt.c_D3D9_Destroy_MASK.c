
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hdll; int * obj; } ;
typedef TYPE_1__ d3d9_handle_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(d3d9_handle_t *VAR_0)
{
    if (VAR_0->obj)
    {
       FUNC_1(VAR_0->obj);
       VAR_0->obj = ((void*)0);
    }
    if (VAR_0->hdll)
    {
        FUNC_0(VAR_0->hdll);
        VAR_0->hdll = ((void*)0);
    }
}
