
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {scalar_t__ p_decoder; } ;
typedef TYPE_1__ dvbpsi_t ;
typedef int dvbpsi_demux_t ;
struct TYPE_8__ {int p_decoder; } ;
typedef TYPE_2__ dvbpsi_demux_subdec_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;

void FUNC_3( dvbpsi_t *VAR_0, uint8_t VAR_1, uint16_t VAR_2 )
{
    dvbpsi_demux_t *VAR_3 = (dvbpsi_demux_t *) VAR_0->p_decoder;

    dvbpsi_demux_subdec_t* VAR_4;
    VAR_4 = FUNC_2( VAR_3, VAR_1, VAR_2 );
    if ( VAR_4 == ((void*)0) || !VAR_4->p_decoder )
        return;

    FUNC_1( VAR_3, VAR_4 );
    FUNC_0( VAR_4 );
}
