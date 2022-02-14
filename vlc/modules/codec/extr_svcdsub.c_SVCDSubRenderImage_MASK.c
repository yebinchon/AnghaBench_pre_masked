
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_10__ {TYPE_1__* p_picture; } ;
typedef TYPE_2__ subpicture_region_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_12__ {int i_height; int i_width; scalar_t__ second_field_offset; scalar_t__ i_image_offset; } ;
typedef TYPE_4__ decoder_sys_t ;
typedef int bs_t ;
struct TYPE_13__ {scalar_t__ i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_9__ {int Y_PITCH; scalar_t__* Y_PIXELS; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_0, block_t *VAR_1,
                subpicture_region_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    uint8_t *VAR_4 = VAR_2->p_picture->Y_PIXELS;
    int VAR_5;
    int VAR_6, VAR_7;
    uint8_t VAR_8, VAR_9;
    bs_t VAR_10;

    FUNC_2( &VAR_10, VAR_1->p_buffer + VAR_3->i_image_offset,
             VAR_1->i_buffer - VAR_3->i_image_offset );

    for( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
    {
        for( VAR_6 = VAR_5; VAR_6 < VAR_3->i_height; VAR_6 += 2 )
        {
            for( VAR_7 = 0; VAR_7 < VAR_3->i_width; VAR_7++ )
            {
                VAR_8 = FUNC_3( &VAR_10, 2 );
                if( VAR_8 == 0 && (VAR_9 = FUNC_3( &VAR_10, 2 )) )
                {
                    VAR_9 = FUNC_0( VAR_9, VAR_3->i_width - VAR_7 );
                    FUNC_4( &VAR_4[VAR_6 * VAR_2->p_picture->Y_PITCH +
                                    VAR_7], 0, VAR_9 + 1 );
                    VAR_7 += VAR_9;
                    continue;
                }

                VAR_4[VAR_6 * VAR_2->p_picture->Y_PITCH + VAR_7] = VAR_8;
            }

            FUNC_1( &VAR_10 );
        }


        FUNC_2( &VAR_10, VAR_1->p_buffer + VAR_3->i_image_offset +
                 VAR_3->second_field_offset,
                 VAR_1->i_buffer - VAR_3->i_image_offset -
                 VAR_3->second_field_offset );
    }
}
