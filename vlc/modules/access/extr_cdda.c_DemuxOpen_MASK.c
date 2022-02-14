
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_15__ {int i_last_track; TYPE_1__* p_sectors; } ;
typedef TYPE_3__ vcddev_toc_t ;
typedef int vcddev_t ;
struct TYPE_14__ {int i_rate; int i_channels; } ;
struct TYPE_16__ {TYPE_2__ audio; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_17__ {int pf_control; int pf_demux; int * out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_18__ {void* start; unsigned int length; scalar_t__ position; int pts; int es; int * vcddev; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_13__ {int i_lba; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *,int *) ;
 TYPE_3__* FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,char*,unsigned int,int) ;
 scalar_t__ FUNC_8 (int ) ;
 void* FUNC_9 (int *,char*) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_6__* FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(vlc_object_t *VAR_8, vcddev_t *VAR_9, unsigned VAR_10)
{
    demux_t *VAR_11 = (demux_t *)VAR_8;

    if (VAR_11->out == ((void*)0))
        goto error;

    demux_sys_t *VAR_12 = FUNC_11(VAR_8, sizeof (*VAR_12));
    if (FUNC_8(VAR_12 == ((void*)0)))
        goto error;

    VAR_11->p_sys = VAR_12;
    VAR_12->vcddev = VAR_9;
    VAR_12->start = FUNC_9(VAR_8, "cdda-first-sector");
    VAR_12->length = FUNC_9(VAR_8, "cdda-last-sector") - VAR_12->start;


    if (VAR_12->start == (unsigned)-1 || VAR_12->length == (unsigned)-1)
    {
        vcddev_toc_t *VAR_13 = FUNC_6(VAR_8, VAR_9, 1);
        if(VAR_13 == ((void*)0))
            goto error;

        int VAR_14, VAR_15, VAR_16;
        VAR_14 = FUNC_0(VAR_13, &VAR_15, &VAR_16);

        if (VAR_10 == 0 || VAR_10 > (unsigned) VAR_14)
        {
            FUNC_7(VAR_8, "invalid track number: %u/%i", VAR_10, VAR_14);
            FUNC_10(VAR_13);
            goto error;
        }

        VAR_10--;
        int VAR_17 = VAR_13->p_sectors[VAR_10].i_lba;
        int VAR_18 = VAR_13->p_sectors[VAR_10 + 1].i_lba;
        if(VAR_15 + VAR_10 == (unsigned) VAR_16 && VAR_13->i_last_track > VAR_16)
            VAR_18 -= VAR_1;

        VAR_12->start = VAR_17;
        VAR_12->length = VAR_18 - VAR_17;
        FUNC_10(VAR_13);
    }

    es_format_t VAR_19;

    FUNC_3(&VAR_19, VAR_0, VAR_4);
    VAR_19.audio.i_rate = 44100;
    VAR_19.audio.i_channels = 2;
    VAR_12->es = FUNC_4(VAR_11->out, &VAR_19);

    FUNC_1(&VAR_12->pts, 44100, 1);
    FUNC_2(&VAR_12->pts, VAR_7);

    VAR_12->position = 0;
    VAR_11->pf_demux = VAR_2;
    VAR_11->pf_control = VAR_3;
    return VAR_6;

error:
    FUNC_5(VAR_8, VAR_9);
    return VAR_5;
}
