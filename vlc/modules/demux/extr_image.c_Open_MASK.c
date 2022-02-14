
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_19__ {int i_frame_rate; int i_frame_rate_base; int i_chroma; } ;
struct TYPE_20__ {TYPE_1__ video; void* i_group; void* i_id; int i_codec; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_21__ {TYPE_4__* p_sys; int pf_control; int pf_demux; int out; int s; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_22__ {int pts; int pts_next; scalar_t__ is_realtime; int pts_offset; int duration; int es; int * data; } ;
typedef TYPE_4__ demux_sys_t ;
typedef int block_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_3__*,TYPE_2__*,scalar_t__,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (char*) ;
 TYPE_4__* FUNC_10 (int) ;
 int FUNC_11 (TYPE_3__*,char*,int ) ;
 int FUNC_12 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_13 (TYPE_3__*,char*) ;
 int FUNC_14 (TYPE_3__*,char*) ;
 void* FUNC_15 (TYPE_3__*,char*) ;
 char* FUNC_16 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_17 (TYPE_3__*,int*,int*,char*) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (int ) ;
 int FUNC_21 () ;

__attribute__((used)) static int FUNC_22(vlc_object_t *VAR_9)
{
    demux_t *VAR_10 = (demux_t*)VAR_9;


    vlc_fourcc_t VAR_11 = FUNC_1(VAR_10->s);
    if (VAR_11 == 0)
        return VAR_4;

    FUNC_11(VAR_10, "Detected image: %s",
            FUNC_19(VAR_2, VAR_11));

    if (VAR_11 == VAR_3)
        return VAR_4;


    es_format_t VAR_12;
    FUNC_7(&VAR_12, VAR_2, VAR_11);
    VAR_12.video.i_chroma = VAR_12.i_codec;

    block_t *VAR_13 = FUNC_2(VAR_10);
    if (VAR_13 && FUNC_13(VAR_10, "image-decode")) {
        char *VAR_14 = FUNC_16(VAR_10, "image-chroma");
        vlc_fourcc_t VAR_15 = FUNC_18(VAR_2, VAR_14);
        FUNC_9(VAR_14);

        VAR_13 = FUNC_0(VAR_10, &VAR_12, VAR_15, VAR_13);
    }
    VAR_12.i_id = FUNC_15(VAR_10, "image-id");
    VAR_12.i_group = FUNC_15(VAR_10, "image-group");
    if (FUNC_17(VAR_10,
                             &VAR_12.video.i_frame_rate,
                             &VAR_12.video.i_frame_rate_base,
                             "image-fps") ||
        VAR_12.video.i_frame_rate <= 0 || VAR_12.video.i_frame_rate_base <= 0) {
        FUNC_12(VAR_10, "Invalid frame rate, using 10/1 instead");
        VAR_12.video.i_frame_rate = 10;
        VAR_12.video.i_frame_rate_base = 1;
    }



    if (!VAR_13)
        FUNC_12(VAR_10, "Failed to load the image");


    demux_sys_t *VAR_16 = FUNC_10(sizeof(*VAR_16));
    if (!VAR_16) {
        if (VAR_13)
            FUNC_3(VAR_13);
        FUNC_6(&VAR_12);
        return VAR_5;
    }

    VAR_16->data = VAR_13;
    VAR_16->es = FUNC_8(VAR_10->out, &VAR_12);
    VAR_16->duration = FUNC_20( FUNC_14(VAR_10, "image-duration") );
    VAR_16->is_realtime = FUNC_13(VAR_10, "image-realtime");
    VAR_16->pts_offset = VAR_16->is_realtime ? FUNC_21() : 0;
    VAR_16->pts_next = VAR_8;
    FUNC_4(&VAR_16->pts, VAR_12.video.i_frame_rate, VAR_12.video.i_frame_rate_base);
    FUNC_5(&VAR_16->pts, VAR_7);

    FUNC_6(&VAR_12);

    VAR_10->pf_demux = VAR_1;
    VAR_10->pf_control = VAR_0;
    VAR_10->p_sys = VAR_16;
    return VAR_6;
}
