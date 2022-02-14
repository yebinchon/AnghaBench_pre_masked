
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {void* i_height; void* i_width; } ;
struct TYPE_8__ {TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_10__ {int i_fps_num; void* i_fps_den; } ;
typedef TYPE_4__ decoder_sys_t ;
typedef int bs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int*,int) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5( decoder_t *VAR_2, es_format_t *VAR_3,
                     uint8_t *VAR_4, int VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_2->p_sys;
    int VAR_7, VAR_8, VAR_9;
    bs_t VAR_10;

    for( ;; )
    {
        if( VAR_5 <= 5 )
            return VAR_0;

        if( VAR_4[0] == 0x00 && VAR_4[1] == 0x00 && VAR_4[2] == 0x01 &&
            VAR_4[3] >= 0x20 && VAR_4[3] <= 0x2f ) break;

        VAR_4++; VAR_5--;
    }

    FUNC_0( &VAR_10, &VAR_4[4], VAR_5 - 4 );

    FUNC_3( &VAR_10, 1 );
    FUNC_3( &VAR_10, 8 );
    if( FUNC_2( &VAR_10 ) )
    {
        VAR_7 = FUNC_1( &VAR_10, 4 );
        FUNC_3( &VAR_10, 3 );
    }
    else
    {
        VAR_7 = 1;
    }
    VAR_8 = FUNC_1( &VAR_10, 4 );
    if( VAR_8 == 0xf )
    {
        FUNC_3( &VAR_10, 8 );
        FUNC_3( &VAR_10, 8 );
    }
    if( FUNC_2( &VAR_10 ) )
    {

        FUNC_3( &VAR_10, 2 );
        FUNC_2( &VAR_10 );

        if( FUNC_2( &VAR_10 ) )
        {
            FUNC_3( &VAR_10, 16 );
            FUNC_3( &VAR_10, 16 );
            FUNC_3( &VAR_10, 16 );
            FUNC_3( &VAR_10, 3 );
            FUNC_3( &VAR_10, 11 );
            FUNC_3( &VAR_10, 1 );
            FUNC_3( &VAR_10, 16 );
        }
    }

    VAR_9 = FUNC_1( &VAR_10, 2 );
    if( VAR_9 == 3 && VAR_7 != 1 )
    {
        FUNC_3( &VAR_10, 4 );
    }

    if( !FUNC_2( &VAR_10 ) ) return VAR_0;

    VAR_6->i_fps_num = FUNC_1( &VAR_10, 16 );
    if( !VAR_6->i_fps_num ) VAR_6->i_fps_num = 1;

    if( !FUNC_2( &VAR_10 ) ) return VAR_0;

    if( FUNC_2( &VAR_10 ) )
    {
        int VAR_11 = FUNC_4( VAR_6->i_fps_num - 1 ) + 1;

        if( VAR_11 < 1 ) VAR_11 = 1;

        VAR_6->i_fps_den = FUNC_1( &VAR_10, VAR_11 );
    }
    if( VAR_9 == 0 )
    {
        FUNC_3( &VAR_10, 1 );
        VAR_3->video.i_width = FUNC_1( &VAR_10, 13 );
        FUNC_3( &VAR_10, 1 );
        VAR_3->video.i_height= FUNC_1( &VAR_10, 13 );
        FUNC_3( &VAR_10, 1 );
    }

    return VAR_1;
}
