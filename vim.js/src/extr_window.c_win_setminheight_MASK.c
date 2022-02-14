
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ w_height; struct TYPE_3__* w_next; } ;
typedef TYPE_1__ win_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_2()
{
    int VAR_6;
    int VAR_7 = VAR_1;
    win_T *VAR_8;


    while (VAR_5 > 0)
    {

 VAR_6 = -VAR_4;
 for (VAR_8 = VAR_3; VAR_8 != ((void*)0); VAR_8 = VAR_8->w_next)
     VAR_6 += VAR_8->w_height - VAR_5;
 if (VAR_6 >= 0)
     break;
 --VAR_5;
 if (VAR_7)
 {
     FUNC_0(FUNC_1(VAR_2));
     VAR_7 = VAR_0;
 }
    }
}
