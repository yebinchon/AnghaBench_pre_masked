
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next; TYPE_1__* p_dvbpsi; } ;
typedef TYPE_2__ ts_sections_processor_t ;
struct TYPE_4__ {int p_decoder; } ;


 int FUNC_0 (int ,int) ;

void FUNC_1( ts_sections_processor_t *VAR_0 )
{
    while( VAR_0 )
    {
        FUNC_0( VAR_0->p_dvbpsi->p_decoder, 1 );
        VAR_0 = VAR_0->p_next;
    }
}
