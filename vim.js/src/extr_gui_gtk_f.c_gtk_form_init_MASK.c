
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; scalar_t__ freeze_count; int visibility; scalar_t__ configure_serial; int * bin_window; int * children; } ;
typedef TYPE_1__ GtkForm ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(GtkForm *VAR_1)
{
    VAR_1->children = ((void*)0);

    VAR_1->width = 1;
    VAR_1->height = 1;

    VAR_1->bin_window = ((void*)0);

    VAR_1->configure_serial = 0;
    VAR_1->visibility = VAR_0;

    VAR_1->freeze_count = 0;
}
