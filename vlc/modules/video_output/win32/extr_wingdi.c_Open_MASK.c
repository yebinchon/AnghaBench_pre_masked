
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ projection_mode; } ;
struct TYPE_11__ {int force; } ;
struct TYPE_13__ {int (* close ) (TYPE_3__*) ;int control; int display; int prepare; TYPE_4__* sys; TYPE_2__ source; TYPE_1__ obj; } ;
typedef TYPE_3__ vout_display_t ;
struct TYPE_14__ {int sys; int area; } ;
typedef TYPE_4__ vout_display_sys_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
typedef int video_format_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *,int const*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_6 ;
 TYPE_4__* FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(vout_display_t *VAR_7, const vout_display_cfg_t *VAR_8,
                video_format_t *VAR_9, vlc_video_context *VAR_10)
{
    vout_display_sys_t *VAR_11;

    if ( !VAR_7->obj.force && VAR_7->source.projection_mode != VAR_2)
        return VAR_4;

    VAR_7->sys = VAR_11 = FUNC_5(1, sizeof(*VAR_11));
    if (!VAR_11)
        return VAR_5;

    FUNC_1(VAR_7, &VAR_11->area, VAR_8);
    if (FUNC_2(FUNC_4(VAR_7), &VAR_11->area, &VAR_11->sys, 0))
        goto error;


    if (FUNC_3(VAR_7, VAR_9))
        goto error;


    VAR_7->prepare = VAR_3;
    VAR_7->display = VAR_1;
    VAR_7->control = VAR_0;
    VAR_7->close = FUNC_0;
    return VAR_6;

error:
    FUNC_0(VAR_7);
    return VAR_4;
}
