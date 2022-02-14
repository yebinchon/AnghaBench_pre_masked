
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef void* vlc_fourcc_t ;
struct TYPE_8__ {int i_width; int i_visible_width; int i_height; int i_visible_height; void* i_chroma; } ;
struct TYPE_10__ {TYPE_1__ video; } ;
struct TYPE_9__ {int p_module; TYPE_6__ fmt_out; TYPE_6__ fmt_in; } ;
typedef TYPE_2__ filter_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int *,int) ;
 TYPE_2__* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static filter_t *FUNC_4(vlc_object_t *VAR_1,
                                             vlc_fourcc_t VAR_2,
                                             vlc_fourcc_t VAR_3,
                                             bool VAR_4)
{
    filter_t *VAR_5 = FUNC_2(VAR_1, sizeof(*VAR_5), "scale");
    if (!VAR_5)
        return ((void*)0);

    FUNC_0(&VAR_5->fmt_in, VAR_0, 0);
    VAR_5->fmt_in.video.i_chroma = VAR_2;
    VAR_5->fmt_in.video.i_width =
    VAR_5->fmt_in.video.i_visible_width =
    VAR_5->fmt_in.video.i_height =
    VAR_5->fmt_in.video.i_visible_height = 32;

    FUNC_0(&VAR_5->fmt_out, VAR_0, 0);
    VAR_5->fmt_out.video.i_chroma = VAR_3;
    VAR_5->fmt_out.video.i_width =
    VAR_5->fmt_out.video.i_visible_width =
    VAR_5->fmt_out.video.i_height =
    VAR_5->fmt_out.video.i_visible_height = VAR_4 ? 16 : 32;

    VAR_5->p_module = FUNC_1(VAR_5, "video converter", ((void*)0), 0);
    if (!VAR_5->p_module)
    {
        FUNC_3(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
