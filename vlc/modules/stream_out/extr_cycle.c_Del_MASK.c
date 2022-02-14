
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_11__ {int * stream; TYPE_2__* last; TYPE_1__* first; } ;
typedef TYPE_4__ sout_stream_sys_t ;
struct TYPE_12__ {int fmt; int id; TYPE_2__* prev; TYPE_1__* next; } ;
typedef TYPE_5__ sout_stream_id_sys_t ;
struct TYPE_9__ {TYPE_1__* next; } ;
struct TYPE_8__ {TYPE_2__* prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(sout_stream_t *VAR_0, void *VAR_1)
{
    sout_stream_sys_t *VAR_2 = VAR_0->p_sys;
    sout_stream_id_sys_t *VAR_3 = (sout_stream_id_sys_t *)VAR_1;

    if (VAR_3->prev != ((void*)0))
        VAR_3->prev->next = VAR_3->next;
    else
        VAR_2->first = VAR_3->next;

    if (VAR_3->next != ((void*)0))
        VAR_3->next->prev = VAR_3->prev;
    else
        VAR_2->last = VAR_3->prev;

    if (VAR_2->stream != ((void*)0))
        FUNC_2(VAR_2->stream, VAR_3->id);

    FUNC_0(&VAR_3->fmt);
    FUNC_1(VAR_3);
}
