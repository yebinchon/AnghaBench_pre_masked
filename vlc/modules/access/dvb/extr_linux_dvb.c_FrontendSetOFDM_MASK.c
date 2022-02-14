
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int hierarchy_information; int guard_interval; int transmission_mode; int constellation; void* code_rate_LP; void* code_rate_HP; int bandwidth; } ;
struct TYPE_6__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; int frequency; } ;
struct dvb_frontend_event {TYPE_2__ u; int inversion; int frequency; } ;
struct TYPE_7__ {int i_frontend_handle; } ;
typedef TYPE_3__ dvb_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ,int ,struct dvb_frontend_parameters*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8( vlc_object_t *VAR_9, dvb_sys_t *VAR_10 )
{
    struct dvb_frontend_parameters VAR_11;



    VAR_11.frequency = FUNC_6( VAR_9, "dvb-frequency" );

    VAR_11.inversion = FUNC_2( VAR_9 );

    VAR_11.u.ofdm.bandwidth = FUNC_0( VAR_9 );
    VAR_11.u.ofdm.code_rate_HP = VAR_1;
    VAR_11.u.ofdm.code_rate_LP = VAR_1;
    VAR_11.u.ofdm.constellation = VAR_5;
    VAR_11.u.ofdm.transmission_mode = FUNC_3( VAR_9 );
    VAR_11.u.ofdm.guard_interval = VAR_4;
    VAR_11.u.ofdm.hierarchy_information = FUNC_1( VAR_9 );


    for( ; ; )
    {
        struct dvb_frontend_event VAR_12;
        if ( FUNC_4( VAR_10->i_frontend_handle, VAR_2, &VAR_12 ) < 0
              && VAR_8 == VAR_0 )
            break;
    }


    if( FUNC_4( VAR_10->i_frontend_handle, VAR_3, &VAR_11 ) < 0 )
    {
        FUNC_5( VAR_9, "frontend error: %s", FUNC_7(VAR_8) );
        return VAR_6;
    }

    return VAR_7;
}
