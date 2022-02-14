
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {int * stream; TYPE_3__* first; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_7__ {int * id; struct TYPE_7__* next; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(sout_stream_t *VAR_0)
{
    sout_stream_sys_t *VAR_1 = VAR_0->p_sys;

    if (VAR_1->stream == ((void*)0))
        return;

    for (sout_stream_id_sys_t *VAR_2 = VAR_1->first; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
        if (VAR_2->id != ((void*)0))
            FUNC_1(VAR_1->stream, VAR_2->id);

    FUNC_0(VAR_1->stream, ((void*)0));
    VAR_1->stream = ((void*)0);
}
