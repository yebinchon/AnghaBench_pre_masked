
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ is_floating; } ;
struct TYPE_13__ {int height; int width; } ;
struct TYPE_14__ {TYPE_1__ allocation; } ;
typedef TYPE_2__ GtkWidget ;
typedef scalar_t__ GtkOrientation ;
typedef TYPE_3__ BonoboDockItem ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_6(GtkWidget *VAR_3, GtkOrientation VAR_4)
{
    GtkOrientation VAR_5 = VAR_1;
    if (VAR_3 != ((void*)0)
     && VAR_5 == VAR_4
     && FUNC_1(VAR_3)
     && FUNC_2(VAR_3))
    {
 if (VAR_4 == VAR_1)
     return VAR_3->allocation.height;
 else
     return VAR_3->allocation.width;
    }
    return 0;
}
