
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dvbpsi_t ;
struct TYPE_4__ {struct TYPE_4__* p_next; } ;
typedef TYPE_1__ dvbpsi_psi_section_t ;
typedef int dvbpsi_atsc_stt_t ;


 int FUNC_0 (void*,int *) ;
 int * FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( dvbpsi_t *VAR_0, const dvbpsi_psi_section_t* VAR_1,
                                  void *VAR_2 )
{
    FUNC_2( VAR_0 );
    for( ; VAR_1 ; VAR_1 = VAR_1->p_next )
    {
        dvbpsi_atsc_stt_t *VAR_3 = FUNC_1( VAR_1 );
        if( VAR_3 )
            FUNC_0( VAR_2, VAR_3 );
    }
}
