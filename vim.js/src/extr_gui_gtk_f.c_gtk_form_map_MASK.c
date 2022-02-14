
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* data; struct TYPE_13__* next; } ;
struct TYPE_12__ {TYPE_4__* children; int bin_window; } ;
struct TYPE_11__ {int widget; } ;
struct TYPE_10__ {int window; } ;
typedef TYPE_1__ GtkWidget ;
typedef TYPE_2__ GtkFormChild ;
typedef TYPE_3__ GtkForm ;
typedef TYPE_4__ GList ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(GtkWidget *VAR_1)
{
    GList *VAR_2;
    GtkForm *VAR_3;

    FUNC_5(FUNC_1(VAR_1));

    VAR_3 = FUNC_0(VAR_1);

    FUNC_3(VAR_1, VAR_0);

    FUNC_6(VAR_1->window);
    FUNC_6(VAR_3->bin_window);

    for (VAR_2 = VAR_3->children; VAR_2; VAR_2 = VAR_2->next)
    {
 GtkFormChild *VAR_4 = VAR_2->data;

 if (FUNC_4(VAR_4->widget)
  && !FUNC_2(VAR_4->widget))
     FUNC_7(VAR_4->widget);
    }
}
