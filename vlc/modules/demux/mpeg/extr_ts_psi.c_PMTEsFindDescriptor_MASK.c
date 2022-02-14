
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_first_descriptor; } ;
typedef TYPE_1__ dvbpsi_pmt_es_t ;
struct TYPE_6__ {int i_tag; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ dvbpsi_descriptor_t ;



__attribute__((used)) static dvbpsi_descriptor_t *FUNC_0( const dvbpsi_pmt_es_t *VAR_0,
                                                 int VAR_1 )
{
    dvbpsi_descriptor_t *VAR_2 = VAR_0->p_first_descriptor;;
    while( VAR_2 && ( VAR_2->i_tag != VAR_1 ) )
        VAR_2 = VAR_2->p_next;
    return VAR_2;
}
