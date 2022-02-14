
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {TYPE_3__* p; } ;
typedef TYPE_2__ vout_thread_t ;
struct TYPE_22__ {int * display_pool; int * private_pool; int original; } ;
typedef TYPE_3__ vout_thread_sys_t ;
struct TYPE_20__ {scalar_t__ projection_mode; } ;
struct TYPE_23__ {TYPE_1__ fmt; int source; } ;
typedef TYPE_4__ vout_display_t ;
struct TYPE_24__ {TYPE_2__* sys; int viewpoint_moved; } ;
typedef TYPE_5__ vout_display_owner_t ;
typedef int vout_display_cfg_t ;
typedef int vlc_video_context ;
typedef int picture_pool_t ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned int const) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,unsigned int const,unsigned int const) ;
 unsigned int const FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,unsigned int const) ;
 int FUNC_9 (TYPE_2__*,char*,int ,TYPE_4__*) ;
 int FUNC_10 (TYPE_2__*,char*,int) ;
 char* FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (int ,char*,int) ;
 int * FUNC_13 (TYPE_4__*,unsigned int const) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 TYPE_4__* FUNC_16 (int ,int *,int *,int const*,char const*,TYPE_5__*) ;

vout_display_t *FUNC_17(vout_thread_t *VAR_7,
                     const char *VAR_8, const vout_display_cfg_t *VAR_9,
                     vlc_video_context *VAR_10)
{
    vout_thread_sys_t *VAR_11 = VAR_7->p;
    vout_display_t *VAR_12;
    vout_display_owner_t VAR_13 = {
        .viewpoint_moved = VAR_6, .sys = VAR_7,
    };
    const char *VAR_14;
    char *VAR_15 = ((void*)0);

    FUNC_3(VAR_7, "Opening vout display wrapper");

    if (VAR_8 == ((void*)0))
        VAR_14 = VAR_15 = FUNC_11(VAR_7, "vout");
    else
        VAR_14 = "splitter,none";

    VAR_12 = FUNC_16(FUNC_0(VAR_7), &VAR_11->original, VAR_10, VAR_9,
                          VAR_14, &VAR_13);
    FUNC_2(VAR_15);

    if (VAR_12 == ((void*)0))
        return ((void*)0);

    VAR_11->display_pool = ((void*)0);

    const unsigned VAR_16 = 4;
    const unsigned VAR_17 = 1;
    const unsigned VAR_18 = VAR_0 +
                                      VAR_16 +
                                      VAR_17;

    picture_pool_t *VAR_19 = FUNC_13(VAR_12, VAR_18);
    if (VAR_19 == ((void*)0))
        goto error;


    if ( FUNC_5(VAR_19) < VAR_18 )
        FUNC_4(VAR_7, "Not enough display buffers in the pool, requested %u got %u",
                 VAR_18, FUNC_5(VAR_19));


    if (!FUNC_14(VAR_12) &&
        FUNC_5(VAR_19) >= VAR_18) {
        VAR_11->private_pool = FUNC_8(VAR_19, VAR_16);
    } else {
        VAR_11->private_pool =
            FUNC_6(&VAR_12->source,
                                       FUNC_1(VAR_5,
                                             VAR_18 - VAR_0));
    }
    if (VAR_11->private_pool == ((void*)0)) {
        FUNC_7(VAR_19);
        goto error;
    }
    VAR_11->display_pool = VAR_19;





    FUNC_12(FUNC_0(VAR_7), "viewpoint-changeable",
                VAR_12->fmt.projection_mode != VAR_2);
    return VAR_12;

error:
    FUNC_15(VAR_12);
    return ((void*)0);
}
