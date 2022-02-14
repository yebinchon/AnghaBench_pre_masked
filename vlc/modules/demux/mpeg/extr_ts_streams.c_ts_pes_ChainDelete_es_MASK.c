
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_extraes; struct TYPE_5__* p_next; } ;
typedef TYPE_1__ ts_es_t ;
typedef int demux_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_0, ts_es_t *VAR_1 )
{
    while( VAR_1 )
    {
        ts_es_t *VAR_2 = VAR_1->p_next;
        FUNC_2( VAR_0, VAR_1->p_extraes );
        FUNC_1( VAR_0, VAR_1 );
        FUNC_0( VAR_1 );
        VAR_1 = VAR_2;
    }
}
