
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_18__ {int i_entries; int** palette; } ;
typedef TYPE_3__ video_palette_t ;
struct TYPE_19__ {int i_sar_den; TYPE_3__* p_palette; scalar_t__ i_width; scalar_t__ i_height; scalar_t__ i_y_offset; scalar_t__ i_x_offset; scalar_t__ i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_sar_num; } ;
typedef TYPE_4__ video_format_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_20__ {TYPE_10__* p_region; } ;
typedef TYPE_5__ subpicture_t ;
struct TYPE_21__ {int* p_data; int** pi_yuv; int* pi_alpha; int i_y_top_offset; scalar_t__ i_y_bottom_offset; } ;
typedef TYPE_6__ subpicture_data_t ;
struct TYPE_22__ {int i_y; int i_x; scalar_t__ i_height; scalar_t__ i_width; } ;
typedef TYPE_7__ spu_properties_t ;
typedef int decoder_t ;
struct TYPE_17__ {TYPE_1__* p; } ;
struct TYPE_16__ {int i_pitch; int * p_pixels; } ;
struct TYPE_15__ {TYPE_2__* p_picture; int i_y; int i_x; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*) ;
 TYPE_10__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_1, subpicture_t *VAR_2,
                    subpicture_data_t *VAR_3,
                    const spu_properties_t *VAR_4 )
{
    uint8_t *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    const uint16_t *VAR_11 = VAR_3->p_data;
    video_format_t VAR_12;
    video_palette_t VAR_13;


    FUNC_4( &VAR_12, VAR_0 );
    VAR_12.i_sar_num = 0;
    VAR_12.i_sar_den = 1;
    VAR_12.i_width = VAR_12.i_visible_width = VAR_4->i_width;
    VAR_12.i_height = VAR_12.i_visible_height = VAR_4->i_height -
        VAR_3->i_y_top_offset - VAR_3->i_y_bottom_offset;
    VAR_12.i_x_offset = VAR_12.i_y_offset = 0;
    VAR_12.p_palette = &VAR_13;
    VAR_12.p_palette->i_entries = 4;
    for( VAR_6 = 0; VAR_6 < VAR_12.p_palette->i_entries; VAR_6++ )
    {
        VAR_12.p_palette->palette[VAR_6][0] = VAR_3->pi_yuv[VAR_6][0];
        VAR_12.p_palette->palette[VAR_6][1] = VAR_3->pi_yuv[VAR_6][1];
        VAR_12.p_palette->palette[VAR_6][2] = VAR_3->pi_yuv[VAR_6][2];
        VAR_12.p_palette->palette[VAR_6][3] = VAR_3->pi_alpha[VAR_6] * 0x11;
    }

    VAR_2->p_region = FUNC_2( &VAR_12 );
    if( !VAR_2->p_region )
    {
        VAR_12.p_palette = ((void*)0);
        FUNC_3( &VAR_12 );
        FUNC_1( VAR_1, "cannot allocate SPU region" );
        return;
    }

    VAR_2->p_region->i_x = VAR_4->i_x;
    VAR_2->p_region->i_y = VAR_4->i_y + VAR_3->i_y_top_offset;
    VAR_5 = VAR_2->p_region->p_picture->p->p_pixels;
    VAR_10 = VAR_2->p_region->p_picture->p->i_pitch;


    for( VAR_7 = 0; VAR_7 < (int)VAR_12.i_height * VAR_10; VAR_7 += VAR_10 )
    {

        for( VAR_6 = 0 ; VAR_6 < (int)VAR_12.i_width; VAR_6 += VAR_8 )
        {

            VAR_9 = *VAR_11 & 0x3;
            VAR_8 = *VAR_11++ >> 2;
            FUNC_0( VAR_5 + VAR_6 + VAR_7, VAR_9, VAR_8 );
        }
    }

    VAR_12.p_palette = ((void*)0);
    FUNC_3( &VAR_12 );
}
