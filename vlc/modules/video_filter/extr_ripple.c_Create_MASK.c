
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {scalar_t__ plane_count; } ;
typedef TYPE_3__ vlc_chroma_description_t ;
struct TYPE_8__ {int i_chroma; } ;
struct TYPE_9__ {TYPE_1__ video; } ;
struct TYPE_11__ {int pf_video_filter; TYPE_5__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_12__ {double f_angle; scalar_t__ last_date; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_4 )
{
    filter_t *VAR_5 = (filter_t *)VAR_4;

    const vlc_chroma_description_t *VAR_6 =
        FUNC_1( VAR_5->fmt_in.video.i_chroma );
    if( VAR_6 == ((void*)0) || VAR_6->plane_count == 0 )
        return VAR_1;


    filter_sys_t *VAR_7 = FUNC_0( sizeof( filter_sys_t ) );
    if( VAR_7 == ((void*)0) )
        return VAR_2;
    VAR_5->p_sys = VAR_7;
    VAR_5->pf_video_filter = VAR_0;

    VAR_7->f_angle = 0.0;
    VAR_7->last_date = 0;

    return VAR_3;
}
