
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int i_width; int i_visible_width; int i_height; int i_visible_height; } ;
typedef TYPE_2__ video_format_t ;
struct TYPE_9__ {int i_width; int i_height; int i_maxheight; int i_maxwidth; scalar_t__ f_scale; } ;
struct TYPE_11__ {TYPE_1__ video; } ;
typedef TYPE_3__ transcode_encoder_config_t ;


 int FUNC_0 (int *,TYPE_2__ const*,scalar_t__,int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0,
                                               const video_format_t *VAR_1,
                                               const transcode_encoder_config_t *VAR_2,
                                               video_format_t *VAR_3 )
{
    if( !VAR_2->video.f_scale &&
        (VAR_2->video.i_width & ~1) && (VAR_2->video.i_width & ~1) )
    {
        VAR_3->i_width = VAR_3->i_visible_width = VAR_2->video.i_width & ~1;
        VAR_3->i_height = VAR_3->i_visible_height = VAR_2->video.i_height & ~1;
    }
    else if( VAR_2->video.f_scale )
    {
        FUNC_0( VAR_0,
                                     VAR_1,
                                     VAR_2->video.f_scale,
                                     VAR_2->video.i_maxwidth,
                                     VAR_2->video.i_maxheight,
                                     VAR_3 );
    }
    else
    {
        VAR_3->i_width = VAR_1->i_width;
        VAR_3->i_visible_width = VAR_1->i_visible_width;
        VAR_3->i_height = VAR_1->i_height;
        VAR_3->i_visible_height = VAR_1->i_visible_height;
    }
}
