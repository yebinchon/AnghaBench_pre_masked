
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int tearoff_handle; int * submenu_id; int id; struct TYPE_5__* parent; } ;
typedef TYPE_1__ vimmenu_T ;
struct TYPE_6__ {int accel_group; int * menubar; } ;
typedef int GtkWidget ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 void* FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 TYPE_4__ VAR_1 ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int * FUNC_13 (int ,int ) ;

void
FUNC_14(vimmenu_T *VAR_3, int VAR_4)
{
    vimmenu_T *VAR_5;
    GtkWidget *VAR_6;

    if (VAR_3->name[0] == ']' || FUNC_11(VAR_3->name))
    {
 VAR_3->submenu_id = FUNC_4();
 return;
    }

    VAR_5 = VAR_3->parent;

    if ((VAR_5 != ((void*)0) && VAR_5->submenu_id == ((void*)0))
     || !FUNC_10(VAR_3->name))
 return;

    VAR_6 = (VAR_5 != ((void*)0)) ? VAR_5->submenu_id : VAR_1.menubar;
    FUNC_12(VAR_3, VAR_6);


    if (VAR_5 != ((void*)0) && !FUNC_11(VAR_5->name))
 ++VAR_4;

    FUNC_7(FUNC_2(VAR_6), VAR_3->id, VAR_4);

    VAR_3->submenu_id = FUNC_4();

    FUNC_6(FUNC_0(VAR_3->submenu_id), VAR_1.accel_group);
    FUNC_3(FUNC_1(VAR_3->id), VAR_3->submenu_id);

    VAR_3->tearoff_handle = FUNC_8();
    if (FUNC_13(VAR_2, VAR_0) != ((void*)0))
 FUNC_9(VAR_3->tearoff_handle);
    FUNC_5(FUNC_0(VAR_3->submenu_id), VAR_3->tearoff_handle);
}
