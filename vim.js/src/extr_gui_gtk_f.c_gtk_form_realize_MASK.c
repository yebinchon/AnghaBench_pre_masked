
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int gint ;
struct TYPE_28__ {TYPE_3__* data; struct TYPE_28__* next; } ;
struct TYPE_27__ {int event_mask; scalar_t__ y; scalar_t__ x; int colormap; int visual; int wclass; int height; int width; int window_type; } ;
struct TYPE_26__ {TYPE_6__* children; void* bin_window; } ;
struct TYPE_25__ {int widget; } ;
struct TYPE_23__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_24__ {void* window; int style; TYPE_1__ allocation; } ;
typedef TYPE_2__ GtkWidget ;
typedef TYPE_3__ GtkFormChild ;
typedef TYPE_4__ GtkForm ;
typedef TYPE_5__ GdkWindowAttr ;
typedef TYPE_6__ GList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int ,TYPE_4__*) ;
 void* FUNC_6 (void*,TYPE_5__*,int) ;
 int FUNC_7 (void*,TYPE_2__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (int ,void*) ;
 int FUNC_12 (int ,void*,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 void* FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_17(GtkWidget *VAR_12)
{
    GList *VAR_13;
    GtkForm *VAR_14;
    GdkWindowAttr VAR_15;
    gint VAR_16;

    FUNC_4(FUNC_1(VAR_12));

    VAR_14 = FUNC_0(VAR_12);
    FUNC_2(VAR_14, VAR_7);

    VAR_15.window_type = VAR_6;
    VAR_15.x = VAR_12->allocation.x;
    VAR_15.y = VAR_12->allocation.y;
    VAR_15.width = VAR_12->allocation.width;
    VAR_15.height = VAR_12->allocation.height;
    VAR_15.wclass = VAR_0;
    VAR_15.visual = FUNC_16(VAR_12);
    VAR_15.colormap = FUNC_13(VAR_12);
    VAR_15.event_mask = VAR_1;

    VAR_16 = VAR_4 | VAR_5 | VAR_3 | VAR_2;

    VAR_12->window = FUNC_6(FUNC_15(VAR_12),
        &VAR_15, VAR_16);
    FUNC_7(VAR_12->window, VAR_12);

    VAR_15.x = 0;
    VAR_15.y = 0;
    VAR_15.event_mask = FUNC_14(VAR_12);

    VAR_14->bin_window = FUNC_6(VAR_12->window,
          &VAR_15, VAR_16);
    FUNC_7(VAR_14->bin_window, VAR_12);

    FUNC_10(VAR_14->bin_window, VAR_9);

    VAR_12->style = FUNC_11(VAR_12->style, VAR_12->window);
    FUNC_12(VAR_12->style, VAR_12->window, VAR_8);
    FUNC_12(VAR_12->style, VAR_14->bin_window, VAR_8);

    FUNC_5(VAR_12->window, VAR_11, VAR_14);
    FUNC_5(VAR_14->bin_window, VAR_10, VAR_14);

    for (VAR_13 = VAR_14->children; VAR_13; VAR_13 = VAR_13->next)
    {
 GtkFormChild *VAR_17 = VAR_13->data;

 FUNC_8(VAR_14, VAR_17);

 if (FUNC_3(VAR_17->widget))
     FUNC_9(VAR_14, VAR_17);
    }
}
