
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ident; int handler_id; int * id; } ;
typedef TYPE_1__ scrollbar_T ;
struct TYPE_5__ {int formwin; } ;
typedef int GtkAdjustment ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ,int ) ;
 int * FUNC_10 (int *) ;
 TYPE_3__ VAR_4 ;
 int FUNC_11 () ;

void
FUNC_12(scrollbar_T *VAR_5, int VAR_6)
{
    if (VAR_6 == VAR_1)
 VAR_5->id = FUNC_7(((void*)0));
    else if (VAR_6 == VAR_2)
 VAR_5->id = FUNC_10(((void*)0));

    if (VAR_5->id != ((void*)0))
    {
 GtkAdjustment *VAR_7;

 FUNC_5(VAR_5->id, VAR_0);
 FUNC_6(FUNC_1(VAR_4.formwin), VAR_5->id, 0, 0);

 VAR_7 = FUNC_8(FUNC_3(VAR_5->id));

 VAR_5->handler_id = FUNC_9(
        FUNC_2(VAR_7), "value_changed",
        FUNC_4(VAR_3),
        FUNC_0(VAR_5->ident));
 FUNC_11();
    }
}
