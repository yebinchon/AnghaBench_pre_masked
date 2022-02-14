
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int (* close ) (TYPE_1__*) ;int control; int display; int prepare; int source; TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_21__ {int i_output; TYPE_5__* p_output; int fmt; int * p_module; } ;
struct TYPE_19__ {struct vlc_vidsplit_part* parts; int * pictures; int lock; TYPE_4__ splitter; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_20__ {int is_display_filled; int * window; int zoom; int align; int display; } ;
typedef TYPE_3__ vout_display_cfg_t ;
typedef int vlc_video_context ;
typedef int vlc_object_t ;
typedef TYPE_4__ video_splitter_t ;
struct TYPE_22__ {char* psz_module; int fmt; } ;
typedef TYPE_5__ video_splitter_output_t ;
typedef int video_format_t ;
struct vlc_vidsplit_part {int width; int height; int lock; TYPE_1__* display; int * window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_4__*,char*,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,TYPE_3__*,int *,struct vlc_vidsplit_part*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,int) ;
 TYPE_2__* FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_18 (int *,int *,int *,TYPE_3__*,char const*,int *) ;
 int FUNC_19 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_20 (TYPE_3__ const*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(vout_display_t *VAR_6,
                             const vout_display_cfg_t *VAR_7,
                             video_format_t *VAR_8, vlc_video_context *VAR_9)
{
    vlc_object_t *VAR_10 = FUNC_0(VAR_6);

    if (FUNC_20(VAR_7))
        return VAR_0;

    char *VAR_11 = FUNC_4(VAR_10, "video-splitter");
    if (VAR_11 == ((void*)0))
        return VAR_0;

    vout_display_sys_t *VAR_12 = FUNC_11(VAR_10, sizeof (*VAR_12));
    if (FUNC_3(VAR_12 == ((void*)0))) {
        FUNC_1(VAR_11);
        return VAR_1;
    }
    VAR_6->sys = VAR_12;

    video_splitter_t *VAR_13 = &VAR_12->splitter;

    FUNC_9(&VAR_12->lock);
    FUNC_6(&VAR_13->fmt, &VAR_6->source);

    VAR_13->p_module = FUNC_2(VAR_13, "video splitter", VAR_11, 1);
    FUNC_1(VAR_11);
    if (VAR_13->p_module == ((void*)0)) {
        FUNC_5(&VAR_13->fmt);
        FUNC_8(&VAR_12->lock);
        FUNC_12(VAR_13);
        return VAR_0;
    }

    VAR_12->pictures = FUNC_10(VAR_10, VAR_13->i_output
                                        * sizeof (*VAR_12->pictures));
    VAR_12->parts = FUNC_10(VAR_10,
                                VAR_13->i_output * sizeof (*VAR_12->parts));
    if (FUNC_3(VAR_12->pictures == ((void*)0) || VAR_12->parts == ((void*)0))) {
        VAR_13->i_output = 0;
        FUNC_17(VAR_6);
        return VAR_1;
    }

    for (int VAR_14 = 0; VAR_14 < VAR_13->i_output; VAR_14++) {
        const video_splitter_output_t *VAR_15 = &VAR_13->p_output[VAR_14];
        vout_display_cfg_t VAR_16 = {
            .display = { 0, 0, { 1, 1 } },
            .align = { 0, 0 } ,
            .is_display_filled = 1,
            .zoom = { 1, 1 },
        };
        const char *VAR_17 = VAR_15->psz_module;
        struct vlc_vidsplit_part *VAR_18 = &VAR_12->parts[VAR_14];

        FUNC_14(&VAR_18->lock, 1);
        VAR_18->display = ((void*)0);
        VAR_18->width = 1;
        VAR_18->height = 1;

        VAR_18->window = FUNC_7(VAR_10, &VAR_16, &VAR_15->fmt,
                                                   VAR_18);
        if (VAR_18->window == ((void*)0)) {
            VAR_13->i_output = VAR_14;
            FUNC_17(VAR_6);
            return VAR_0;
        }

        VAR_16.window = VAR_18->window;
        vout_display_t *VAR_19 = FUNC_18(VAR_10, &VAR_15->fmt, VAR_9, &VAR_16,
                                                   VAR_17, ((void*)0));
        if (VAR_19 == ((void*)0)) {
            FUNC_22(VAR_18->window);
            FUNC_21(VAR_18->window);
            FUNC_13(&VAR_18->lock);
            VAR_13->i_output = VAR_14;
            FUNC_17(VAR_6);
            return VAR_0;
        }

        FUNC_16(&VAR_18->lock);
        VAR_18->display = VAR_19;
        FUNC_19(VAR_19, VAR_18->width, VAR_18->height);
        FUNC_15(&VAR_18->lock);
    }

    VAR_6->prepare = VAR_5;
    VAR_6->display = VAR_4;
    VAR_6->control = VAR_3;
    VAR_6->close = FUNC_17;
    (void) VAR_8;
    return VAR_2;
}
