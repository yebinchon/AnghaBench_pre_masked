
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int char_width; int border_width; int char_height; } ;
struct TYPE_4__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

void
FUNC_1(void)
{
    RECT VAR_3;

    VAR_3.left = 0;
    VAR_3.top = 0;
    VAR_3.right = VAR_0 * VAR_2.char_width + 2 * VAR_2.border_width;
    VAR_3.bottom = VAR_1 * VAR_2.char_height + 2 * VAR_2.border_width;
    FUNC_0(&VAR_3);
}
