
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int char_u ;
struct TYPE_2__ {int in_focus; void* norm_pixel; void* def_norm_pixel; void* back_pixel; void* def_back_pixel; scalar_t__ scrollbar_height; scalar_t__ scrollbar_width; scalar_t__ border_width; scalar_t__ border_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 void* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int
FUNC_8(void)
{
    FUNC_7();
    VAR_4.border_offset = 0;
    VAR_4.border_width = 0;
    VAR_4.scrollbar_width = 0;
    VAR_4.scrollbar_height = 0;

    VAR_4.back_pixel = FUNC_1((char_u*)"black");
    VAR_4.norm_pixel = FUNC_1((char_u*)"white");

    FUNC_2();
    FUNC_0();

    VAR_4.def_back_pixel = VAR_4.back_pixel;
    VAR_4.def_norm_pixel = VAR_4.norm_pixel;

    VAR_4.in_focus = VAR_3;

    VAR_2 = FUNC_5() / FUNC_3();
    VAR_0 = FUNC_6() / FUNC_4();

    return VAR_1;
}
