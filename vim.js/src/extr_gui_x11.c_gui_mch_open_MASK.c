
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * XtPointer ;
struct TYPE_2__ {int toolbar_height; int menu_width; int menu_height; int dpy; int blank_pointer; int wid; } ;
typedef int EventMask ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_14 (int ,int *) ;
 int VAR_14 ;
 int * VAR_15 ;
 int FUNC_15 () ;
 int FUNC_16 () ;

int
FUNC_17()
{

    FUNC_5(VAR_14);
    FUNC_3(FUNC_4(VAR_14, "*vimForm"));

    VAR_9.wid = FUNC_10();
    VAR_9.blank_pointer = FUNC_9();





    VAR_15[VAR_5] =
         FUNC_0(VAR_9.dpy, "WM_SAVE_YOURSELF", VAR_1);
    VAR_15[VAR_0] =
         FUNC_0(VAR_9.dpy, "WM_DELETE_WINDOW", VAR_1);
    FUNC_1(VAR_9.dpy, FUNC_6(VAR_14), VAR_15, 2);
    FUNC_2(VAR_14, VAR_2, VAR_6, VAR_11,
            ((void*)0));
    FUNC_12();
    return VAR_3;
}
