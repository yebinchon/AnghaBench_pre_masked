
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_22__ {size_t i_event; int * psz_name; TYPE_2__ const** pp_event; int i_source_id; int i_id; TYPE_2__ const* p_current; } ;
typedef TYPE_1__ vlc_epg_t ;
struct TYPE_23__ {scalar_t__ i_start; scalar_t__ i_id; scalar_t__ i_duration; } ;
typedef TYPE_2__ const vlc_epg_event_t ;
struct TYPE_24__ {TYPE_6__* p_sys; int pf_destroy; int pf_update; int pf_validate; } ;
typedef TYPE_3__ subpicture_updater_t ;
struct TYPE_25__ {int b_ephemer; int b_absolute; int b_fade; int b_subtitle; scalar_t__ i_stop; scalar_t__ i_start; int i_channel; } ;
typedef TYPE_4__ subpicture_t ;
typedef int int64_t ;
struct TYPE_26__ {int lock; int i_epg_time; TYPE_1__* p_epg_table; } ;
typedef TYPE_5__ input_item_t ;
struct TYPE_27__ {TYPE_1__* epg; void* art; int time; int obj; } ;
typedef TYPE_6__ epg_spu_updater_sys_t ;


 void* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ const FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_6__*) ;
 void* FUNC_4 (TYPE_5__*,int ) ;
 TYPE_6__* FUNC_5 (int) ;
 int * FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,scalar_t__) ;
 int FUNC_12 (TYPE_2__ const*) ;
 TYPE_2__ const* FUNC_13 (TYPE_2__ const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int *,TYPE_4__*) ;

int FUNC_18(vout_thread_t *VAR_8, input_item_t *VAR_9 )
{
    vlc_epg_t *VAR_10 = ((void*)0);
    int64_t VAR_11;


    FUNC_14(&VAR_9->lock);

    const vlc_epg_t *VAR_12 = VAR_9->p_epg_table;
    if ( VAR_12 )
    {

        const vlc_epg_event_t *VAR_13 = VAR_12->p_current;
        VAR_10 = FUNC_10(VAR_12->i_id, VAR_12->i_source_id);
        if(VAR_10)
        {
            if( VAR_13 )
            {
                vlc_epg_event_t *VAR_14 = FUNC_13(VAR_13);
                if(VAR_14)
                {
                    if(!FUNC_8(VAR_10, VAR_14))
                        FUNC_12(VAR_14);
                    else
                        FUNC_11(VAR_10, VAR_14->i_start);
                }
            }


            vlc_epg_event_t *VAR_15 = ((void*)0);
            for(size_t VAR_16=0; VAR_16<VAR_12->i_event; VAR_16++)
            {
                vlc_epg_event_t *VAR_17 = VAR_12->pp_event[VAR_16];
                if((!VAR_15 || VAR_15->i_start > VAR_17->i_start) &&
                   (!VAR_13 || (VAR_17->i_id != VAR_13->i_id &&
                                         VAR_17->i_start >= VAR_13->i_start +
                                                           VAR_13->i_duration )))
                {
                    VAR_15 = VAR_12->pp_event[VAR_16];
                }
            }
            if( VAR_15 )
            {
                vlc_epg_event_t *VAR_18 = FUNC_13(VAR_15);
                if(!FUNC_8(VAR_10, VAR_18))
                    FUNC_12(VAR_18);
            }

            if(VAR_10->i_event > 0)
            {
                VAR_10->psz_name = FUNC_6(VAR_12->psz_name);
            }
            else
            {
                FUNC_9(VAR_10);
                VAR_10 = ((void*)0);
            }
        }
    }
    VAR_11 = VAR_9->i_epg_time;
    FUNC_15(&VAR_9->lock);


    if (VAR_10 == ((void*)0))
        return VAR_3;

    if(VAR_10->psz_name == ((void*)0))
        VAR_10->psz_name = FUNC_4( VAR_9, VAR_7 );

    epg_spu_updater_sys_t *VAR_19 = FUNC_5(sizeof(*VAR_19));
    if (!VAR_19) {
        FUNC_9(VAR_10);
        return VAR_3;
    }
    VAR_19->epg = VAR_10;
    VAR_19->obj = FUNC_1(VAR_8);
    VAR_19->time = VAR_11;
    VAR_19->art = FUNC_4( VAR_9, VAR_6 );
    if( !VAR_19->art )
        VAR_19->art = FUNC_0();

    subpicture_updater_t VAR_20 = {
        .pf_validate = VAR_2,
        .pf_update = VAR_1,
        .pf_destroy = VAR_0,
        .p_sys = VAR_19
    };

    const vlc_tick_t VAR_21 = FUNC_16();
    subpicture_t *VAR_22 = FUNC_7(&VAR_20);
    if (!VAR_22) {
        FUNC_9(VAR_19->epg);
        FUNC_3(VAR_19);
        return VAR_3;
    }

    VAR_22->i_channel = VAR_5;
    VAR_22->i_start = VAR_21;
    VAR_22->i_stop = VAR_21 + FUNC_2(3);
    VAR_22->b_ephemer = 1;
    VAR_22->b_absolute = 0;
    VAR_22->b_fade = 1;
    VAR_22->b_subtitle = 0;

    FUNC_17(VAR_8, VAR_22);

    return VAR_4;
}
