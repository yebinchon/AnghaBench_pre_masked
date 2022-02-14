
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ gint ;
typedef void* gboolean ;
struct TYPE_17__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {int height; int width; } ;
struct TYPE_16__ {TYPE_1__ requisition; } ;
struct TYPE_15__ {scalar_t__ x; scalar_t__ y; TYPE_3__* widget; void* mapped; scalar_t__ window; } ;
typedef TYPE_2__ GtkFormChild ;
typedef TYPE_3__ GtkForm ;
typedef TYPE_4__ GtkAllocation ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_7(GtkForm *VAR_4, GtkFormChild *VAR_5,
   gboolean VAR_6)
{
    gint VAR_7;
    gint VAR_8;

    VAR_7 = VAR_5->x;
    VAR_8 = VAR_5->y;

    if ((VAR_7 >= VAR_2) && (VAR_7 <= VAR_1) &&
 (VAR_8 >= VAR_2) && (VAR_8 <= VAR_1))
    {
 if (!VAR_5->mapped)
 {
     if (FUNC_0(VAR_4) && FUNC_2(VAR_5->widget))
     {
  if (!FUNC_0(VAR_5->widget))
      FUNC_4(VAR_5->widget);

  VAR_5->mapped = VAR_3;
  VAR_6 = VAR_3;
     }
 }

 if (VAR_6)
 {
     GtkAllocation VAR_9;

     if (FUNC_1(VAR_5->widget))
     {
  if (VAR_5->window)
  {
      FUNC_3(VAR_5->window,
       VAR_7, VAR_8,
       VAR_5->widget->requisition.width,
       VAR_5->widget->requisition.height);
  }

  VAR_9.x = 0;
  VAR_9.y = 0;
     }
     else
     {
  VAR_9.x = VAR_7;
  VAR_9.y = VAR_8;
     }

     VAR_9.width = VAR_5->widget->requisition.width;
     VAR_9.height = VAR_5->widget->requisition.height;

     FUNC_5(VAR_5->widget, &VAR_9);
 }
    }
    else
    {
 if (VAR_5->mapped)
 {
     VAR_5->mapped = VAR_0;

     if (FUNC_0(VAR_5->widget))
  FUNC_6(VAR_5->widget);
 }
    }
}
