
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int i_size; TYPE_2__** p_elems; } ;
struct TYPE_6__ {TYPE_5__ etts; } ;
typedef TYPE_1__ ts_psip_context_t ;
struct TYPE_7__ {int i_etm_id; scalar_t__ i_version; } ;
typedef TYPE_2__ dvbpsi_atsc_ett_t ;


 int FUNC_0 (TYPE_5__,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( ts_psip_context_t *VAR_0, uint16_t VAR_1, uint8_t VAR_2 )
{
    int VAR_3=0;
    while( VAR_3<VAR_0->etts.i_size )
    {
        dvbpsi_atsc_ett_t *VAR_4 = VAR_0->etts.p_elems[VAR_3];
        uint16_t VAR_5 = VAR_4->i_etm_id >> 16;
        if( VAR_1 < VAR_5 )
            break;
        if( VAR_5 == VAR_1 && VAR_4->i_version != VAR_2 )
        {
            FUNC_1( VAR_4 );
            FUNC_0( VAR_0->etts, VAR_3 );
        }
        else VAR_3++;
    }
}
