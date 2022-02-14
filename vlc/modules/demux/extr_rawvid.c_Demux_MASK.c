
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_7__ {int out; int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int pcr; int p_es_video; int frame_size; scalar_t__ b_y4m; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    block_t *VAR_4;
    vlc_tick_t VAR_5 = FUNC_0( &VAR_3->pcr );


    FUNC_3( VAR_2->out, VAR_5 );

    if( VAR_3->b_y4m )
    {


        if( FUNC_5( VAR_2->s, ((void*)0), 5 ) < 5 )
            return VAR_0;

        for( ;; )
        {
            uint8_t VAR_6;
            if( FUNC_5( VAR_2->s, &VAR_6, 1 ) < 1 )
                return VAR_0;
            if( VAR_6 == 0x0a )
                break;
        }
    }

    VAR_4 = FUNC_4( VAR_2->s, VAR_3->frame_size );
    if( VAR_4 == ((void*)0) )
        return VAR_0;

    VAR_4->i_dts = VAR_4->i_pts = VAR_5;
    FUNC_2( VAR_2->out, VAR_3->p_es_video, VAR_4 );

    FUNC_1( &VAR_3->pcr, 1 );

    return VAR_1;
}
