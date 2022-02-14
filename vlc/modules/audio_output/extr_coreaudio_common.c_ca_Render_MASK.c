
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct aout_sys_common {int b_do_flush; scalar_t__ i_first_render_host_time; scalar_t__ i_out_size; size_t i_underrun_size; TYPE_1__* p_out_chain; TYPE_1__** pp_out_last; int i_render_frames; scalar_t__ i_render_host_time; scalar_t__ b_paused; int flush_sem; } ;
struct TYPE_6__ {size_t i_buffer; size_t p_buffer; struct TYPE_6__* p_next; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {scalar_t__ sys; } ;
typedef TYPE_2__ audio_output_t ;


 int FUNC_0 (struct aout_sys_common*,size_t) ;
 scalar_t__ FUNC_1 (struct aout_sys_common*,int ) ;
 size_t FUNC_2 (struct aout_sys_common*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (size_t const) ;
 int FUNC_5 (struct aout_sys_common*,int const) ;
 size_t FUNC_6 (size_t,size_t) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct aout_sys_common*) ;
 int FUNC_11 (struct aout_sys_common*) ;
 int FUNC_12 (int *,size_t,size_t) ;
 int FUNC_13 (int *,int ,scalar_t__ const) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

void
FUNC_16(audio_output_t *VAR_0, uint32_t VAR_1, uint64_t VAR_2,
          uint8_t *VAR_3, size_t VAR_4)
{
    struct aout_sys_common *VAR_5 = (struct aout_sys_common *) VAR_0->sys;

    FUNC_10(VAR_5);

    if (VAR_5->b_do_flush)
    {
        FUNC_9(VAR_0);

        VAR_5->b_do_flush = 0;
        FUNC_15(&VAR_5->flush_sem);
    }

    if (VAR_5->b_paused || FUNC_14(VAR_5->i_first_render_host_time == 0))
        goto drop;



    if (FUNC_14(VAR_5->i_first_render_host_time > VAR_2 ))
    {



        const size_t VAR_6 =
            FUNC_2(VAR_5, FUNC_0(VAR_5, VAR_4));
        const uint64_t VAR_7 = FUNC_4(VAR_6);
        if (VAR_5->i_first_render_host_time >= VAR_2 + VAR_7)
        {

            goto drop;
        }


        const vlc_tick_t VAR_8 =
            FUNC_3(VAR_5->i_first_render_host_time - VAR_2);

        const uint64_t VAR_9 =
            FUNC_1(VAR_5, FUNC_5(VAR_5, VAR_8));
        FUNC_7(VAR_9 <= VAR_4);
        FUNC_13(VAR_3, 0, VAR_9);

        VAR_4 -= VAR_9;


    }

    VAR_5->i_render_host_time = VAR_2;
    VAR_5->i_render_frames = VAR_1;

    size_t VAR_10 = 0;
    block_t *VAR_11 = VAR_5->p_out_chain;
    while (VAR_11 != ((void*)0) && VAR_4 != 0)
    {
        size_t VAR_12 = FUNC_6(VAR_4, VAR_11->i_buffer);
        FUNC_12(&VAR_3[VAR_10], VAR_11->p_buffer, VAR_12);
        VAR_4 -= VAR_12;
        VAR_10 += VAR_12;
        if (VAR_12 == VAR_11->i_buffer)
        {
            block_t *VAR_13 = VAR_11;
            VAR_11 = VAR_11->p_next;
            FUNC_8(VAR_13);
        }
        else
        {
            FUNC_7(VAR_4 == 0);

            VAR_11->p_buffer += VAR_12;
            VAR_11->i_buffer -= VAR_12;
        }
    }
    VAR_5->p_out_chain = VAR_11;
    if (!VAR_5->p_out_chain)
        VAR_5->pp_out_last = &VAR_5->p_out_chain;
    VAR_5->i_out_size -= VAR_10;


    if (VAR_4 > 0)
    {
        FUNC_7(VAR_5->i_out_size == 0);
        VAR_5->i_underrun_size += VAR_4;
        FUNC_13(&VAR_3[VAR_10], 0, VAR_4);
    }

    FUNC_11(VAR_5);
    return;

drop:
    FUNC_13(VAR_3, 0, VAR_4);
    FUNC_11(VAR_5);
}
