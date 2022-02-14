
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* drawarea; int back_pixel; } ;
struct TYPE_6__ {int pixel; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {int * window; } ;
typedef TYPE_2__ GdkColor ;


 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_3__ VAR_0 ;

void
FUNC_1(void)
{
    if (VAR_0.drawarea != ((void*)0) && VAR_0.drawarea->window != ((void*)0))
    {
 GdkColor VAR_1 = { 0, 0, 0, 0 };

 VAR_1.pixel = VAR_0.back_pixel;
 FUNC_0(VAR_0.drawarea->window, &VAR_1);
    }
}
