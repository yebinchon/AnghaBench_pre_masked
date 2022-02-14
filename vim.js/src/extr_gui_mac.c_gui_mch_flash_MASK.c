
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_cols; int char_width; int num_rows; int char_height; } ;
struct TYPE_4__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ Rect ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (long,int ) ;

void
FUNC_2(int VAR_2)
{

    Rect VAR_3;




    VAR_3.left = 0;
    VAR_3.top = 0;
    VAR_3.right = VAR_1.num_cols * VAR_1.char_width;
    VAR_3.bottom = VAR_1.num_rows * VAR_1.char_height;
    FUNC_0(&VAR_3);

    FUNC_1((long)VAR_2, VAR_0);

    FUNC_0(&VAR_3);
}
