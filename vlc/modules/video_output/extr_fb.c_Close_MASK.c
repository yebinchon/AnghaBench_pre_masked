
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_8__ {scalar_t__ is_tty; int * picture; } ;
typedef TYPE_2__ vout_display_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(vout_display_t *VAR_0)
{
    vout_display_sys_t *VAR_1 = VAR_0->sys;

    if (VAR_1->picture != ((void*)0))
        FUNC_3(VAR_1->picture);

    FUNC_0(VAR_0);

    if (VAR_1->is_tty)
        FUNC_1(VAR_0);

    FUNC_2(VAR_1);
}
