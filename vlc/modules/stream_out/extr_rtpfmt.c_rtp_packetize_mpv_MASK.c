
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sout_stream_id_sys_t ;
typedef int hxxx_iterator_ctx_t ;
struct TYPE_7__ {int i_buffer; int* p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; int i_length; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int const**,size_t*) ;
 int FUNC_5 (int *,int*,int,int ) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10( sout_stream_id_sys_t *VAR_2, block_t *VAR_3 )
{
    int VAR_4 = FUNC_7 (VAR_2) - 4;
    int VAR_5 = ( VAR_3->i_buffer + VAR_4 - 1 ) / VAR_4;

    uint8_t *VAR_6 = VAR_3->p_buffer;
    int VAR_7 = VAR_3->i_buffer;
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 0;


    hxxx_iterator_ctx_t VAR_17;
    FUNC_5( &VAR_17, VAR_3->p_buffer, VAR_3->i_buffer, 0 );
    const uint8_t *VAR_18;
    size_t VAR_19;
    while( FUNC_4( &VAR_17, &VAR_18, &VAR_19 ) )
    {
        const uint8_t *VAR_20 = VAR_18;
        if( *VAR_20 == 0xb3 )
        {

            VAR_9 = 1;
        }
        else if( *VAR_20 == 0x00 && VAR_19 >= 5 )
        {

            VAR_10 = ( VAR_20[1] << 2) |((VAR_20[2]>>6)&0x03);
            VAR_11 = (VAR_20[2] >> 3)&0x07;

            if( VAR_11 == 2 ||
                VAR_11 == 3 )
            {
                VAR_14 = (VAR_20[3] >> 2)&0x01;
                VAR_15 = ((VAR_20[3]&0x03) << 1)|((VAR_20[4]>>7)&0x01);
                if( VAR_19 > 5 && VAR_11 == 3 )
                {
                    VAR_12 = (VAR_20[4]>>6)&0x01;
                    VAR_13 = (VAR_20[4]>>3)&0x07;
                }
            }
        }
        else if( *VAR_20 <= 0xaf )
        {
            VAR_16 = 1;
        }
    }

    for( VAR_8 = 0; VAR_8 < VAR_5; VAR_8++ )
    {
        int VAR_21 = FUNC_1( VAR_4, VAR_7 );
        block_t *VAR_22 = FUNC_2( 16 + VAR_21 );

        uint32_t VAR_23 = ( VAR_10 << 16 )|
                          ( VAR_9 << 13 )|
                          ( VAR_16 << 12 )|
                          ( VAR_8 == VAR_5 - 1 ? 1 << 11 : 0 )|
                          ( VAR_11 << 8 )|
                          ( VAR_12 << 7 )|( VAR_13 << 4 )|( VAR_14 << 3 )|VAR_15;


        FUNC_8( VAR_2, VAR_22, (VAR_8 == VAR_5 - 1)?1:0,
                          VAR_3->i_pts != VAR_1 ? VAR_3->i_pts : VAR_3->i_dts );

        FUNC_0( VAR_22->p_buffer + 12, VAR_23 );

        FUNC_6( &VAR_22->p_buffer[16], VAR_6, VAR_21 );

        VAR_22->i_dts = VAR_3->i_dts + VAR_8 * VAR_3->i_length / VAR_5;
        VAR_22->i_length = VAR_3->i_length / VAR_5;

        FUNC_9( VAR_2, VAR_22 );

        VAR_6 += VAR_21;
        VAR_7 -= VAR_21;
    }

    FUNC_3(VAR_3);
    return VAR_0;
}
