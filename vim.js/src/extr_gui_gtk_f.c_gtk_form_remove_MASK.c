
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* next; TYPE_1__* data; } ;
struct TYPE_12__ {TYPE_3__* children; } ;
struct TYPE_11__ {scalar_t__ window; int * widget; } ;
typedef int GtkWidget ;
typedef TYPE_1__ GtkFormChild ;
typedef TYPE_2__ GtkForm ;
typedef int GtkContainer ;
typedef TYPE_3__ GList ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (int ,int ,TYPE_1__*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(GtkContainer *VAR_2, GtkWidget *VAR_3)
{
    GList *VAR_4;
    GtkForm *VAR_5;
    GtkFormChild *VAR_6 = ((void*)0);

    FUNC_7(FUNC_1(VAR_2));

    VAR_5 = FUNC_0(VAR_2);

    VAR_4 = VAR_5->children;
    while (VAR_4)
    {
 VAR_6 = VAR_4->data;
 if (VAR_6->widget == VAR_3)
     break;
 VAR_4 = VAR_4->next;
    }

    if (VAR_4)
    {
 if (VAR_6->window)
 {
     FUNC_10(FUNC_2(VAR_6->widget),
       FUNC_3(&VAR_0), VAR_6);
     FUNC_10(FUNC_2(VAR_6->widget),
       FUNC_3(&VAR_1), VAR_6);




     FUNC_9(VAR_6->window, ((void*)0));
     FUNC_8(VAR_6->window);
 }
 FUNC_11(VAR_3);

 VAR_5->children = FUNC_6(VAR_5->children, VAR_4);
 FUNC_5(VAR_4);
 FUNC_4(VAR_6);
    }
}
