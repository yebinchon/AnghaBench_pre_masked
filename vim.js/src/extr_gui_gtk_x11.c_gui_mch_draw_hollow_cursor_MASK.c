
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_4__ {int char_width; scalar_t__ char_height; int row; int col; int text_gc; TYPE_1__* drawarea; int fgcolor; } ;
struct TYPE_3__ {int * window; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;

void
FUNC_6(guicolor_T VAR_2)
{
    int VAR_3 = 1;

    if (VAR_1.drawarea->window == ((void*)0))
 return;

    FUNC_4(VAR_2);

    FUNC_3(VAR_1.text_gc, VAR_1.fgcolor);
    if (FUNC_5(VAR_1.row, VAR_1.col))
 VAR_3 = 2;
    FUNC_2(VAR_1.drawarea->window, VAR_1.text_gc,
     VAR_0,
     FUNC_0(VAR_1.col), FUNC_1(VAR_1.row),
     VAR_3 * VAR_1.char_width - 1, VAR_1.char_height - 1);
}
