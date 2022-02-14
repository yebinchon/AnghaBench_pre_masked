
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_13__ {int i_next_block_flags; int es; int i_skip; int b_configured; } ;
typedef TYPE_1__ ps_track_t ;
struct TYPE_14__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {int i_mux_rate; TYPE_1__* tk; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_16__ {int i_flags; int i_dts; int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int *,int*) ;
 int FUNC_11 (int ,TYPE_4__*,int ) ;
 int FUNC_12 (int const*,int) ;

__attribute__((used)) static int FUNC_13( demux_t *VAR_5, const uint8_t *VAR_6, int VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_5->p_sys;

    while( VAR_7 > 0 )
    {
        int VAR_9 = FUNC_12( VAR_6, VAR_7 );
        if( VAR_9 <= 0 || VAR_9 > VAR_7 )
        {
            break;
        }


        block_t *VAR_10 = FUNC_2( VAR_9 );
        if( !VAR_10 )
            return VAR_2;
        FUNC_6( VAR_10->p_buffer, VAR_6, VAR_9);


        switch( 0x100 | VAR_6[3] )
        {
        case 0x1b9:
        case 0x1bb:
        case 0x1bc:
            FUNC_3( VAR_10 );
            break;

        case 0x1ba:
        {
            vlc_tick_t VAR_11;
            int VAR_12;
            if( !FUNC_10( VAR_10->p_buffer, VAR_10->i_buffer,
                                    &VAR_11, &VAR_12 ) )
            {
                FUNC_5( VAR_5->out, VAR_11 );
                if( VAR_12 > 0 ) VAR_8->i_mux_rate = VAR_12;
            }
            FUNC_3( VAR_10 );
            break;
        }
        default:
        {
            int VAR_13 = FUNC_9( VAR_10->p_buffer, VAR_10->i_buffer );
            if( VAR_13 >= 0xc0 )
            {
                ps_track_t *VAR_14 = &VAR_8->tk[FUNC_8(VAR_13)];

                if( !VAR_14->b_configured )
                {
                    FUNC_0( VAR_5, VAR_13 );
                }

                if( VAR_14->es &&
                    !FUNC_11( FUNC_1(VAR_5), VAR_10, VAR_14->i_skip ) )
                {
                    int VAR_15 = VAR_14->i_next_block_flags;
                    VAR_14->i_next_block_flags = 0;
                    if( VAR_15 & VAR_0 )
                    {
                        if( VAR_10->i_dts != VAR_4 )
                        {
                            VAR_15 &= ~VAR_0;
                            VAR_15 |= VAR_1;
                        }
                        else VAR_14->i_next_block_flags = VAR_0;
                    }
                    VAR_10->i_flags |= VAR_15;
                    FUNC_4( VAR_5->out, VAR_14->es, VAR_10 );
                }
                else
                {
                    VAR_14->i_next_block_flags = 0;
                    FUNC_3( VAR_10 );
                }
            }
            else
            {
                FUNC_3( VAR_10 );
            }
            break;
        }
        }

        VAR_6 += VAR_9;
        VAR_7 -= VAR_9;
    }

    return VAR_3;
}
