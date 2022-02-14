
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vlc_va_t ;
struct TYPE_14__ {int display; } ;
struct TYPE_16__ {int render_targets; TYPE_3__ hw_ctx; } ;
typedef TYPE_5__ vlc_va_sys_t ;
struct TYPE_17__ {int i_visible_height; int i_visible_width; int i_chroma; } ;
typedef TYPE_6__ video_format_t ;
struct TYPE_12__ {int i; } ;
struct TYPE_13__ {TYPE_1__ value; int type; } ;
struct TYPE_18__ {TYPE_2__ value; int flags; int type; } ;
typedef TYPE_7__ VASurfaceAttrib ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,unsigned int,int ,int ,int ,size_t,TYPE_7__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ,unsigned int*,int*) ;

__attribute__((used)) static int FUNC_4(vlc_va_t *VAR_6, int VAR_7,
                                      const video_format_t *VAR_8,
                                      size_t VAR_9)
{
    FUNC_2(VAR_7);
    vlc_va_sys_t *VAR_10 = VAR_6->sys;

    unsigned VAR_11;
    int VAR_12;
    FUNC_3(VAR_8->i_chroma, &VAR_11, &VAR_12);

    VASurfaceAttrib VAR_13[1] = {
        {
            .type = VAR_1,
            .flags = VAR_2,
            .value.type = VAR_0,
            .value.value.i = VAR_12,
        }
    };

    FUNC_0(FUNC_1(VAR_6), VAR_5, VAR_10->hw_ctx.display, VAR_11,
            VAR_8->i_visible_width, VAR_8->i_visible_height,
            VAR_10->render_targets, VAR_9,
            VAR_13, 1);

    return VAR_4;
error:
    return VAR_3;
}
