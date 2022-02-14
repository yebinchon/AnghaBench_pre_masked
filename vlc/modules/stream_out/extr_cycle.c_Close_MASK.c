
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* start; int * stream; int * last; int * first; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef TYPE_2__ sout_cycle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(vlc_object_t *VAR_0)
{
    sout_stream_t *VAR_1 = (sout_stream_t *)VAR_0;
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0(VAR_2->first == ((void*)0) && VAR_2->last == ((void*)0));

    if (VAR_2->stream != ((void*)0))
        FUNC_2(VAR_2->stream, ((void*)0));

    for (sout_cycle_t *VAR_3 = VAR_2->start, *VAR_4; VAR_3 != ((void*)0); VAR_3 = VAR_4)
    {
        VAR_4 = VAR_3->next;
        FUNC_1(VAR_3);
    }

    FUNC_1(VAR_2);
}
