
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int line; int * data; } ;
typedef TYPE_1__ vbi_sliced ;
typedef int uint8_t ;
struct TYPE_10__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {int i_telx_count; int p_es_telx; int i_next_date; int p_telx_buffer; int rd_telx; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_12__ {int* p_buffer; int i_pts; int i_dts; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (int*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    vbi_sliced VAR_4[VAR_3->i_telx_count * 2];
    int VAR_5 = FUNC_4( &VAR_3->rd_telx, VAR_3->p_telx_buffer,
                                      VAR_4 );

    if ( VAR_5 )
    {

        int VAR_6 = 3 + (VAR_5 / 4) * 4;
        int VAR_7;
        uint8_t *VAR_8;
        block_t *VAR_9 = FUNC_0( 1 + VAR_6 * 46 );
        if( FUNC_3( !VAR_9 ) )
            return VAR_0;
        VAR_9->p_buffer[0] = 0x10;
        VAR_8 = VAR_9->p_buffer + 1;

        for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
        {
            int VAR_10 = VAR_4[VAR_7].line;
            VAR_8[0] = 0x3;
            VAR_8[1] = 0x2c;

            VAR_8[2] = 0xc0 | (VAR_10 > 313 ? 0 : 0x20) | (VAR_10 % 313);
            VAR_8[3] = 0xe4;
            for ( int VAR_11 = 0; VAR_11 < 42; VAR_11++ )
                VAR_8[4 + VAR_11] = FUNC_5( VAR_4[VAR_7].data[VAR_11] );
            VAR_8 += 46;
        }


        for ( ; VAR_7 < VAR_6; VAR_7++ )
        {
            VAR_8[0] = 0xff;
            VAR_8[1] = 0x2c;
            FUNC_2( VAR_8 + 2, 0xff, 44 );
            VAR_8 += 46;
        }

        VAR_9->i_dts = VAR_9->i_pts = VAR_3->i_next_date;
        FUNC_1( VAR_2->out, VAR_3->p_es_telx, VAR_9 );
    }
    return VAR_1;
}
