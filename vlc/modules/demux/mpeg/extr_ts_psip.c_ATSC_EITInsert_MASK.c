
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int i_size; TYPE_2__** p_elems; } ;
struct TYPE_8__ {TYPE_6__ eits; } ;
typedef TYPE_1__ ts_psip_context_t ;
struct TYPE_9__ {scalar_t__ i_source_id; } ;
typedef TYPE_2__ dvbpsi_atsc_eit_t ;


 int FUNC_0 (TYPE_6__,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( ts_psip_context_t *VAR_0, dvbpsi_atsc_eit_t *VAR_1 )
{
    for( int VAR_2=0; VAR_2<VAR_0->eits.i_size; VAR_2++ )
    {
        dvbpsi_atsc_eit_t *VAR_3 = VAR_0->eits.p_elems[VAR_2];
        if( VAR_3->i_source_id == VAR_1->i_source_id )
        {
            FUNC_1( VAR_3 );
            VAR_0->eits.p_elems[VAR_2] = VAR_1;
            return;
        }
    }
    FUNC_0( VAR_0->eits, VAR_1 );
}
