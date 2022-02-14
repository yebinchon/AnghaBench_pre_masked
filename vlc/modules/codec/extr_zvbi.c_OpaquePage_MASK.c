
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ i_chroma; unsigned int i_height; unsigned int i_width; } ;
typedef TYPE_3__ video_format_t ;
struct TYPE_12__ {unsigned int columns; int* color_map; TYPE_1__* text; } ;
typedef TYPE_4__ vbi_page ;
typedef int vbi_opacity ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_2__* p; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_10__ {unsigned int i_pitch; int * p_pixels; } ;
struct TYPE_9__ {int opacity; int background; } ;






 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1( picture_t *VAR_2, const vbi_page *VAR_3,
                       const video_format_t *VAR_4, bool VAR_5, const int VAR_6 )
{
    unsigned int VAR_7, VAR_8;

    FUNC_0( VAR_4->i_chroma == VAR_0 );


    for( VAR_8 = 0; VAR_8 < VAR_4->i_height; VAR_8++ )
    {
        for( VAR_7 = 0; VAR_7 < VAR_4->i_width; VAR_7++ )
        {
            const vbi_opacity VAR_9 = VAR_3->text[ VAR_6 + VAR_8/10 * VAR_3->columns + VAR_7/12 ].opacity;
            const int VAR_10 = VAR_3->text[ VAR_6 + VAR_8/10 * VAR_3->columns + VAR_7/12 ].background;
            uint32_t *VAR_11 = (uint32_t*)&VAR_2->p->p_pixels[VAR_8 * VAR_2->p->i_pitch + 4*VAR_7];

            switch( VAR_9 )
            {




            case 131:

            case 130:
                if( VAR_5 )
                    break;


            case 129:
                if( (*VAR_11) != (0xff000000 | VAR_3->color_map[VAR_10] ) )
                    break;


            case 128:
                *VAR_11 = 0;
                break;
            }
        }
    }

    return VAR_1;
}
