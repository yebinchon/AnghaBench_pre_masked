
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t vlc_tick_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_5__ {size_t i_dts; size_t i_length; int* p_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 size_t FUNC_1 (size_t,size_t const) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,size_t const) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int,size_t) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7( sout_stream_id_sys_t *VAR_1,
                        const uint8_t *VAR_2, size_t VAR_3, vlc_tick_t VAR_4,
                        vlc_tick_t VAR_5, bool VAR_6, vlc_tick_t VAR_7 )
{
    const size_t VAR_8 = FUNC_4 (VAR_1);

    if( VAR_3 < 3 )
        return VAR_0;


    if( VAR_3 <= VAR_8 )
    {

        block_t *VAR_9 = FUNC_2( 12 + VAR_3 );
        VAR_9->i_dts = VAR_5;
        VAR_9->i_length = VAR_7;


        FUNC_5( VAR_1, VAR_9, VAR_6, VAR_4 );

        FUNC_3( &VAR_9->p_buffer[12], VAR_2, VAR_3 );

        FUNC_6( VAR_1, VAR_9 );
    }
    else
    {
        const uint16_t VAR_10 = (FUNC_0(VAR_2) & 0x81FF) | 0x6200 ;
        const uint8_t VAR_11 = (VAR_2[0] & 0x7E) >> 1;


        const size_t VAR_12 = ( VAR_3-2 + VAR_8-3 - 2 ) / (VAR_8-3);

        VAR_2 += 2;
        VAR_3 -= 2;

        for( size_t VAR_13 = 0; VAR_13 < VAR_12; VAR_13++ )
        {
            const size_t VAR_14 = FUNC_1( VAR_3, VAR_8-3 );
            block_t *VAR_15 = FUNC_2( 12 + 3 + VAR_14 );
            VAR_15->i_dts = VAR_5 + VAR_13 * VAR_7 / VAR_12;
            VAR_15->i_length = VAR_7 / VAR_12;


            FUNC_5( VAR_1, VAR_15, (VAR_6 && VAR_14 == VAR_3),
                                    VAR_4 );

            VAR_15->p_buffer[12] = VAR_10 >> 8;
            VAR_15->p_buffer[13] = VAR_10 & 0x00FF;

            VAR_15->p_buffer[14] = ( VAR_13 == 0 ? 0x80 : 0x00 ) | ( (VAR_13 == VAR_12-1) ? 0x40 : 0x00 ) | VAR_11;
            FUNC_3( &VAR_15->p_buffer[15], VAR_2, VAR_14 );

            FUNC_6( VAR_1, VAR_15 );

            VAR_3 -= VAR_14;
            VAR_2 += VAR_14;
        }
    }
    return VAR_0;
}
