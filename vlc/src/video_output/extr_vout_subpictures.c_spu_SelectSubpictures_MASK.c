
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_15__ {scalar_t__ i_start; scalar_t__ i_order; scalar_t__ b_ephemer; scalar_t__ b_subtitle; } ;
typedef TYPE_2__ subpicture_t ;
struct TYPE_19__ {size_t size; TYPE_4__* data; } ;
struct spu_channel {int order; TYPE_6__ entries; int id; } ;
struct TYPE_16__ {TYPE_5__* p; } ;
typedef TYPE_3__ spu_t ;
struct TYPE_17__ {scalar_t__ start; scalar_t__ stop; int is_late; int channel_order; TYPE_2__* subpic; } ;
typedef TYPE_4__ spu_render_entry_t ;
struct TYPE_14__ {scalar_t__ size; struct spu_channel* data; } ;
struct TYPE_18__ {scalar_t__ last_sort_date; TYPE_1__ channels; } ;
typedef TYPE_5__ spu_private_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct spu_channel*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_4__* FUNC_6 (size_t,int) ;
 int FUNC_7 (TYPE_6__*,size_t) ;

__attribute__((used)) static spu_render_entry_t *
FUNC_8(spu_t *VAR_3, vlc_tick_t VAR_4,
                      vlc_tick_t VAR_5,
                      bool VAR_6, size_t *VAR_7)
{
    spu_private_t *VAR_8 = VAR_3->p;

    FUNC_1(VAR_8->channels.size >= VAR_2);


    *VAR_7 = 0;
    size_t VAR_9 = 0;
    for (size_t VAR_10 = 0; VAR_10 < VAR_8->channels.size; ++VAR_10)
        VAR_9 += VAR_8->channels.data[VAR_10].entries.size;
    if (VAR_9 == 0)
        return ((void*)0);

    spu_render_entry_t *VAR_11 =
        FUNC_6(VAR_9, sizeof(spu_render_entry_t));
    if (!VAR_11)
        return ((void*)0);


    for (size_t VAR_12 = 0; VAR_12 < VAR_8->channels.size; VAR_12++)
    {
        struct spu_channel *VAR_13 = &VAR_8->channels.data[VAR_12];

        vlc_tick_t VAR_14 = VAR_5;
        vlc_tick_t VAR_15 = 0;
        vlc_tick_t VAR_16 = 0;
        int64_t VAR_17 = VAR_1;
        int64_t VAR_18 = VAR_1;

        if (FUNC_3(VAR_13, VAR_4) == 0)
            continue;


        for (size_t VAR_19 = 0; VAR_19 < VAR_13->entries.size; VAR_19++) {
            spu_render_entry_t *VAR_20 = &VAR_13->entries.data[VAR_19];
            subpicture_t *VAR_21 = VAR_20->subpic;
            bool VAR_22;
            bool VAR_23;

            if (!FUNC_4(VAR_20, VAR_13->id,
                                             VAR_4, VAR_5,
                                             VAR_6))
                continue;

            const vlc_tick_t VAR_24 = VAR_21->b_subtitle ? VAR_5 : VAR_4;

            vlc_tick_t *VAR_25 = VAR_21->b_subtitle ? &VAR_15 : &VAR_16;
            int64_t *VAR_26 = VAR_21->b_subtitle ? &VAR_17 : &VAR_18;
            if (VAR_21->i_start >= *VAR_25) {
                *VAR_25 = VAR_20->start;
                if (VAR_21->i_order > *VAR_26)
                    *VAR_26 = VAR_21->i_order;
            }

            VAR_22 = !VAR_21->b_ephemer || VAR_20->stop > VAR_20->start;

            VAR_23 = VAR_22 && VAR_20->stop <= VAR_24;




            if (VAR_21->b_subtitle && !VAR_23 && !VAR_21->b_ephemer)
                VAR_14 = VAR_20->start;


            VAR_20->is_late = VAR_23;
        }


        if (VAR_14 < VAR_8->last_sort_date)
            VAR_14 = VAR_8->last_sort_date;
        if (VAR_14 <= 0)
            VAR_14 = VAR_0;


        for (size_t VAR_27 = 0; VAR_27 < VAR_13->entries.size; ) {
            spu_render_entry_t *VAR_28 = &VAR_13->entries.data[VAR_27];
            subpicture_t *VAR_29 = VAR_28->subpic;
            bool VAR_30 = VAR_28->is_late;

            if (!FUNC_4(VAR_28, VAR_13->id,
                                             VAR_4, VAR_5,
                                             VAR_6))
            {
                VAR_27++;
                continue;
            }

            const vlc_tick_t VAR_31 = VAR_29->b_subtitle ? FUNC_0(VAR_14, VAR_8->last_sort_date) : VAR_4;
            const vlc_tick_t VAR_32 = VAR_29->b_subtitle ? VAR_15 : VAR_16;
            const int64_t VAR_33 = VAR_29->b_subtitle ? VAR_17 : VAR_18;


            bool VAR_34 = VAR_30 && VAR_28->stop <= VAR_31;
            if (VAR_29->b_ephemer) {
                if (VAR_28->start < VAR_32)
                    VAR_34 = 1;
                else if (VAR_28->start == VAR_32 &&
                         VAR_29->i_order < VAR_33)
                    VAR_34 = 1;
            }

            if (VAR_34)
            {
                FUNC_2(VAR_8, VAR_29);
                FUNC_5(VAR_29);
                FUNC_7(&VAR_13->entries, VAR_27);
            }
            else
            {
                VAR_28->channel_order = VAR_13->order;
                VAR_11[(*VAR_7)++] = *VAR_28;
                VAR_27++;
            }
        }
    }

    VAR_8->last_sort_date = VAR_5;
    return VAR_11;
}
