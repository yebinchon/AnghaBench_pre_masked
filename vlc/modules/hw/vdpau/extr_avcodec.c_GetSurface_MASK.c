
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* frame; } ;
typedef TYPE_2__ vlc_vdp_video_field_t ;
struct TYPE_10__ {int vctx; } ;
typedef TYPE_3__ vlc_va_sys_t ;
struct video_context_private {TYPE_2__** pool; } ;
struct TYPE_8__ {int refs; } ;


 struct video_context_private* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,uintptr_t*,int) ;
 int FUNC_2 (int *,int) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static vlc_vdp_video_field_t *FUNC_4(vlc_va_sys_t *VAR_0)
{
    vlc_vdp_video_field_t *VAR_1;
    struct video_context_private *VAR_2 = FUNC_0(VAR_0->vctx);

    for (unsigned VAR_3 = 0; (VAR_1 = VAR_2->pool[VAR_3]) != ((void*)0); VAR_3++)
    {
        uintptr_t VAR_4 = 1;

        if (FUNC_1(&VAR_1->frame->refs, &VAR_4, 2))
        {
            vlc_vdp_video_field_t *VAR_5 = FUNC_3(VAR_1);
            FUNC_2(&VAR_1->frame->refs, 1);
            return VAR_5;
        }
    }
    return ((void*)0);
}
