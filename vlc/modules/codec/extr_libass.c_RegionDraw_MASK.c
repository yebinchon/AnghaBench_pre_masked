
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int i_width; int i_height; } ;
struct TYPE_10__ {int i_x; int i_y; TYPE_2__ fmt; TYPE_1__* p_picture; } ;
typedef TYPE_3__ subpicture_region_t ;
struct TYPE_11__ {int* p_pixels; int i_pitch; int i_lines; int i_visible_pitch; int i_visible_lines; } ;
typedef TYPE_4__ plane_t ;
struct TYPE_12__ {int const dst_x; int const w; int const dst_y; int const h; int color; unsigned int* bitmap; int stride; struct TYPE_12__* next; } ;
struct TYPE_8__ {TYPE_4__* p; } ;
typedef TYPE_5__ ASS_Image ;


 int* FUNC_0 (int,int) ;
 int FUNC_1 (int*,int,int) ;

__attribute__((used)) static void FUNC_2( subpicture_region_t *VAR_0, ASS_Image *VAR_1 )
{
    const plane_t *VAR_2 = &VAR_0->p_picture->p[0];
    const int VAR_3 = VAR_0->i_x;
    const int VAR_4 = VAR_0->i_y;
    const int VAR_5 = VAR_0->fmt.i_width;
    const int VAR_6 = VAR_0->fmt.i_height;

    FUNC_1( VAR_2->p_pixels, 0x00, VAR_2->i_pitch * VAR_2->i_lines );
    for( ; VAR_1 != ((void*)0); VAR_1 = VAR_1->next )
    {
        if( VAR_1->dst_x < VAR_3 || VAR_1->dst_x + VAR_1->w > VAR_3 + VAR_5 ||
            VAR_1->dst_y < VAR_4 || VAR_1->dst_y + VAR_1->h > VAR_4 + VAR_6 )
            continue;

        const unsigned VAR_7 = (VAR_1->color >> 24)&0xff;
        const unsigned VAR_8 = (VAR_1->color >> 16)&0xff;
        const unsigned VAR_9 = (VAR_1->color >> 8)&0xff;
        const unsigned VAR_10 = (VAR_1->color )&0xff;
        int VAR_11, VAR_12;

        for( VAR_12 = 0; VAR_12 < VAR_1->h; VAR_12++ )
        {
            for( VAR_11 = 0; VAR_11 < VAR_1->w; VAR_11++ )
            {
                const unsigned VAR_13 = VAR_1->bitmap[VAR_12*VAR_1->stride+VAR_11];
                const unsigned VAR_14 = (255 - VAR_10) * VAR_13 / 255;

                uint8_t *VAR_15 = &VAR_2->p_pixels[(VAR_12+VAR_1->dst_y-VAR_4) * VAR_2->i_pitch + 4 * (VAR_11+VAR_1->dst_x-VAR_3)];
                const unsigned VAR_16 = VAR_15[3];


                if( VAR_16 == 0 )
                {

                    VAR_15[0] = VAR_7;
                    VAR_15[1] = VAR_8;
                    VAR_15[2] = VAR_9;
                    VAR_15[3] = VAR_14;
                }
                else
                {
                    VAR_15[3] = 255 - ( 255 - VAR_15[3] ) * ( 255 - VAR_14 ) / 255;
                    if( VAR_15[3] != 0 )
                    {
                        VAR_15[0] = ( VAR_15[0] * VAR_16 * (255-VAR_14) / 255 + VAR_7 * VAR_14 ) / VAR_15[3];
                        VAR_15[1] = ( VAR_15[1] * VAR_16 * (255-VAR_14) / 255 + VAR_8 * VAR_14 ) / VAR_15[3];
                        VAR_15[2] = ( VAR_15[2] * VAR_16 * (255-VAR_14) / 255 + VAR_9 * VAR_14 ) / VAR_15[3];
                    }
                }
            }
        }
    }
}
