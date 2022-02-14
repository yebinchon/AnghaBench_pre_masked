
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_13__ {int es; int i_skip; int b_configured; } ;
typedef TYPE_1__ ps_track_t ;
struct TYPE_14__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_15__ {int i_mux_rate; TYPE_1__* tk; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_16__ {int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_2__*,int,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int const*,int) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 size_t FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,scalar_t__*,int*) ;
 int FUNC_11 (int ,TYPE_4__*,int ) ;
 int FUNC_12 (int const*,int) ;

__attribute__((used)) static int FUNC_13( demux_t *VAR_2, const uint8_t *VAR_3, int VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;

    while( VAR_4 > 0 )
    {
        int VAR_6 = FUNC_12( VAR_3, VAR_4 );
        if( VAR_6 <= 0 || VAR_6 > VAR_4 )
        {
            break;
        }


        block_t *VAR_7 = FUNC_2( VAR_6 );
        FUNC_6( VAR_7->p_buffer, VAR_3, VAR_6);


        switch( 0x100 | VAR_3[3] )
        {
        case 0x1b9:
        case 0x1bb:
        case 0x1bc:
            FUNC_3( VAR_7 );
            break;

        case 0x1ba:
        {
            vlc_tick_t VAR_8;
            int VAR_9;
            if( !FUNC_10( VAR_7->p_buffer, VAR_7->i_buffer,
                                    &VAR_8, &VAR_9 ) )
            {
                FUNC_5( VAR_2->out, VAR_1 + VAR_8 );
                if( VAR_9 > 0 ) VAR_5->i_mux_rate = VAR_9;
            }
            FUNC_3( VAR_7 );
            break;
        }
        default:
        {
            int VAR_10 = FUNC_9( VAR_7->p_buffer, VAR_7->i_buffer );
            if( VAR_10 >= 0xc0 )
            {
                ps_track_t *VAR_11 = &VAR_5->tk[FUNC_8(VAR_10)];

                if( !VAR_11->b_configured )
                {
                    FUNC_0( VAR_2, VAR_10, 0 );
                }
                if( VAR_11->es &&
                    !FUNC_11( FUNC_1(VAR_2), VAR_7, VAR_11->i_skip ) )
                {
                    FUNC_4( VAR_2->out, VAR_11->es, VAR_7 );
                }
                else
                {
                    FUNC_3( VAR_7 );
                }
            }
            else
            {
                FUNC_3( VAR_7 );
            }
            break;
        }
        }

        VAR_3 += VAR_6;
        VAR_4 -= VAR_6;
    }

    return VAR_0;
}
