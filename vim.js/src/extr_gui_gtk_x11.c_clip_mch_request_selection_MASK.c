
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int guint32 ;
struct TYPE_8__ {int gtk_sel_atom; } ;
typedef TYPE_2__ VimClipboard ;
struct TYPE_10__ {TYPE_1__* mainwin; int drawarea; } ;
struct TYPE_9__ {scalar_t__ info; int target; } ;
struct TYPE_7__ {int window; } ;
typedef int GdkAtom ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 TYPE_5__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_4__* VAR_10 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;

void
FUNC_6(VimClipboard *VAR_11)
{
    GdkAtom VAR_12;
    unsigned VAR_13;
    time_t VAR_14;

    for (VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13)
    {
 if (!VAR_7 && VAR_10[VAR_13].info == VAR_5)
     continue;
 VAR_9 = VAR_4;
 VAR_12 = FUNC_2(VAR_10[VAR_13].target, VAR_0);

 FUNC_3(VAR_8.drawarea,
         VAR_11->gtk_sel_atom, VAR_12,
         (guint32)VAR_1);




 VAR_14 = FUNC_4(((void*)0));
 while (VAR_9 == VAR_4 && FUNC_4(((void*)0)) < VAR_14 + 3)
     FUNC_1(((void*)0), VAR_6);

 if (VAR_9 != VAR_3)
     return;
    }


    FUNC_5(FUNC_0(VAR_8.mainwin->window), VAR_11);
}
