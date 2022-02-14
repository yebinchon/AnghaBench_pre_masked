
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int* pi_offset; int* pi_alpha; int b_auto_crop; unsigned int i_y_top_offset; unsigned int i_y_bottom_offset; int** pi_yuv; int b_palette; int * p_data; } ;
typedef TYPE_1__ subpicture_data_t ;
struct TYPE_12__ {unsigned int i_width; unsigned int i_height; } ;
typedef TYPE_2__ spu_properties_t ;
struct TYPE_13__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_14__ {unsigned int i_spu_size; int * buffer; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_15__ {unsigned int i_height; unsigned int i_y; int i_x; int i_width; } ;


 unsigned int FUNC_0 (unsigned int,int *,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,int,int,int,...) ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 TYPE_5__* VAR_2 ;

__attribute__((used)) static int FUNC_3( decoder_t *VAR_3,
                     subpicture_data_t *VAR_4,
                     const spu_properties_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_3->p_sys;

    const unsigned int VAR_7 = VAR_5->i_width;
    const unsigned int VAR_8 = VAR_5->i_height;
    unsigned int VAR_9, VAR_10;

    uint16_t *VAR_11 = VAR_4->p_data;


    unsigned int VAR_12 = 0;
    unsigned int VAR_13[ 2 ];
    unsigned int *VAR_14;


    bool VAR_15 = 1;
    unsigned int VAR_16 = 0, VAR_17 = 0;
    unsigned int VAR_18 = 0;


    int VAR_19 = -1;
    int VAR_20[4]; VAR_20[0] = VAR_20[1] = VAR_20[2] = VAR_20[3] = 0;

    VAR_13[ 0 ] = VAR_4->pi_offset[ 0 ] << 1;
    VAR_13[ 1 ] = VAR_4->pi_offset[ 1 ] << 1;

    for( VAR_10 = 0 ; VAR_10 < VAR_8 ; VAR_10++ )
    {
        unsigned int VAR_21;
        VAR_14 = VAR_13 + VAR_12;

        for( VAR_9 = 0 ; VAR_9 < VAR_7 ; VAR_9 += VAR_21 >> 2 )
        {
            VAR_21 = 0;
            for( unsigned int VAR_22 = 1; VAR_22 <= 0x40 && VAR_21 < VAR_22; VAR_22 <<= 2 )
            {
                if( (*VAR_14 >> 1) >= VAR_6->i_spu_size )
                {
                    FUNC_2( VAR_3, "out of bounds while reading rle" );
                    return VAR_0;
                }
                VAR_21 = FUNC_0( VAR_21, &VAR_6->buffer[4], VAR_14 );
            }
            if( VAR_21 < 0x0004 )
            {


                VAR_21 |= ( VAR_7 - VAR_9 ) << 2;
            }

            if( ( (VAR_21 >> 2) + VAR_9 + VAR_10 * VAR_7 ) > VAR_8 * VAR_7 )
            {
                FUNC_2( VAR_3, "out of bounds, %i at (%i,%i) is out of %ix%i",
                         VAR_21 >> 2, VAR_9, VAR_10, VAR_7, VAR_8 );
                return VAR_0;
            }


            if( VAR_4->pi_alpha[ VAR_21 & 0x3 ] != 0x00 )
            {
                VAR_19 = VAR_21 & 0x3;
                VAR_20[VAR_19] += VAR_21 >> 2;
            }


            if( VAR_4->b_auto_crop )
            {
                if( !VAR_10 )
                {



                    if( (VAR_21 >> 2) == VAR_7 &&
                        VAR_4->pi_alpha[ VAR_21 & 0x3 ] == 0x00 )
                    {
                        VAR_18 = VAR_21;
                    }
                    else
                    {
                        VAR_4->b_auto_crop = 0;
                    }
                }

                if( VAR_21 == VAR_18 )
                {
                    if( VAR_15 )
                    {

                      VAR_16++;
                    }
                    else
                    {


                      *VAR_11++ = VAR_21;
                      VAR_17++;
                    }
                }
                else
                {

                    *VAR_11++ = VAR_21;


                    VAR_15 = 0;
                    VAR_17 = 0;
                }
            }
            else
            {
                *VAR_11++ = VAR_21;
            }
        }


        if( VAR_9 > VAR_7 )
        {
            FUNC_2( VAR_3, "i_x overflowed, %i > %i", VAR_9, VAR_7 );
            return VAR_0;
        }


        if( *VAR_14 & 0x1 )
        {
            (*VAR_14)++;
        }


        VAR_12 = ~VAR_12 & 0x1;
    }


    if( VAR_10 < VAR_8 )
    {
        FUNC_2( VAR_3, "padding bytes found in RLE sequence" );
        FUNC_2( VAR_3, "send mail to <sam@zoy.org> if you "
                        "want to help debugging this" );


        while( VAR_10 < VAR_8 )
        {
            *VAR_11++ = VAR_7 << 2;
            VAR_10++;
        }

        return VAR_0;
    }







    if( VAR_16 || VAR_17 )
    {




        VAR_4->i_y_top_offset = VAR_16;
        VAR_4->i_y_bottom_offset = VAR_17;




    }


    if( !VAR_4->b_palette )
    {
        int VAR_23, VAR_24 = -1, VAR_25 = -1;


        if( VAR_19 != -1 )
        {
            VAR_4->pi_yuv[VAR_19][0] = 0x00;
            VAR_4->pi_yuv[VAR_19][1] = 0x80;
            VAR_4->pi_yuv[VAR_19][2] = 0x80;
            VAR_20[VAR_19] = 0;
        }


        for( VAR_23 = 0 ; VAR_23 < 4 && VAR_24 == -1 ; VAR_23++ )
        {
            if( VAR_20[VAR_23] )
            {
                VAR_24 = VAR_23;
            }
        }

        for( ; VAR_23 < 4 && VAR_25 == -1 ; VAR_23++ )
        {
            if( VAR_20[VAR_23] )
            {
                if( VAR_20[VAR_23] > VAR_20[VAR_24] )
                {
                    VAR_25 = VAR_24;
                    VAR_24 = VAR_23;
                }
                else
                {
                    VAR_25 = VAR_23;
                }
            }
        }


        if( VAR_24 != -1 )
        {
            VAR_4->pi_yuv[VAR_24][0] = 0xff;
            VAR_4->pi_yuv[VAR_24][1] = 0x80;
            VAR_4->pi_yuv[VAR_24][2] = 0x80;
        }


        if( VAR_25 != -1 )
        {
            VAR_4->pi_yuv[VAR_25][0] = 0x80;
            VAR_4->pi_yuv[VAR_25][1] = 0x80;
            VAR_4->pi_yuv[VAR_25][2] = 0x80;
        }





    }

    return VAR_1;
}
