
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int p_dvbpsi; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ ts_sections_processor_t ;


 int FUNC_0 (int ,int *) ;

void FUNC_1( ts_sections_processor_t *VAR_0,
                                 const uint8_t *VAR_1 )
{
    for( ts_sections_processor_t *VAR_2 = VAR_0;
         VAR_2; VAR_2 = VAR_2->p_next )
    {
        FUNC_0( VAR_0->p_dvbpsi, (uint8_t *) VAR_1 );
    }
}
