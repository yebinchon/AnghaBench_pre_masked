
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int p_access; TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_15__ {size_t i_pos; unsigned int i_nb_streams; TYPE_4__** pp_streams; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_13__ {int * p_last; TYPE_5__* p_first; } ;
struct TYPE_16__ {TYPE_1__ towrite; int i_written_duration; } ;
typedef TYPE_4__ mp4_stream_t ;
struct TYPE_17__ {struct TYPE_17__* p_next; TYPE_7__* p_block; TYPE_7__* b; } ;
typedef TYPE_5__ mp4_fragentry_t ;
typedef TYPE_5__ bo_t ;
struct TYPE_18__ {int i_flags; scalar_t__ i_length; scalar_t__ i_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,size_t) ;
 TYPE_5__* FUNC_3 (char*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,TYPE_7__*) ;

__attribute__((used)) static void FUNC_6(sout_mux_t *VAR_1, size_t VAR_2)
{
    sout_mux_sys_t *VAR_3 = VAR_1->p_sys;


    bo_t *VAR_4 = FUNC_3("mdat");
    if(!VAR_4)
        return;

    FUNC_0(FUNC_1(VAR_4)==8);
    FUNC_2(VAR_4, FUNC_1(VAR_4) + VAR_2);
    VAR_3->i_pos += FUNC_1(VAR_4);

    FUNC_5(VAR_1->p_access, VAR_4->b);
    FUNC_4(VAR_4);

    for (unsigned int VAR_5 = 0; VAR_5 < VAR_3->i_nb_streams; VAR_5++)
    {
        mp4_stream_t *VAR_6 = VAR_3->pp_streams[VAR_5];

        while(VAR_6->towrite.p_first)
        {
            mp4_fragentry_t *VAR_7 = VAR_6->towrite.p_first;
            VAR_3->i_pos += VAR_7->p_block->i_buffer;
            VAR_6->i_written_duration += VAR_7->p_block->i_length;

            VAR_7->p_block->i_flags &= ~VAR_0;
            FUNC_5(VAR_1->p_access, VAR_7->p_block);

            VAR_6->towrite.p_first = VAR_7->p_next;
            FUNC_4(VAR_7);
            if (!VAR_6->towrite.p_first)
                VAR_6->towrite.p_last = ((void*)0);
        }
    }
}
