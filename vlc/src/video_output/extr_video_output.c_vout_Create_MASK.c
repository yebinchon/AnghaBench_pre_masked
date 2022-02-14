
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_31__ {TYPE_9__* p; } ;
typedef TYPE_8__ vout_thread_t ;
struct TYPE_30__ {int * window; } ;
struct TYPE_29__ {int lock; } ;
struct TYPE_28__ {void* position; void* timeout; void* show; } ;
struct TYPE_26__ {int mode; } ;
struct TYPE_25__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_27__ {TYPE_3__ crop; TYPE_2__ dar; } ;
struct TYPE_24__ {scalar_t__ i_chroma; } ;
struct TYPE_32__ {int dummy; int window_enabled; TYPE_7__ display_cfg; int refs; int render; int window_lock; int * splitter_name; int * spu; int display_lock; int * display; TYPE_6__ filter; void* is_late_dropped; TYPE_5__ title; int control; int statistic; int snapshot; TYPE_4__ source; TYPE_1__ original; } ;
typedef TYPE_9__ vout_thread_sys_t ;
typedef int vlc_object_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int * FUNC_3 (TYPE_8__*,TYPE_8__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_8__*,char*,int ) ;
 int FUNC_6 (TYPE_8__*,char*) ;
 void* FUNC_7 (TYPE_8__*,char*) ;
 void* FUNC_8 (TYPE_8__*,char*) ;
 int * FUNC_9 (TYPE_8__*,char*) ;
 int FUNC_10 (TYPE_8__*,char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_8__*) ;
 TYPE_8__* FUNC_13 (int *) ;
 int FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (int *,int,int ) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (TYPE_8__*) ;
 int FUNC_19 () ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;

vout_thread_t *FUNC_22(vlc_object_t *VAR_4)
{
    vout_thread_t *VAR_5 = FUNC_13(VAR_4);
    if (!VAR_5)
        return ((void*)0);
    vout_thread_sys_t *VAR_6 = VAR_5->p;
    VAR_6->dummy = 0;
    FUNC_15(VAR_5);


    VAR_6->splitter_name = FUNC_2("video-splitter") ?
        FUNC_9(VAR_5, "video-splitter") : ((void*)0);
    if (VAR_6->splitter_name != ((void*)0)) {
        FUNC_5(VAR_5, "window", VAR_0);
        FUNC_10(VAR_5, "window", "wdummy");
    }

    VAR_6->original.i_chroma = 0;
    VAR_6->source.dar.num = 0;
    VAR_6->source.dar.den = 0;
    VAR_6->source.crop.mode = VAR_1;
    VAR_6->snapshot = FUNC_19();
    FUNC_20(&VAR_6->statistic);


    VAR_6->spu = FUNC_7(VAR_5, "spu") || FUNC_7(VAR_5, "osd") ?
               FUNC_3(VAR_5, VAR_5) : ((void*)0);

    FUNC_17(&VAR_6->control);

    VAR_6->title.show = FUNC_7(VAR_5, "video-title-show");
    VAR_6->title.timeout = FUNC_8(VAR_5, "video-title-timeout");
    VAR_6->title.position = FUNC_8(VAR_5, "video-title-position");

    FUNC_14(VAR_5);

    VAR_6->is_late_dropped = FUNC_7(VAR_5, "drop-late-frames");

    FUNC_11(&VAR_6->filter.lock);


    VAR_6->display = ((void*)0);
    FUNC_11(&VAR_6->display_lock);


    VAR_6->display_cfg.window = FUNC_18(VAR_5);
    if (VAR_6->display_cfg.window == ((void*)0)) {
        if (VAR_6->spu)
            FUNC_4(VAR_6->spu);
        FUNC_12(VAR_5);
        return ((void*)0);
    }

    if (VAR_6->splitter_name != ((void*)0))
        FUNC_6(VAR_5, "window");
    VAR_6->window_enabled = 0;
    FUNC_11(&VAR_6->window_lock);


    FUNC_16(&VAR_6->render, 5, FUNC_0(10));


    FUNC_1(&VAR_6->refs, 0);

    if (FUNC_7(VAR_5, "video-wallpaper"))
        FUNC_21(VAR_6->display_cfg.window, VAR_3);
    else if (FUNC_7(VAR_5, "video-on-top"))
        FUNC_21(VAR_6->display_cfg.window, VAR_2);

    return VAR_5;
}
