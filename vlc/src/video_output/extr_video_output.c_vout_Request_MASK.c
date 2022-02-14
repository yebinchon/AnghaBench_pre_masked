
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* p; } ;
typedef TYPE_1__ vout_thread_t ;
struct TYPE_17__ {float rate; scalar_t__ spu; int thread; int original; scalar_t__ delay; int * clock; int * display; } ;
typedef TYPE_2__ vout_thread_sys_t ;
struct TYPE_18__ {int * clock; int * fmt; TYPE_1__* vout; } ;
typedef TYPE_3__ vout_configuration_t ;
typedef int vlc_video_context ;
typedef int video_format_t ;
typedef int input_thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (scalar_t__,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int *,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_1__*,int *,TYPE_3__ const*) ;
 int FUNC_14 (TYPE_1__*) ;

int FUNC_15(const vout_configuration_t *VAR_2, vlc_video_context *VAR_3, input_thread_t *VAR_4)
{
    vout_thread_t *VAR_5 = VAR_2->vout;
    vout_thread_sys_t *VAR_6 = VAR_5->p;

    FUNC_2(VAR_2->fmt != ((void*)0));
    FUNC_2(VAR_2->clock != ((void*)0));

    if (!FUNC_0(VAR_2->fmt))

        return -1;

    video_format_t VAR_7;
    FUNC_1(&VAR_7, VAR_2->fmt);

    if (FUNC_7(VAR_5, &VAR_7) == 0)
    {
        FUNC_5(&VAR_7);
        return 0;
    }

    if (FUNC_9(VAR_5, &VAR_7, ((void*)0)) != 0)
    {

        FUNC_3(VAR_5, "failed to enable window");
        FUNC_5(&VAR_7);
        return -1;
    }

    if (VAR_6->display != ((void*)0))
        FUNC_14(VAR_5);

    FUNC_11(VAR_5);

    VAR_6->original = VAR_7;

    VAR_6->delay = 0;
    VAR_6->rate = 1.f;
    VAR_6->clock = VAR_2->clock;
    VAR_6->delay = 0;

    if (FUNC_13(VAR_5, VAR_3, VAR_2))
    {
        FUNC_3(VAR_5, "video output display creation failed");
        FUNC_5(&VAR_6->original);
        FUNC_8(VAR_5);
        return -1;
    }
    if (FUNC_6(&VAR_6->thread, VAR_0, VAR_5, VAR_1)) {
        FUNC_12(VAR_5);
        FUNC_8(VAR_5);
        return -1;
    }

    if (VAR_4 != ((void*)0) && VAR_6->spu)
        FUNC_4(VAR_6->spu, VAR_4);
    FUNC_10(VAR_5);
    return 0;
}
