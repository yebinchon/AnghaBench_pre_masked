
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int i_bmask; int i_gmask; int i_rmask; int i_chroma; } ;
struct TYPE_11__ {TYPE_1__ video; int i_codec; } ;
struct TYPE_9__ {int * p_module; TYPE_7__ fmt_out; TYPE_7__ fmt_in; } ;
typedef TYPE_2__ vlc_blender_t ;
struct TYPE_10__ {int i_bmask; int i_gmask; int i_rmask; int i_chroma; } ;
typedef TYPE_3__ video_format_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int ,int ) ;
 TYPE_2__* FUNC_1 (int *,int,char*) ;

vlc_blender_t *FUNC_2( vlc_object_t *VAR_1,
                           const video_format_t *VAR_2 )
{
    vlc_blender_t *VAR_3 = FUNC_1( VAR_1, sizeof(*VAR_3), "blend" );
    if( !VAR_3 )
        return ((void*)0);

    FUNC_0( &VAR_3->fmt_in, VAR_0, 0 );

    FUNC_0( &VAR_3->fmt_out, VAR_0, 0 );

    VAR_3->fmt_out.i_codec =
    VAR_3->fmt_out.video.i_chroma = VAR_2->i_chroma;
    VAR_3->fmt_out.video.i_rmask = VAR_2->i_rmask;
    VAR_3->fmt_out.video.i_gmask = VAR_2->i_gmask;
    VAR_3->fmt_out.video.i_bmask = VAR_2->i_bmask;



    VAR_3->p_module = ((void*)0);

    return VAR_3;
}
