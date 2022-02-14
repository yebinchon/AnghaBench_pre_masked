
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_15__ {scalar_t__ (* clock ) (TYPE_5__*) ;scalar_t__ period; int * stream; TYPE_1__* start; TYPE_1__* next; } ;
typedef TYPE_3__ sout_stream_sys_t ;
struct TYPE_16__ {int id; } ;
typedef TYPE_4__ sout_stream_id_sys_t ;
struct TYPE_17__ {struct TYPE_17__* p_next; } ;
typedef TYPE_5__ block_t ;
struct TYPE_13__ {scalar_t__ offset; struct TYPE_13__* next; int chain; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,int ,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(sout_stream_t *VAR_1, void *VAR_2, block_t *VAR_3)
{
    sout_stream_sys_t *VAR_4 = VAR_1->p_sys;
    sout_stream_id_sys_t *VAR_5 = (sout_stream_id_sys_t *)VAR_2;

    for (block_t *VAR_6 = VAR_3->p_next; VAR_3 != ((void*)0); VAR_3 = VAR_6)
    {
        VAR_3->p_next = ((void*)0);


        while (VAR_4->clock(VAR_3) >= VAR_4->next->offset)
        {
            FUNC_1(VAR_1);
            FUNC_0(VAR_1, VAR_4->next->chain);

            VAR_4->next->offset += VAR_4->period;
            VAR_4->next = VAR_4->next->next;
            if (VAR_4->next == ((void*)0))
                VAR_4->next = VAR_4->start;
        }

        if (VAR_4->stream != ((void*)0))
            FUNC_3(VAR_4->stream, VAR_5->id, VAR_3);
        else
            FUNC_2(VAR_3);
    }
    return VAR_0;
}
