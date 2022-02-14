
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * id; int * submenu_id; int name; TYPE_1__* parent; } ;
typedef TYPE_2__ vimmenu_T ;
struct TYPE_8__ {int toolbar; int * menubar; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

void
FUNC_11(vimmenu_T *VAR_1)
{

    if (VAR_1->id != ((void*)0))
 FUNC_2(VAR_1->id);




    if (VAR_1->id != ((void*)0) && VAR_0.menubar != ((void*)0)
       && FUNC_8(VAR_1->id) == VAR_0.menubar)
 FUNC_5(FUNC_0(VAR_0.menubar), VAR_1->id);
    {
 if (VAR_1->submenu_id != ((void*)0))
     FUNC_7(VAR_1->submenu_id);

 if (VAR_1->id != ((void*)0))
     FUNC_7(VAR_1->id);
    }

    if (VAR_1->id != ((void*)0))
 FUNC_3(VAR_1->id);
    VAR_1->submenu_id = ((void*)0);
    VAR_1->id = ((void*)0);
}
