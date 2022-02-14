
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {int height; int width; int y; int x; int is_decorated; int is_fullscreen; } ;
typedef TYPE_1__ vout_window_cfg_t ;
struct TYPE_16__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_14__ {int window; } ;
struct TYPE_17__ {int window_enabled; int window_lock; int * dec_device; TYPE_13__ display_cfg; int dummy; } ;
typedef TYPE_3__ vout_thread_sys_t ;
typedef int vlc_decoder_device ;
typedef int video_format_t ;


 int FUNC_0 (TYPE_2__*,int const*,TYPE_13__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,int const*,int *,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(vout_thread_t *VAR_0, const video_format_t *VAR_1,
                             vlc_decoder_device **VAR_2)
{
    vout_thread_sys_t *VAR_3 = VAR_0->p;

    FUNC_1(!VAR_3->dummy);
    FUNC_1(VAR_0 != ((void*)0));

    FUNC_8(&VAR_3->window_lock);
    if (!VAR_3->window_enabled) {
        vout_window_cfg_t VAR_4 = {
            .is_fullscreen = FUNC_3(VAR_0, "fullscreen"),
            .is_decorated = FUNC_4(VAR_0, "video-deco"),





        };

        FUNC_0(VAR_0, VAR_1, &VAR_3->display_cfg);
        FUNC_10(VAR_0, VAR_1, &VAR_4.width, &VAR_4.height);

        if (FUNC_12(VAR_3->display_cfg.window, &VAR_4)) {
            FUNC_9(&VAR_3->window_lock);
            FUNC_2(VAR_0, "failed to enable window");
            return -1;
        }
        VAR_3->window_enabled = 1;
    } else
        FUNC_11(VAR_0);

    if (VAR_2)
    {
        if (VAR_3->dec_device == ((void*)0))
            VAR_3->dec_device = FUNC_6(VAR_3->display_cfg.window);
        *VAR_2 = VAR_3->dec_device ? FUNC_7( VAR_3->dec_device ) : ((void*)0);
    }
    FUNC_9(&VAR_3->window_lock);
    return 0;
}
