
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; int p_dvbpsi; } ;
typedef TYPE_1__ ts_sections_processor_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3( ts_sections_processor_t *VAR_0 )
{
    while( VAR_0 )
    {
        FUNC_2( VAR_0->p_dvbpsi );
        FUNC_0( VAR_0->p_dvbpsi );
        ts_sections_processor_t *VAR_1 = VAR_0->p_next;
        FUNC_1( VAR_0 );
        VAR_0 = VAR_1;
    }
}
