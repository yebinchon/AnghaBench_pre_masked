
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {unsigned int symbol_rate; int modulation; int fec_inner; } ;
struct TYPE_9__ {TYPE_2__ qam; } ;
struct dvb_frontend_parameters {TYPE_3__ u; int inversion; void* frequency; } ;
struct dvb_frontend_event {TYPE_3__ u; int inversion; void* frequency; } ;
struct TYPE_7__ {unsigned int symbol_rate_max; unsigned int symbol_rate_min; } ;
struct TYPE_10__ {TYPE_1__ info; } ;
typedef TYPE_4__ frontend_t ;
struct TYPE_11__ {int i_frontend_handle; TYPE_4__* p_frontend; } ;
typedef TYPE_5__ dvb_sys_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,struct dvb_frontend_parameters*) ;
 int FUNC_2 (int *,char*,int ) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_8, dvb_sys_t *VAR_9 )
{
    frontend_t *VAR_10 = VAR_9->p_frontend;
    struct dvb_frontend_parameters VAR_11;
    unsigned int VAR_12;



    VAR_11.frequency = FUNC_3( VAR_8, "dvb-frequency" );

    VAR_11.inversion = FUNC_0( VAR_8 );





    VAR_12 = FUNC_3( VAR_8, "dvb-srate" );
    if( VAR_12 < VAR_10->info.symbol_rate_max &&
        VAR_12 > VAR_10->info.symbol_rate_min )
        VAR_11.u.qam.symbol_rate = VAR_12;

    VAR_11.u.qam.fec_inner = VAR_1;

    VAR_11.u.qam.modulation = VAR_4;


    for( ; ; )
    {
        struct dvb_frontend_event VAR_13;
        if ( FUNC_1( VAR_9->i_frontend_handle, VAR_2, &VAR_13 ) < 0
              && VAR_7 == VAR_0 )
            break;
    }


    if( FUNC_1( VAR_9->i_frontend_handle, VAR_3, &VAR_11 ) < 0 )
    {
        FUNC_2( VAR_8, "frontend error: %s", FUNC_4(VAR_7) );
        return VAR_5;
    }

    return VAR_6;
}
