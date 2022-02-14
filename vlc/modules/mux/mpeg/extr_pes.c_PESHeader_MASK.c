
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_7__ {int i_cat; int i_codec; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_8__ {int i_data; } ;
typedef TYPE_2__ bits_buffer_t ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 int FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static inline int FUNC_3( uint8_t *VAR_7, int64_t VAR_8, int64_t VAR_9,
                             int VAR_10, const es_format_t *VAR_11,
                             int VAR_12, bool VAR_13,
                             bool VAR_14, int VAR_15 )
{
    bits_buffer_t VAR_16;
    int VAR_17 = 0;
    int VAR_18 = -1;
    int VAR_19 = 0;


    if( ( VAR_12 >> 8 ) == VAR_2 )
    {
        VAR_18 = VAR_12 & 0xff;
        VAR_12 = VAR_2;



        VAR_17 = 1;
        if( ( VAR_18 & 0xf0 ) == 0x80 )
            VAR_17 += 3;
    }
    else if( ( VAR_12 >> 8 ) == VAR_0 )
    {



        VAR_19 = VAR_12 & 0x7f;
        VAR_12 = VAR_0;
    }

    FUNC_1( &VAR_16, 50, VAR_7 );


    FUNC_2( &VAR_16, 24, 0x01 );
    FUNC_2( &VAR_16, 8, VAR_12 );
    switch( VAR_12 )
    {
        case 128:
        case 131:
        case 130:
        case 134:
        case 133:
        case 129:
        case 135:
        case 132:

            FUNC_2( &VAR_16, 16, VAR_10 );
            FUNC_0( &VAR_16 );
            return( VAR_16.i_data );

        default:

            if( VAR_13 )
            {
                int VAR_20;
                bool VAR_21 = 0;

                if( VAR_8 > 0 && VAR_9 > 0 &&
                    ( VAR_8 != VAR_9 || ( VAR_11->i_cat == VAR_3 &&
                      VAR_11->i_codec != VAR_6 &&
                      VAR_11->i_codec != VAR_5 &&
                      VAR_11->i_codec != VAR_4
                      ) ) )
                {
                    VAR_20 = 0x03;
                    if ( !VAR_15 ) VAR_15 = 0xa;
                }
                else if( VAR_8 > 0 )
                {
                    VAR_20 = 0x02;
                    if ( !VAR_15 ) VAR_15 = 0x5;
                }
                else
                {
                    VAR_20 = 0x00;
                    if ( !VAR_15 ) VAR_15 = 0x0;
                }

                if( VAR_12 == VAR_0 )
                {
                    VAR_21 = 1;
                    VAR_15 += 1 + 1;
                }

                if( VAR_21 )
                {
                    VAR_15 += 1;
                }



                if( VAR_10 > VAR_1 )
                    FUNC_2( &VAR_16, 16, 0 );
                else
                    FUNC_2( &VAR_16, 16, VAR_10 + VAR_17 + 3
                                 + VAR_15 );
                FUNC_2( &VAR_16, 2, 0x02 );
                FUNC_2( &VAR_16, 2, 0x00 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, VAR_14 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, 0x00 );

                FUNC_2( &VAR_16, 2, VAR_20 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, 0x00 );
                FUNC_2( &VAR_16, 1, VAR_21 );
                FUNC_2( &VAR_16, 8, VAR_15 );


                if( VAR_20 & 0x02 )
                {
                    FUNC_2( &VAR_16, 4, VAR_20 );
                    FUNC_2( &VAR_16, 3, VAR_8 >> 30 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_8 >> 15 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_8 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    VAR_15 -= 0x5;
                }

                if( VAR_20 & 0x01 )
                {
                    FUNC_2( &VAR_16, 4, 0x01 );
                    FUNC_2( &VAR_16, 3, VAR_9 >> 30 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_9 >> 15 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_9 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    VAR_15 -= 0x5;
                }
                if( VAR_21 )
                {
                    FUNC_2( &VAR_16, 1, 0x00 );
                    FUNC_2( &VAR_16, 1, 0x00 );
                    FUNC_2( &VAR_16, 1, 0x00 );
                    FUNC_2( &VAR_16, 1, 0x00 );
                    FUNC_2( &VAR_16, 3, 0x07 );
                    FUNC_2( &VAR_16, 1, 0x01 );





                    if( VAR_12 == VAR_0 )
                    {

                        FUNC_2( &VAR_16, 1, 0x01 );
                        FUNC_2( &VAR_16, 7, 0x01 );
                        FUNC_2( &VAR_16, 1, 0x01 );
                        FUNC_2( &VAR_16, 7, VAR_19 );
                        VAR_15 -= 0x2;
                    }
                    VAR_15 -= 0x1;
                }
                while ( VAR_15 )
                {
                    FUNC_2( &VAR_16, 8, 0xff );
                    VAR_15--;
                }
            }
            else
            {
                int VAR_22;

                if( VAR_8 > 0 && VAR_9 > 0 &&
                    ( VAR_8 != VAR_9 || VAR_11->i_cat == VAR_3 ) )
                {
                    FUNC_2( &VAR_16, 16, VAR_10 + VAR_17 + 10 );
                    VAR_22 = 0x03;
                }
                else if( VAR_8 > 0 )
                {
                    FUNC_2( &VAR_16, 16, VAR_10 + VAR_17 + 5 );
                    VAR_22 = 0x02;
                }
                else
                {
                    FUNC_2( &VAR_16, 16, VAR_10 + VAR_17 + 1 );
                    VAR_22 = 0x00;
                }






                if( VAR_22 & 0x02 )
                {
                    FUNC_2( &VAR_16, 4, VAR_22 );
                    FUNC_2( &VAR_16, 3, VAR_8 >> 30 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_8 >> 15 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_8 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                }

                if( VAR_22 & 0x01 )
                {
                    FUNC_2( &VAR_16, 4, 0x01 );
                    FUNC_2( &VAR_16, 3, VAR_9 >> 30 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_9 >> 15 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                    FUNC_2( &VAR_16, 15, VAR_9 );
                    FUNC_2( &VAR_16, 1, 0x01 );
                }
                if( !VAR_22 )
                {
                    FUNC_2( &VAR_16, 8, 0x0F );
                }

            }




            FUNC_0( &VAR_16 );
            if( VAR_12 == VAR_2 && VAR_18 != -1 )
            {
                FUNC_2( &VAR_16, 8, VAR_18 );
                if( ( VAR_18&0xf0 ) == 0x80 )
                {
                    FUNC_2( &VAR_16, 24, 0 );
                }
            }
            FUNC_0( &VAR_16 );
            return( VAR_16.i_data );
    }
}
