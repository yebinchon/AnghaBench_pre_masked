
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
struct TYPE_11__ {int plane_count; int pixel_size; } ;
typedef TYPE_3__ vlc_chroma_description_t ;
struct TYPE_9__ {int i_chroma; } ;
struct TYPE_10__ {TYPE_1__ video; } ;
struct TYPE_12__ {int pf_video_filter; TYPE_5__* p_sys; TYPE_2__ fmt_in; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_13__ {int x; int y; int scale; int xinc; int yinc; int scaleinc; int * p_image; scalar_t__ v; scalar_t__ u; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,char*,char*) ;
 TYPE_3__* FUNC_2 (int const) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_4 )
{
    filter_t *VAR_5 = (filter_t *)VAR_4;

    const vlc_fourcc_t VAR_6 = VAR_5->fmt_in.video.i_chroma;
    const vlc_chroma_description_t *VAR_7 = FUNC_2( VAR_6 );
    if( !VAR_7 || VAR_7->plane_count != 3 || VAR_7->pixel_size != 1 ) {
        FUNC_1( VAR_5, "Unsupported chroma (%4.4s)", (char*)&VAR_6 );
        return VAR_1;
    }


    filter_sys_t *VAR_8 = FUNC_0( sizeof( filter_sys_t ) );
    if( VAR_8 == ((void*)0) )
        return VAR_2;
    VAR_5->p_sys = VAR_8;

    VAR_5->pf_video_filter = VAR_0;

    VAR_8->x = 10;
    VAR_8->y = 10;
    VAR_8->scale = 1;
    VAR_8->xinc = 1;
    VAR_8->yinc = 1;
    VAR_8->scaleinc = 1;
    VAR_8->u = 0;
    VAR_8->v = 0;
    VAR_8->p_image = ((void*)0);

    return VAR_3;
}
