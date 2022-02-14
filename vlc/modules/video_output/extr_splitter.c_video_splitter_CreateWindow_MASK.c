
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vout_window_t ;
struct TYPE_5__ {void* sys; int * cbs; } ;
typedef TYPE_1__ vout_window_owner_t ;
struct TYPE_6__ {int is_decorated; int height; int width; } ;
typedef TYPE_2__ vout_window_cfg_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_object_t ;
typedef int video_format_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int const*,int const*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int * FUNC_3 (int *,int *,TYPE_1__*) ;

__attribute__((used)) static vout_window_t *FUNC_4(vlc_object_t *VAR_1,
    const vout_display_cfg_t *restrict VAR_2,
    const video_format_t *restrict VAR_3, void *VAR_4)
{
    vout_window_cfg_t VAR_5 = {
        .is_decorated = 1,
    };
    vout_window_owner_t VAR_6 = {
        .cbs = &VAR_0,
        .sys = VAR_4,
    };

    FUNC_0(&VAR_5.width, &VAR_5.height, VAR_3,
                                       VAR_2);

    vout_window_t *VAR_7 = FUNC_3(VAR_1, ((void*)0), &VAR_6);
    if (VAR_7 != ((void*)0)) {
        if (FUNC_2(VAR_7, &VAR_5)) {
            FUNC_1(VAR_7);
            VAR_7 = ((void*)0);
        }
    }
    return VAR_7;
}
