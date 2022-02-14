
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ gtk_sel_atom; } ;
struct TYPE_7__ {int drawarea; } ;
struct TYPE_6__ {scalar_t__ info; } ;
typedef TYPE_1__ GtkTargetEntry ;
typedef int GdkAtom ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__ VAR_5 ;
 TYPE_1__* VAR_6 ;

void
FUNC_2(void)
{
    int VAR_7, VAR_8 = 0;
    int VAR_9 = VAR_1;
    GtkTargetEntry VAR_10[VAR_1];

    for (VAR_7 = 0; VAR_7 < (int)VAR_1; ++VAR_7)
    {



 if (!VAR_3 && VAR_6[VAR_7].info == VAR_2)
     VAR_9--;
 else
     VAR_10[VAR_8++] = VAR_6[VAR_7];
    }

    FUNC_1(VAR_5.drawarea, (GdkAtom)VAR_0);
    FUNC_1(VAR_5.drawarea, (GdkAtom)VAR_4.gtk_sel_atom);
    FUNC_0(VAR_5.drawarea,
         (GdkAtom)VAR_0,
         VAR_10, VAR_9);
    FUNC_0(VAR_5.drawarea,
         (GdkAtom)VAR_4.gtk_sel_atom,
         VAR_10, VAR_9);
}
