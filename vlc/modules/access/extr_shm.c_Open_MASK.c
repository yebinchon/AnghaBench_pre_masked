
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_17__ {int i_bits_per_pixel; int i_sar_num; int i_sar_den; int i_frame_rate; int i_frame_rate_base; int i_visible_width; int i_width; int i_visible_height; int i_height; int i_chroma; } ;
struct TYPE_18__ {TYPE_2__ video; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_19__ {int pf_control; int * pf_demux; TYPE_5__* p_sys; int * out; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_16__ {int length; void* addr; } ;
struct TYPE_20__ {int fd; int (* detach ) (TYPE_5__*) ;int timer; int es; TYPE_1__ mem; } ;
typedef TYPE_5__ demux_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_1 ;
 void FUNC_2 (void*) ;
 void FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (float) ;
 int FUNC_8 (TYPE_4__*,char*,...) ;
 void* FUNC_9 (int,int *,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (int ) ;
 float FUNC_12 (int *,char*) ;
 int FUNC_13 (TYPE_4__*,char*) ;
 char* FUNC_14 (TYPE_4__*,char*) ;
 TYPE_5__* FUNC_15 (int *,int) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int *,void (*) (void*),TYPE_4__*) ;
 int FUNC_19 (int ,int ) ;

__attribute__((used)) static int FUNC_20 (vlc_object_t *VAR_16)
{
    demux_t *VAR_17 = (demux_t *)VAR_16;
    if (VAR_17->out == ((void*)0))
        return VAR_12;

    demux_sys_t *VAR_18 = FUNC_15(VAR_16, sizeof (*VAR_18));
    if (FUNC_11(VAR_18 == ((void*)0)))
        return VAR_13;

    uint32_t VAR_19;
    uint16_t VAR_20 = 0, VAR_21 = 0;
    uint8_t VAR_22;
    switch (FUNC_13 (VAR_17, "shm-depth"))
    {
        case 32:
            VAR_19 = VAR_9; VAR_22 = 32;
            break;
        case 24:
            VAR_19 = VAR_8; VAR_22 = 24;
            break;
        case 16:
            VAR_19 = VAR_7; VAR_22 = 16;
            break;
        case 15:
            VAR_19 = VAR_6; VAR_22 = 16;
            break;
        case 8:
            VAR_19 = VAR_10; VAR_22 = 8;
            break;
        case 0:
            VAR_19 = VAR_11; VAR_22 = 0;
            break;
        default:
            return VAR_12;
    }
    if (VAR_22 != 0)
    {
        VAR_20 = FUNC_13 (VAR_17, "shm-width");
        VAR_21 = FUNC_13 (VAR_17, "shm-height");
    }

    static void (*VAR_23) (void *);

    char *VAR_24 = FUNC_14 (VAR_17, "shm-file");
    if (VAR_24 != ((void*)0))
    {
        VAR_18->fd = FUNC_16 (VAR_24, VAR_3);
        if (VAR_18->fd == -1)
            FUNC_8 (VAR_17, "cannot open file %s: %s", VAR_24,
                     FUNC_17(VAR_15));
        FUNC_6 (VAR_24);
        if (VAR_18->fd == -1)
            return VAR_12;

        VAR_18->detach = FUNC_0;
        VAR_23 = FUNC_2;
    }
    else
    {
        goto error;

    }


    float VAR_25 = FUNC_12 (VAR_16, "shm-fps");
    if (VAR_25 <= 0.f)
        goto error;

    vlc_tick_t VAR_26 = FUNC_7((float)VAR_0 / VAR_25);
    if (!VAR_26)
        goto error;

    es_format_t VAR_27;
    FUNC_4 (&VAR_27, VAR_5, VAR_19);
    VAR_27.video.i_chroma = VAR_19;
    VAR_27.video.i_bits_per_pixel = VAR_22;
    VAR_27.video.i_sar_num = VAR_27.video.i_sar_den = 1;
    VAR_27.video.i_frame_rate = 1000 * VAR_25;
    VAR_27.video.i_frame_rate_base = 1000;
    VAR_27.video.i_visible_width = VAR_27.video.i_width = VAR_20;
    VAR_27.video.i_visible_height = VAR_27.video.i_height = VAR_21;

    VAR_18->es = FUNC_5 (VAR_17->out, &VAR_27);


    if (FUNC_18 (&VAR_18->timer, VAR_23, VAR_17))
        goto error;
    FUNC_19 (VAR_18->timer, VAR_26);

    VAR_17->p_sys = VAR_18;
    VAR_17->pf_demux = ((void*)0);
    VAR_17->pf_control = VAR_1;
    return VAR_14;

error:
    VAR_18->detach (VAR_18);
    return VAR_12;
}
