
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int i_width; int i_visible_width; int i_height; int i_visible_height; } ;
struct TYPE_12__ {TYPE_2__ video; } ;
struct TYPE_14__ {scalar_t__ i_chroma; } ;
struct TYPE_10__ {scalar_t__ i_codec; TYPE_5__ video; } ;
struct TYPE_13__ {int * p_module; TYPE_3__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_4__ vlc_blender_t ;
typedef TYPE_5__ video_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_4__*,char*,int *,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;

int FUNC_2( vlc_blender_t *VAR_2,
                           int VAR_3, int VAR_4,
                           const video_format_t *VAR_5 )
{

    if( VAR_2->p_module &&
        VAR_2->fmt_in.video.i_chroma != VAR_5->i_chroma )
    {

        FUNC_1( VAR_2, VAR_2->p_module );
        VAR_2->p_module = ((void*)0);
    }



    VAR_2->fmt_in.i_codec = VAR_5->i_chroma;
    VAR_2->fmt_in.video = *VAR_5;


    VAR_2->fmt_out.video.i_width =
    VAR_2->fmt_out.video.i_visible_width = VAR_3;
    VAR_2->fmt_out.video.i_height =
    VAR_2->fmt_out.video.i_visible_height = VAR_4;


    if( !VAR_2->p_module )
        VAR_2->p_module = FUNC_0( VAR_2, "video blending", ((void*)0), 0 );
    if( !VAR_2->p_module )
        return VAR_0;
    return VAR_1;
}
