
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int guicolor_T ;
struct TYPE_4__ {scalar_t__ char_height; int row; scalar_t__ col; int text_gc; TYPE_1__* drawarea; int fgcolor; } ;
struct TYPE_3__ {int * window; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,scalar_t__,scalar_t__,int,int) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (int ) ;

void
FUNC_5(int VAR_3, int VAR_4, guicolor_T VAR_5)
{
    if (VAR_2.drawarea->window == ((void*)0))
 return;

    FUNC_4(VAR_5);

    FUNC_3(VAR_2.text_gc, VAR_2.fgcolor);
    FUNC_2(VAR_2.drawarea->window, VAR_2.text_gc,
     VAR_1,




     FUNC_0(VAR_2.col),
     FUNC_1(VAR_2.row) + VAR_2.char_height - VAR_4,
     VAR_3, VAR_4);
}
