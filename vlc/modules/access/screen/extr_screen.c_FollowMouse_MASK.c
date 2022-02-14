
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_width; int i_height; scalar_t__ i_screen_height; void* i_top; scalar_t__ i_screen_width; void* i_left; } ;
typedef TYPE_1__ demux_sys_t ;


 void* FUNC_0 (unsigned int,scalar_t__) ;

void FUNC_1( demux_sys_t *VAR_0, int VAR_1, int VAR_2 )
{
    VAR_1 -= VAR_0->i_width/2;
    if( VAR_1 < 0 ) VAR_1 = 0;
    VAR_0->i_left = FUNC_0( (unsigned int)VAR_1,
    VAR_0->i_screen_width - VAR_0->i_width );

    VAR_2 -= VAR_0->i_height/2;
    if( VAR_2 < 0 ) VAR_2 = 0;
    VAR_0->i_top = FUNC_0( (unsigned int)VAR_2,
    VAR_0->i_screen_height - VAR_0->i_height );
}
