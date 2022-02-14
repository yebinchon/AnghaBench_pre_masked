
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int char_width; int char_height; } ;
struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ Rect ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;

void
FUNC_3(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    Rect VAR_5;




    VAR_5.left = FUNC_0(VAR_2);
    VAR_5.top = FUNC_1(VAR_1);
    VAR_5.right = VAR_5.left + VAR_4 * VAR_0.char_width;
    VAR_5.bottom = VAR_5.top + VAR_3 * VAR_0.char_height;
    FUNC_2(&VAR_5);
}
