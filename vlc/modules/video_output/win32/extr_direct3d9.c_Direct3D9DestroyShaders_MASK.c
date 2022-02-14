
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {int * d3dx_shader; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    if (VAR_1->d3dx_shader)
        FUNC_0(VAR_1->d3dx_shader);
    VAR_1->d3dx_shader = ((void*)0);
}
