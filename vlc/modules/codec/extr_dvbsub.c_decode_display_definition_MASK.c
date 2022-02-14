
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_7__ {int i_version; int b_windowed; int i_width; int i_height; int i_x; int i_max_x; int i_y; int i_max_y; } ;
struct TYPE_9__ {TYPE_1__ display; } ;
typedef TYPE_3__ decoder_sys_t ;
typedef int bs_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_0, bs_t *VAR_1, uint16_t VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    uint16_t VAR_4 = 40;
    int VAR_5;

    VAR_5 = FUNC_0( VAR_1, 4 );


    if( VAR_3->display.i_version == VAR_5 )
    {

        FUNC_1( VAR_1, 8*VAR_2 - 4 );
        return;
    }






    VAR_3->display.i_version = VAR_5;
    VAR_3->display.b_windowed = FUNC_0( VAR_1, 1 );
    FUNC_1( VAR_1, 3 );
    VAR_3->display.i_width = FUNC_0( VAR_1, 16 )+1;
    VAR_3->display.i_height = FUNC_0( VAR_1, 16 )+1;

    if( VAR_3->display.b_windowed )
    {




        VAR_3->display.i_x = FUNC_0( VAR_1, 16 );
        VAR_3->display.i_max_x = FUNC_0( VAR_1, 16 );
        VAR_3->display.i_y = FUNC_0( VAR_1, 16 );
        VAR_3->display.i_max_y = FUNC_0( VAR_1, 16 );
        VAR_4 += 64;
    }
    else
    {


        VAR_3->display.i_x = 0;
        VAR_3->display.i_max_x = VAR_3->display.i_width-1;
        VAR_3->display.i_y = 0;
        VAR_3->display.i_max_y = VAR_3->display.i_height-1;
    }

    if( VAR_4 != VAR_2*8 )
    {
        FUNC_3( VAR_0, "processed length %d bytes != segment length %d bytes",
                 VAR_4 / 8 , VAR_2 );
    }
}
