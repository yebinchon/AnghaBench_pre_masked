
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_5__ {int i_version; int i_width; int i_height; int b_windowed; } ;
struct TYPE_7__ {TYPE_1__ display; } ;
typedef TYPE_3__ decoder_sys_t ;



__attribute__((used)) static void FUNC_0( decoder_t * VAR_0 )
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;




    VAR_1->display.i_version = 0xff;
    VAR_1->display.i_width = 720;
    VAR_1->display.i_height = 576;
    VAR_1->display.b_windowed = 0;
}
