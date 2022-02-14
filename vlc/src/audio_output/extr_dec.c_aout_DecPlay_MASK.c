
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_23__ {scalar_t__ i_pts; int i_flags; int i_nb_samples; int i_length; } ;
typedef TYPE_4__ block_t ;
struct TYPE_24__ {int (* play ) (TYPE_5__*,TYPE_4__*,scalar_t__) ;} ;
typedef TYPE_5__ audio_output_t ;
struct TYPE_22__ {int discontinuity; scalar_t__ request_delay; scalar_t__ delay; int rate; int clock; } ;
struct TYPE_21__ {int lock; int update; int value; } ;
struct TYPE_20__ {int i_rate; } ;
struct TYPE_25__ {scalar_t__ original_pts; int buffers_lost; TYPE_3__ sync; int buffers_played; int filters; int volume; TYPE_2__ vp; TYPE_1__ input_format; } ;
typedef TYPE_6__ aout_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,scalar_t__,scalar_t__ const) ;
 int FUNC_3 (int ,int *) ;
 TYPE_4__* FUNC_4 (int ,TYPE_4__*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 TYPE_6__* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int VAR_4 ;
 int FUNC_13 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,scalar_t__ const,int ) ;
 scalar_t__ FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 scalar_t__ FUNC_20 () ;

int FUNC_21(audio_output_t *VAR_5, block_t *VAR_6)
{
    aout_owner_t *VAR_7 = FUNC_6 (VAR_5);

    FUNC_8 (VAR_6->i_pts != VAR_3);

    VAR_6->i_length = FUNC_19( VAR_6->i_nb_samples,
                                   VAR_7->input_format.i_rate );

    int VAR_8 = FUNC_0 (VAR_5);
    if (FUNC_14(VAR_8 == VAR_0))
        goto drop;

    if (VAR_6->i_flags & VAR_1)
    {
        VAR_7->sync.discontinuity = 1;
        VAR_7->original_pts = VAR_3;
    }

    if (FUNC_10(&VAR_7->vp.update, VAR_4))
    {
        FUNC_17 (&VAR_7->vp.lock);
        FUNC_3 (VAR_7->filters, &VAR_7->vp.value);
        FUNC_11(&VAR_7->vp.update, 0, VAR_4);
        FUNC_18 (&VAR_7->vp.lock);
    }

    if (VAR_7->original_pts == VAR_3)
    {




        VAR_7->original_pts = VAR_6->i_pts;
    }

    VAR_6 = FUNC_4(VAR_7->filters, VAR_6, VAR_7->sync.rate);
    if (VAR_6 == ((void*)0))
        return VAR_8;

    const vlc_tick_t VAR_9 = VAR_7->original_pts;
    VAR_7->original_pts = VAR_3;


    FUNC_7 (VAR_7->volume, VAR_6);


    if (VAR_7->sync.request_delay != VAR_7->sync.delay)
    {
        VAR_7->sync.delay = VAR_7->sync.request_delay;
        vlc_tick_t VAR_10 = FUNC_16(VAR_7->sync.clock, VAR_7->sync.delay);
        FUNC_5(VAR_7->filters, VAR_7->sync.delay);
        if (VAR_10 > 0)
            FUNC_1 (VAR_5, VAR_10, VAR_6->i_pts);
    }


    vlc_tick_t VAR_11 = FUNC_20();
    FUNC_2(VAR_5, VAR_11, VAR_9);

    vlc_tick_t VAR_12 =
        FUNC_15(VAR_7->sync.clock, VAR_11, VAR_9,
                                  VAR_7->sync.rate);
    if (FUNC_14(VAR_12 == VAR_2))
    {


        VAR_12 = VAR_11;

    }

    VAR_7->sync.discontinuity = 0;
    VAR_5->play(VAR_5, VAR_6, VAR_12);

    FUNC_9(&VAR_7->buffers_played, 1, VAR_4);
    return VAR_8;
drop:
    VAR_7->sync.discontinuity = 1;
    VAR_7->original_pts = VAR_3;
    FUNC_12 (VAR_6);
    FUNC_9(&VAR_7->buffers_lost, 1, VAR_4);
    return VAR_8;
}
