
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hxdll; int hd3d; } ;
typedef TYPE_1__ vout_display_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(vout_display_sys_t *VAR_0)
{
    FUNC_0( &VAR_0->hd3d );

    if (VAR_0->hxdll)
    {
        FUNC_1(VAR_0->hxdll);
        VAR_0->hxdll = ((void*)0);
    }
}
