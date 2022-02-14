
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next; } ;
typedef TYPE_1__ sout_stream_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(sout_stream_t *VAR_0, sout_stream_t *VAR_1)
{
    while(VAR_0 != ((void*)0))
    {
        sout_stream_t *VAR_2 = VAR_0->p_next;

        FUNC_0(VAR_0);
        if(VAR_0 == VAR_1)
           break;
        VAR_0 = VAR_2;
    }
}
