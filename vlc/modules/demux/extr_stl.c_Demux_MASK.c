
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ start; long long blocknumber; scalar_t__ stop; } ;
typedef TYPE_1__ stl_entry_t ;
struct TYPE_11__ {int out; int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_12__ {scalar_t__ next_date; size_t current; size_t count; int b_first_time; int b_slave; int es; TYPE_1__* index; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_13__ {int i_buffer; scalar_t__ i_length; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_4__* FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,scalar_t__ const) ;
 scalar_t__ const FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(demux_t *VAR_4)
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    vlc_tick_t VAR_6 = VAR_5->next_date
        - FUNC_4(FUNC_5(VAR_4), "spu-delay");
    if(VAR_6 < 0)
        VAR_6 = VAR_5->next_date;

    while(VAR_5->current < VAR_5->count &&
          VAR_5->index[VAR_5->current].start <= VAR_6)
    {
        stl_entry_t *VAR_7 = &VAR_5->index[VAR_5->current];

        if (!VAR_5->b_slave && VAR_5->b_first_time)
        {
            FUNC_3(VAR_4->out, VAR_3 + VAR_6);
            VAR_5->b_first_time = 0;
        }


        const uint64_t VAR_8 = 1024 + 128LL * VAR_7->blocknumber;
        if(VAR_8 != FUNC_8(VAR_4->s) &&
           FUNC_7( VAR_4->s, VAR_8 ) != VAR_2 )
            return VAR_0;

        block_t *VAR_9 = FUNC_6(VAR_4->s, 128);
        if (VAR_9 && VAR_9->i_buffer == 128)
        {
            VAR_9->i_dts =
            VAR_9->i_pts = VAR_3 + VAR_7->start;
            if (VAR_7->stop > VAR_7->start)
                VAR_9->i_length = VAR_7->stop - VAR_7->start;
            FUNC_2(VAR_4->out, VAR_5->es, VAR_9);
        }
        else
        {
            if(VAR_9)
                FUNC_1(VAR_9);
            return VAR_0;
        }
        VAR_5->current++;
    }

    if (!VAR_5->b_slave)
    {
        FUNC_3(VAR_4->out, VAR_3 + VAR_6);
        VAR_5->next_date += FUNC_0(125);
    }

    return VAR_5->current < VAR_5->count ? VAR_1 : VAR_0;
}
