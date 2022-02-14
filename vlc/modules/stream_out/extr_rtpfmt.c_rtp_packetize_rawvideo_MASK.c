
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int* p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; int i_length; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int const) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,int*,int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*,int*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12( sout_stream_id_sys_t *VAR_4, block_t *VAR_5, vlc_fourcc_t VAR_6 )
{
    int VAR_7, VAR_8;
    FUNC_6( VAR_4, &VAR_7, &VAR_8 );
    int VAR_9;
    int VAR_10, VAR_11;
    switch( VAR_6 )
    {
        case 128:
            VAR_9 = 3;
            VAR_10 = VAR_11 = 1;
            break;
        case 129:
            VAR_9 = 6;
            VAR_10 = VAR_11 = 2;
            break;
        default:
            FUNC_11();
    }

    static const int VAR_12 = 12;

    const int VAR_13 = 6;
    const int VAR_14 = VAR_13 + VAR_9;
    uint8_t *VAR_15 = VAR_5->p_buffer;

    for( uint16_t VAR_16 = 0, VAR_17 = 0; VAR_16 < VAR_8; )
    {

        int VAR_18 = (int)(FUNC_7 (VAR_4) - VAR_12);
        if( VAR_18 <= 0 )
        {
            FUNC_3( VAR_5 );
            return VAR_0;
        }

        block_t *VAR_19 = FUNC_2( VAR_12 + VAR_18 );
        if( FUNC_10( VAR_19 == ((void*)0) ) )
        {
            FUNC_3( VAR_5 );
            return VAR_1;
        }




        uint8_t *VAR_20 = VAR_19->p_buffer + VAR_12;
        FUNC_1( VAR_20, FUNC_5( VAR_4 ) );
        VAR_20 += 2;
        VAR_18 -= 2;

        uint8_t *VAR_21 = VAR_20;

        for( uint8_t VAR_22 = 0x80; VAR_22 && VAR_18 > VAR_14; )
        {
            VAR_18 -= VAR_13;

            int VAR_23 = VAR_7 - VAR_17;
            int VAR_24 = (VAR_23 * VAR_9) / VAR_10;

            const bool VAR_25 = VAR_18 >= VAR_24;
            if( !VAR_25 )
            {
                VAR_23 = (VAR_18 / VAR_9) * VAR_10;
                VAR_24 = (VAR_23 * VAR_9) / VAR_10;
            }

            VAR_18 -= VAR_24;


            FUNC_1( VAR_20, VAR_24 );
            VAR_20 += 2;



            const uint8_t VAR_26 = 0;
            FUNC_1( VAR_20, VAR_16 );
            *VAR_20 |= VAR_26 << 7;
            VAR_20 += 2;


            VAR_22 = (VAR_18 > VAR_14 && VAR_16 < (VAR_8 - VAR_11)) ? 0x80 : 0x00;


            FUNC_1( VAR_20, VAR_17 );
            *VAR_20 |= VAR_22;
            VAR_20 += 2;

            if( VAR_25 )
            {
                VAR_17 = 0;
                VAR_16 += VAR_11;
            }
            else
            {
                VAR_17 += VAR_23;
            }
        }


        for( uint8_t VAR_27 = 0x80; VAR_27; VAR_21 += VAR_13 )
        {
            const uint16_t VAR_28 = FUNC_0( VAR_21 );
            const uint16_t VAR_29 = FUNC_0( VAR_21 + 2 ) & 0x7fff;
            uint16_t VAR_30 = FUNC_0( VAR_21 + 4 ) & 0x7fff;
            VAR_27 = VAR_21[4] & 0x80;

            if( VAR_6 == 128 )
            {
                const int VAR_31 = VAR_7 * VAR_9;
                VAR_30 /= VAR_10;
                FUNC_4( VAR_20, VAR_15 + (VAR_29 * VAR_31) + (VAR_30 * VAR_9), VAR_28 );
                VAR_20 += VAR_28;
            }
            else if( VAR_6 == 129 )
            {
                FUNC_4( VAR_20, VAR_15, VAR_28 );
                VAR_20 += VAR_28;
                VAR_15 += VAR_28;
            }
            else FUNC_11();
        }


        FUNC_8( VAR_4, VAR_19, VAR_16 >= VAR_8,
                (VAR_5->i_pts != VAR_3 ? VAR_5->i_pts : VAR_5->i_dts) );

        VAR_19->i_dts = VAR_5->i_dts;
        VAR_19->i_length = VAR_5->i_length;

        FUNC_9( VAR_4, VAR_19 );
    }

    FUNC_3( VAR_5 );
    return VAR_2;
}
