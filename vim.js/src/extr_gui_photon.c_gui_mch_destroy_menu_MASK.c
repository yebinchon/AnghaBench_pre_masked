
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * id; int * submenu_id; } ;
typedef TYPE_1__ vimmenu_T ;


 int FUNC_0 (int *) ;

void
FUNC_1(vimmenu_T *VAR_0)
{
    if (VAR_0->submenu_id != ((void*)0))
 FUNC_0(VAR_0->submenu_id);
    if (VAR_0->id != ((void*)0))
 FUNC_0(VAR_0->id);

    VAR_0->submenu_id = ((void*)0);
    VAR_0->id = ((void*)0);
}
