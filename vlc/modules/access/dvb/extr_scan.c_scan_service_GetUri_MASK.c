
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_mplex; } ;
typedef TYPE_3__ scan_service_t ;
struct TYPE_5__ {int type; int inner_fec; int modulation; int i_symbolrate; int i_frequency; scalar_t__ polarization; int i_bandwidth; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;





 int FUNC_0 (char**,char*,int ,int ,char,...) ;
 int FUNC_1 (int ) ;
 char FUNC_2 (int ) ;

char * FUNC_3( const scan_service_t *VAR_0 )
{
    char *VAR_1 = ((void*)0);
    int VAR_2 = -1;
    switch( VAR_0->p_mplex->cfg.type )
    {
        case 128:
            VAR_2 = FUNC_0( &VAR_1, "dvb://frequency=%d:bandwidth=%d:modulation=%c",
                              VAR_0->p_mplex->cfg.i_frequency,
                              VAR_0->p_mplex->cfg.i_bandwidth,
                              FUNC_2( VAR_0->p_mplex->cfg.modulation ) );
            break;
        case 129:
            VAR_2 = FUNC_0( &VAR_1, "dvb://frequency=%d:srate=%d:polarization=%c:fec=%d",
                              VAR_0->p_mplex->cfg.i_frequency,
                              VAR_0->p_mplex->cfg.i_symbolrate,
                              (char) VAR_0->p_mplex->cfg.polarization,
                              FUNC_1( VAR_0->p_mplex->cfg.inner_fec ) );
            break;
        case 130:
            VAR_2 = FUNC_0( &VAR_1, "dvb://frequency=%d:srate=%d:modulation=%c:fec=%d",
                              VAR_0->p_mplex->cfg.i_frequency,
                              VAR_0->p_mplex->cfg.i_symbolrate,
                              FUNC_2( VAR_0->p_mplex->cfg.modulation ),
                              FUNC_1( VAR_0->p_mplex->cfg.inner_fec ) );
        default:
            break;
    }
    return (VAR_2 >=0) ? VAR_1 : ((void*)0);
}
