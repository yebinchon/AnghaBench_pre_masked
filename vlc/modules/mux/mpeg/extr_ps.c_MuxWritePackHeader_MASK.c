
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_10__ {int i_instant_bitrate; scalar_t__ b_mpeg2; scalar_t__ i_dts_delay; } ;
typedef TYPE_2__ sout_mux_sys_t ;
typedef int int64_t ;
struct TYPE_11__ {int i_buffer; int p_buffer; scalar_t__ i_dts; scalar_t__ i_pts; } ;
typedef TYPE_3__ block_t ;
typedef int bits_buffer_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int) ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__**,TYPE_3__*) ;

__attribute__((used)) static void FUNC_5( sout_mux_t *VAR_0, block_t **VAR_1,
                                vlc_tick_t VAR_2 )
{
    sout_mux_sys_t *VAR_3 = VAR_0->p_sys;
    bits_buffer_t VAR_4;
    block_t *VAR_5;
    int64_t VAR_6;
    int VAR_7;

    VAR_6 = FUNC_0(VAR_2 - VAR_3->i_dts_delay);

    VAR_5 = FUNC_3( 18 );
    if( !VAR_5 )
        return;
    VAR_5->i_pts = VAR_5->i_dts = VAR_2;
    FUNC_1( &VAR_4, 14, VAR_5->p_buffer );
    FUNC_2( &VAR_4, 32, 0x01ba );


    VAR_7 = (VAR_3->i_instant_bitrate + 8 * 50 - 1 ) / (8 * 50);

    if( VAR_3->b_mpeg2 )
    {
        FUNC_2( &VAR_4, 2, 0x01 );
    }
    else
    {
        FUNC_2( &VAR_4, 4, 0x02 );
    }

    FUNC_2( &VAR_4, 3, ( VAR_6 >> 30 )&0x07 );
    FUNC_2( &VAR_4, 1, 1 );
    FUNC_2( &VAR_4, 15, ( VAR_6 >> 15 )&0x7fff );
    FUNC_2( &VAR_4, 1, 1 );
    FUNC_2( &VAR_4, 15, VAR_6&0x7fff );
    FUNC_2( &VAR_4, 1, 1 );

    if( VAR_3->b_mpeg2 )
    {
        FUNC_2( &VAR_4, 9, 0 );
    }
    FUNC_2( &VAR_4, 1, 1 );

    FUNC_2( &VAR_4, 22, VAR_7);
    FUNC_2( &VAR_4, 1, 1 );

    if( VAR_3->b_mpeg2 )
    {
        FUNC_2( &VAR_4, 1, 1 );
        FUNC_2( &VAR_4, 5, 0x1f );
        FUNC_2( &VAR_4, 3, 0 );
    }

    VAR_5->i_buffer = VAR_3->b_mpeg2 ? 14: 12;

    FUNC_4( VAR_1, VAR_5 );
}
