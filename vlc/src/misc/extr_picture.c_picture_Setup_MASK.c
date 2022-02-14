
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int den; unsigned int num; } ;
typedef TYPE_2__ vlc_rational_t ;
struct TYPE_14__ {unsigned int plane_count; unsigned int pixel_size; TYPE_1__* p; } ;
typedef TYPE_3__ vlc_chroma_description_t ;
struct TYPE_15__ {scalar_t__ i_width; scalar_t__ i_height; int i_visible_width; int i_visible_height; scalar_t__ i_x_offset; scalar_t__ i_y_offset; int i_sar_den; int i_sar_num; int i_chroma; } ;
typedef TYPE_4__ video_format_t ;
struct TYPE_16__ {int i_pixel_pitch; unsigned int i_lines; int i_visible_lines; unsigned int i_pitch; int i_visible_pitch; int * p_pixels; } ;
typedef TYPE_5__ plane_t ;
struct TYPE_17__ {unsigned int i_planes; int i_nb_fields; TYPE_5__* p; int format; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_12__ {TYPE_2__ w; TYPE_2__ h; } ;


 unsigned int FUNC_0 (TYPE_5__*) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,unsigned int,unsigned int*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_4__ const*) ;
 int FUNC_6 (int *,int ,scalar_t__,scalar_t__,int,int,int ,int ) ;
 TYPE_3__* FUNC_7 (int ) ;

int FUNC_8( picture_t *VAR_3, const video_format_t *restrict VAR_4 )
{
    const vlc_chroma_description_t *VAR_5 =
        FUNC_7( VAR_4->i_chroma );
    if( FUNC_4(!VAR_5) )
        return VAR_1;


    VAR_3->i_planes = 0;
    for( unsigned VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->p); VAR_6++ )
    {
        plane_t *VAR_7 = &VAR_3->p[VAR_6];
        VAR_7->p_pixels = ((void*)0);
        VAR_7->i_pixel_pitch = 0;
    }

    VAR_3->i_nb_fields = 2;

    FUNC_6( &VAR_3->format, VAR_4->i_chroma, VAR_4->i_width, VAR_4->i_height,
                        VAR_4->i_visible_width, VAR_4->i_visible_height,
                        VAR_4->i_sar_num, VAR_4->i_sar_den );
    if( VAR_4->i_x_offset < VAR_4->i_width &&
        VAR_4->i_y_offset < VAR_4->i_height &&
        VAR_4->i_visible_width > 0 && VAR_4->i_x_offset + VAR_4->i_visible_width <= VAR_4->i_width &&
        VAR_4->i_visible_height > 0 && VAR_4->i_y_offset + VAR_4->i_visible_height <= VAR_4->i_height )
        FUNC_5( &VAR_3->format, VAR_4 );







    unsigned VAR_8 = 1;
    unsigned VAR_9 = 1;
    unsigned VAR_10 = 1;

    for( unsigned VAR_11 = 0; VAR_11 < VAR_5->plane_count; VAR_11++ )
    {
        VAR_8 = FUNC_1( VAR_8, 16 * VAR_5->p[VAR_11].w.den );
        VAR_9 = FUNC_1( VAR_9, 16 * VAR_5->p[VAR_11].h.den );
        if( VAR_10 < VAR_5->p[VAR_11].h.den )
            VAR_10 = VAR_5->p[VAR_11].h.den;
    }
    VAR_9 = FUNC_1( VAR_9, 32 );

    unsigned VAR_12, VAR_13;

    if (FUNC_4(FUNC_2(VAR_4->i_width, VAR_8 - 1, &VAR_12))
     || FUNC_4(FUNC_2(VAR_4->i_height, VAR_9 - 1, &VAR_13)))
        return VAR_1;

    VAR_12 = VAR_12 / VAR_8 * VAR_8;
    VAR_13 = VAR_13 / VAR_9 * VAR_9;


    if (FUNC_4(VAR_12 > VAR_0) || FUNC_4(VAR_13 > VAR_0))
        return VAR_1;

    for( unsigned VAR_14 = 0; VAR_14 < VAR_5->plane_count; VAR_14++ )
    {
        plane_t *VAR_15 = &VAR_3->p[VAR_14];
        const vlc_rational_t *VAR_16 = &VAR_5->p[VAR_14].h;
        const vlc_rational_t *VAR_17 = &VAR_5->p[VAR_14].w;


        FUNC_3(VAR_16->den >= VAR_16->num);
        FUNC_3(VAR_17->den >= VAR_17->num);

        VAR_15->i_lines = VAR_13 * VAR_16->num / VAR_16->den;
        VAR_15->i_visible_lines = (VAR_4->i_visible_height + (VAR_16->den - 1)) / VAR_16->den * VAR_16->num;

        VAR_15->i_pitch = VAR_12 * VAR_17->num / VAR_17->den * VAR_5->pixel_size;
        VAR_15->i_visible_pitch = (VAR_4->i_visible_width + (VAR_17->den - 1)) / VAR_17->den * VAR_17->num
                             * VAR_5->pixel_size;
        VAR_15->i_pixel_pitch = VAR_5->pixel_size;

        FUNC_3( (VAR_15->i_pitch % 16) == 0 );
    }
    VAR_3->i_planes = VAR_5->plane_count;

    return VAR_2;
}
