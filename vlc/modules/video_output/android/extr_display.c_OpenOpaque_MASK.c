
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int force; } ;
struct TYPE_9__ {TYPE_1__ obj; } ;
typedef TYPE_2__ vout_display_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
struct TYPE_10__ {scalar_t__ i_chroma; scalar_t__ projection_mode; scalar_t__ orientation; } ;
typedef TYPE_3__ video_format_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const*,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(vout_display_t *VAR_4, const vout_display_cfg_t *VAR_5,
                      video_format_t *VAR_6, vlc_video_context *VAR_7)
{
    if (VAR_6->i_chroma != VAR_2)
        return VAR_3;

    if (!VAR_4->obj.force
        && (VAR_6->projection_mode != VAR_1
            || VAR_6->orientation != VAR_0))
    {

        return VAR_3;
    }

    (void) VAR_7;
    return FUNC_0(VAR_4, VAR_5, VAR_6);
}
