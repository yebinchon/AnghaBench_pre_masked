
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_10__ {double i_visible_height; scalar_t__ i_visible_width; scalar_t__ i_y_offset; scalar_t__ i_x_offset; scalar_t__ i_bits_per_pixel; int i_chroma; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
struct TYPE_11__ {int * p_region; scalar_t__ i_start; TYPE_1__ updater; } ;
typedef TYPE_3__ subpicture_t ;
struct TYPE_12__ {int * p_img; scalar_t__ i_pts; TYPE_5__* p_dec_sys; } ;
typedef TYPE_4__ libass_spu_updater_sys_t ;
struct TYPE_13__ {int lock; int p_track; int p_renderer; TYPE_2__ fmt; } ;
typedef TYPE_5__ decoder_sys_t ;
typedef int ASS_Image ;


 int FUNC_0 (scalar_t__ const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (int ,double const,int) ;
 int FUNC_3 (int ,scalar_t__,double) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( subpicture_t *VAR_3,
                               bool VAR_4, const video_format_t *VAR_5,
                               bool VAR_6, const video_format_t *VAR_7,
                               vlc_tick_t VAR_8 )
{
    libass_spu_updater_sys_t *VAR_9 = VAR_3->updater.p_sys;
    decoder_sys_t *VAR_10 = VAR_9->p_dec_sys;

    FUNC_4( &VAR_10->lock );

    video_format_t VAR_11 = *VAR_7;
    VAR_11.i_chroma = VAR_0;
    VAR_11.i_bits_per_pixel = 0;
    VAR_11.i_x_offset = 0;
    VAR_11.i_y_offset = 0;
    if( VAR_4 || VAR_6 )
    {
        FUNC_3( VAR_10->p_renderer, VAR_11.i_visible_width, VAR_11.i_visible_height );
        const double VAR_12 = (double)VAR_5->i_visible_width / VAR_5->i_visible_height;
        const double VAR_13 = (double)VAR_7->i_visible_width / VAR_7->i_visible_height;
        FUNC_2( VAR_10->p_renderer, VAR_13 / VAR_12, 1 );
        VAR_10->fmt = VAR_11;
    }


    const vlc_tick_t VAR_14 = VAR_9->i_pts + (VAR_8 - VAR_3->i_start);
    int VAR_15;
    ASS_Image *VAR_16 = FUNC_1( VAR_10->p_renderer, VAR_10->p_track,
                                         FUNC_0( VAR_14 ), &VAR_15 );

    if( !VAR_15 && !VAR_4 && !VAR_6 &&
        (VAR_16 != ((void*)0)) == (VAR_3->p_region != ((void*)0)) )
    {
        FUNC_5( &VAR_10->lock );
        return VAR_2;
    }
    VAR_9->p_img = VAR_16;


    return VAR_1;
}
