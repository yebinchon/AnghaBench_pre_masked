
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vout_display_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
struct TYPE_4__ {scalar_t__ i_chroma; int projection_mode; } ;
typedef TYPE_1__ video_format_t ;


 int FUNC_0 (int *,int const*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(vout_display_t *VAR_3, const vout_display_cfg_t *VAR_4,
                video_format_t *VAR_5, vlc_video_context *VAR_6)
{
    if (VAR_5->i_chroma == VAR_1)
        return VAR_2;




    VAR_5->projection_mode = VAR_0;

    (void) VAR_6;
    return FUNC_0(VAR_3, VAR_4, VAR_5);
}
