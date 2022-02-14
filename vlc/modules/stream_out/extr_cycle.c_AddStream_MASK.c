
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_next; int p_sout; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_7__ {int * stream; TYPE_3__* first; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_8__ {int fmt; int id; struct TYPE_8__* next; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int * FUNC_1 (int ,char*,int ,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(sout_stream_t *VAR_0, char *VAR_1)
{
    sout_stream_sys_t *VAR_2 = VAR_0->p_sys;

    FUNC_0(VAR_0, "starting new phase \"%s\"", VAR_1);

    VAR_2->stream = FUNC_1(VAR_0->p_sout, VAR_1,
                                      VAR_0->p_next, ((void*)0));
    if (VAR_2->stream == ((void*)0))
        return -1;

    for (sout_stream_id_sys_t *VAR_3 = VAR_2->first; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
        VAR_3->id = FUNC_2(VAR_2->stream, &VAR_3->fmt);

    return 0;
}
