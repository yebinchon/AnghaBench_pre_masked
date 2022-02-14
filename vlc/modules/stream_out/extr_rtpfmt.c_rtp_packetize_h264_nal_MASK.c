
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_5__ {int i_dts; int i_length; int* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int,int const) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6( sout_stream_id_sys_t *VAR_1,
                        const uint8_t *VAR_2, int VAR_3, vlc_tick_t VAR_4,
                        vlc_tick_t VAR_5, bool VAR_6, vlc_tick_t VAR_7 )
{
    const int VAR_8 = FUNC_3 (VAR_1);
    int VAR_9;
    int VAR_10;

    if( VAR_3 < 2 )
        return VAR_0;

    VAR_9 = VAR_2[0];
    VAR_10 = VAR_9&0x1f;


    if( VAR_3 <= VAR_8 )
    {

        block_t *VAR_11 = FUNC_1( 12 + VAR_3 );
        VAR_11->i_dts = VAR_5;
        VAR_11->i_length = VAR_7;


        FUNC_4( VAR_1, VAR_11, VAR_6, VAR_4 );

        FUNC_2( &VAR_11->p_buffer[12], VAR_2, VAR_3 );

        FUNC_5( VAR_1, VAR_11 );
    }
    else
    {

        const int VAR_12 = ( VAR_3-1 + VAR_8-2 - 1 ) / (VAR_8-2);
        int VAR_13;

        VAR_2++;
        VAR_3--;

        for( VAR_13 = 0; VAR_13 < VAR_12; VAR_13++ )
        {
            const int VAR_14 = FUNC_0( VAR_3, VAR_8-2 );
            block_t *VAR_15 = FUNC_1( 12 + 2 + VAR_14 );
            VAR_15->i_dts = VAR_5 + VAR_13 * VAR_7 / VAR_12;
            VAR_15->i_length = VAR_7 / VAR_12;


            FUNC_4( VAR_1, VAR_15, (VAR_6 && VAR_14 == VAR_3),
                                    VAR_4 );

            VAR_15->p_buffer[12] = 0x00 | (VAR_9 & 0x60) | 28;

            VAR_15->p_buffer[13] = ( VAR_13 == 0 ? 0x80 : 0x00 ) | ( (VAR_13 == VAR_12-1) ? 0x40 : 0x00 ) | VAR_10;
            FUNC_2( &VAR_15->p_buffer[14], VAR_2, VAR_14 );

            FUNC_5( VAR_1, VAR_15 );

            VAR_3 -= VAR_14;
            VAR_2 += VAR_14;
        }
    }
    return VAR_0;
}
