
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_20__ {TYPE_3__** pp_inputs; scalar_t__ p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_21__ {scalar_t__ i_start_dts; scalar_t__ i_written_duration; unsigned int i_nb_streams; scalar_t__ i_read_duration; TYPE_4__** pp_streams; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_22__ {scalar_t__ p_sys; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_19__ {scalar_t__ p_first; } ;
struct TYPE_23__ {scalar_t__ i_first_dts; int b_hasiframes; scalar_t__ i_written_duration; TYPE_14__ read; int tinfo; TYPE_8__* p_held_entry; int i_current_run; scalar_t__ i_last_iframe_time; } ;
typedef TYPE_4__ mp4_stream_t ;
typedef int mp4_fragentry_t ;
struct TYPE_24__ {scalar_t__ i_dts; int i_length; int i_flags; scalar_t__ i_pts; } ;
typedef TYPE_5__ block_t ;
struct TYPE_26__ {int * p_next; int i_run; TYPE_5__* p_block; } ;
struct TYPE_25__ {scalar_t__ i_cat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_14__,TYPE_8__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_4__*,TYPE_5__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 TYPE_8__* FUNC_5 (int) ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_7__* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,int,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(sout_mux_t *VAR_8)
{
    sout_mux_sys_t *VAR_9 = (sout_mux_sys_t*) VAR_8->p_sys;

    int VAR_10 = FUNC_11(VAR_8, 1, ((void*)0));
    if (VAR_10 < 0)
        return VAR_6;

    sout_input_t *VAR_11 = VAR_8->pp_inputs[VAR_10];
    mp4_stream_t *VAR_12 = (mp4_stream_t*) VAR_11->p_sys;
    block_t *VAR_13 = FUNC_0(VAR_11, VAR_12);
    if( !VAR_13 )
        return VAR_6;


    if( VAR_12->i_first_dts == VAR_7 )
    {
        VAR_12->i_first_dts = VAR_13->i_dts;
        if( VAR_9->i_start_dts == VAR_7 )
            VAR_9->i_start_dts = VAR_13->i_dts;
    }


    if (VAR_12->p_held_entry)
    {
        block_t *VAR_14 = VAR_12->p_held_entry->p_block;


        if (VAR_14->i_length < 1)
        {


            if ((VAR_13->i_flags & VAR_1) == 0)
                VAR_14->i_length = VAR_13->i_dts - VAR_14->i_dts;

            if (VAR_14->i_length < 1)
                FUNC_2(VAR_8, VAR_12, VAR_14);
        }


        FUNC_1(VAR_12->read, VAR_12->p_held_entry);
        VAR_12->p_held_entry = ((void*)0);

        if (VAR_12->b_hasiframes && (VAR_14->i_flags & VAR_2) &&
            FUNC_7(VAR_12->tinfo) - VAR_9->i_written_duration < VAR_3)
        {


            VAR_12->i_last_iframe_time = FUNC_7(VAR_12->tinfo);
        }


        FUNC_6(VAR_12->tinfo,
                                 FUNC_7(VAR_12->tinfo) +
                                 FUNC_4(0, VAR_14->i_length));
    }



    VAR_12->p_held_entry = FUNC_5(sizeof(mp4_fragentry_t));
    if (FUNC_12(!VAR_12->p_held_entry))
        return VAR_5;

    VAR_12->p_held_entry->p_block = VAR_13;
    VAR_12->p_held_entry->i_run = VAR_12->i_current_run;
    VAR_12->p_held_entry->p_next = ((void*)0);

    if (FUNC_8(VAR_12->tinfo)->i_cat == VAR_4 )
    {
        if (!VAR_12->b_hasiframes && (VAR_13->i_flags & VAR_2))
            VAR_12->b_hasiframes = 1;

        if (!FUNC_9(VAR_12->tinfo) &&
            VAR_13->i_dts != VAR_7 &&
            VAR_13->i_pts > VAR_13->i_dts)
                FUNC_10(VAR_12->tinfo);
    }


    vlc_tick_t VAR_15 = FUNC_7(VAR_12->tinfo);
    vlc_tick_t VAR_16 = VAR_12->i_written_duration;
    for (unsigned int VAR_17=0; VAR_17<VAR_9->i_nb_streams; VAR_17++)
    {
        const mp4_stream_t *VAR_18 = VAR_9->pp_streams[VAR_17];
        if (FUNC_8(VAR_12->tinfo)->i_cat != VAR_4 &&
            FUNC_8(VAR_12->tinfo)->i_cat != VAR_0)
            continue;
        if (FUNC_7(VAR_18->tinfo) < VAR_15)
            VAR_15 = FUNC_7(VAR_18->tinfo);

        if (VAR_18->i_written_duration < VAR_16)
            VAR_16 = VAR_18->i_written_duration;
    }
    VAR_9->i_read_duration = VAR_15;
    VAR_9->i_written_duration = VAR_16;


    if (VAR_12->read.p_first && VAR_9->i_read_duration - VAR_9->i_written_duration >= VAR_3)
        FUNC_3(VAR_8, 0);

    return VAR_6;
}
