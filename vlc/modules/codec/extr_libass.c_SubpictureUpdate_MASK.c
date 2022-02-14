
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__ const* vlc_tick_t ;
struct TYPE_19__ {scalar_t__ i_visible_height; scalar_t__ i_height; scalar_t__ i_visible_width; scalar_t__ i_width; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_18__ {TYPE_7__* p_sys; } ;
struct TYPE_20__ {TYPE_5__* p_region; scalar_t__ i_original_picture_width; scalar_t__ i_original_picture_height; TYPE_1__ updater; } ;
typedef TYPE_4__ subpicture_t ;
struct TYPE_21__ {int i_align; struct TYPE_21__* p_next; scalar_t__ i_y; scalar_t__ i_x; } ;
typedef TYPE_5__ subpicture_region_t ;
struct TYPE_22__ {scalar_t__ y0; scalar_t__ x0; scalar_t__ y1; scalar_t__ x1; } ;
typedef TYPE_6__ rectangle_t ;
struct TYPE_23__ {int * p_img; TYPE_8__* p_dec_sys; } ;
typedef TYPE_7__ libass_spu_updater_sys_t ;
struct TYPE_24__ {int lock; TYPE_2__ fmt; } ;
typedef TYPE_8__ decoder_sys_t ;
typedef int ASS_Image ;


 int FUNC_0 (TYPE_6__*,int const,int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__ const*) ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( subpicture_t *VAR_2,
                              const video_format_t *VAR_3,
                              const video_format_t *VAR_4,
                              vlc_tick_t VAR_5 )
{
    FUNC_2( VAR_3 ); FUNC_2( VAR_4 ); FUNC_2( VAR_5 );

    libass_spu_updater_sys_t *VAR_6 = VAR_2->updater.p_sys;
    decoder_sys_t *VAR_7 = VAR_6->p_dec_sys;

    video_format_t VAR_8 = VAR_7->fmt;
    ASS_Image *VAR_9 = VAR_6->p_img;


    VAR_2->i_original_picture_height = VAR_8.i_visible_height;
    VAR_2->i_original_picture_width = VAR_8.i_visible_width;







    const int VAR_10 = 4;
    rectangle_t VAR_11[VAR_10];
    const int VAR_12 = FUNC_0( VAR_11, VAR_10, VAR_9, VAR_8.i_width, VAR_8.i_height );

    if( VAR_12 <= 0 )
    {
        FUNC_4( &VAR_7->lock );
        return;
    }


    subpicture_region_t **VAR_13 = &VAR_2->p_region;

    for( int VAR_14 = 0; VAR_14 < VAR_12; VAR_14++ )
    {
        subpicture_region_t *VAR_15;
        video_format_t VAR_16;


        VAR_16 = VAR_8;
        VAR_16.i_width =
        VAR_16.i_visible_width = VAR_11[VAR_14].x1 - VAR_11[VAR_14].x0;
        VAR_16.i_height =
        VAR_16.i_visible_height = VAR_11[VAR_14].y1 - VAR_11[VAR_14].y0;

        VAR_15 = FUNC_3( &VAR_16 );
        if( !VAR_15 )
            break;
        VAR_15->i_x = VAR_11[VAR_14].x0;
        VAR_15->i_y = VAR_11[VAR_14].y0;
        VAR_15->i_align = VAR_1 | VAR_0;


        FUNC_1( VAR_15, VAR_9 );


        *VAR_13 = VAR_15;
        VAR_13 = &VAR_15->p_next;
    }
    FUNC_4( &VAR_7->lock );

}
