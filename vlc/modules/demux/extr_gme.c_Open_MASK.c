
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_23__ {int psz_name; int i_length; } ;
typedef TYPE_2__ input_title_t ;
struct TYPE_24__ {int length; scalar_t__* song; } ;
typedef TYPE_3__ gme_info_t ;
struct TYPE_22__ {int i_rate; int i_bytes_per_frame; int i_frame_length; int i_channels; int i_blockalign; int i_bitspersample; } ;
struct TYPE_25__ {int i_bitrate; TYPE_1__ audio; } ;
typedef TYPE_4__ es_format_t ;
struct TYPE_26__ {TYPE_6__* p_sys; int pf_control; int pf_demux; int out; TYPE_7__* s; } ;
typedef TYPE_5__ demux_t ;
struct TYPE_27__ {unsigned int titlec; int title_changed; int * emu; TYPE_2__** titlev; int pts; int es; scalar_t__ track_id; } ;
typedef TYPE_6__ demux_sys_t ;
struct TYPE_28__ {scalar_t__ i_buffer; } ;
typedef TYPE_7__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (int const*) ;
 int FUNC_10 (int *,int ,scalar_t__,TYPE_7__*) ;
 int * FUNC_11 (int ,int) ;
 int FUNC_12 (int *,scalar_t__) ;
 unsigned int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,TYPE_3__**,unsigned int) ;
 TYPE_6__* FUNC_15 (int) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (scalar_t__*) ;
 scalar_t__ FUNC_18 (int ) ;
 TYPE_2__** FUNC_19 (unsigned int,int) ;
 TYPE_2__* FUNC_20 () ;
 TYPE_7__* FUNC_21 (TYPE_7__*,int) ;
 scalar_t__ FUNC_22 (TYPE_7__*,scalar_t__*) ;
 int FUNC_23 (TYPE_7__*,int const**,int) ;

__attribute__((used)) static int FUNC_24 (vlc_object_t *VAR_12)
{
    demux_t *VAR_13 = (demux_t *)VAR_12;
    uint64_t VAR_14;

    if (FUNC_22(VAR_13->s, &VAR_14))
        return VAR_8;
    if (VAR_14 > VAR_3 )
        return VAR_8;


    const uint8_t *VAR_15;
    if (FUNC_23 (VAR_13->s, &VAR_15, 4) < 4)
        return VAR_8;

    const char *VAR_16 = FUNC_9 (VAR_15);
    if (!*VAR_16)
        return VAR_8;
    FUNC_16 (VAR_12, "detected file type %s", VAR_16);

    block_t *VAR_17 = ((void*)0);
    if (VAR_14 <= 0)
    {
        VAR_17 = FUNC_21 (VAR_13->s, 1 << 24);
        if (VAR_17 == ((void*)0))
            return VAR_8;
    }


    demux_sys_t *VAR_18 = FUNC_15 (sizeof (*VAR_18));
    if (FUNC_18(VAR_18 == ((void*)0)))
        return VAR_9;

    VAR_18->emu = FUNC_11 (FUNC_8 (VAR_16), VAR_4);
    if (VAR_18->emu == ((void*)0))
    {
        FUNC_6 (VAR_18);
        return VAR_9;
    }
    if (VAR_17)
    {
        FUNC_10 (VAR_18->emu, VAR_5, VAR_17->i_buffer, VAR_17);
        FUNC_1(VAR_17);
    }
    else
    {
        FUNC_10 (VAR_18->emu, VAR_6, VAR_14, VAR_13->s);
    }
    FUNC_12 (VAR_18->emu, VAR_18->track_id = 0);

    es_format_t VAR_19;
    FUNC_4 (&VAR_19, VAR_0, VAR_7);
    VAR_19.audio.i_rate = VAR_4;
    VAR_19.audio.i_bytes_per_frame = 4;
    VAR_19.audio.i_frame_length = 4;
    VAR_19.audio.i_channels = 2;
    VAR_19.audio.i_blockalign = 4;
    VAR_19.audio.i_bitspersample = 16;
    VAR_19.i_bitrate = VAR_4 * 4;

    VAR_18->es = FUNC_5 (VAR_13->out, &VAR_19);
    FUNC_2 (&VAR_18->pts, VAR_4, 1);
    FUNC_3(&VAR_18->pts, VAR_11);


    unsigned VAR_20 = FUNC_13 (VAR_18->emu);
    VAR_18->titlev = FUNC_19 (VAR_20, sizeof (*VAR_18->titlev));
    if (FUNC_18(VAR_18->titlev == ((void*)0)))
        VAR_20 = 0;
    VAR_18->titlec = VAR_20;
    for (unsigned VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
    {
         input_title_t *VAR_22 = FUNC_20 ();
         VAR_18->titlev[VAR_21] = VAR_22;
         if (FUNC_18(VAR_22 == ((void*)0)))
             continue;

         gme_info_t *VAR_23;
         if (FUNC_14 (VAR_18->emu, &VAR_23, VAR_21))
             continue;
         FUNC_16 (VAR_12, "track %u: %s %d ms", VAR_21, VAR_23->song, VAR_23->length);
         if (VAR_23->length != -1)
             VAR_22->i_length = FUNC_0(VAR_23->length);
         if (VAR_23->song[0])
             VAR_22->psz_name = FUNC_17 (VAR_23->song);
         FUNC_7 (VAR_23);
    }
    VAR_18->title_changed = 0;


    VAR_13->pf_demux = VAR_2;
    VAR_13->pf_control = VAR_1;
    VAR_13->p_sys = VAR_18;
    return VAR_10;
}
