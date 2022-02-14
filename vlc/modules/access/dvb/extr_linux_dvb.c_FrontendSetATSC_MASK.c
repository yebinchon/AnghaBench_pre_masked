
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int modulation; } ;
struct TYPE_6__ {TYPE_1__ vsb; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int frequency; } ;
struct dvb_frontend_event {TYPE_2__ u; int frequency; } ;
struct TYPE_7__ {int i_frontend_handle; } ;
typedef TYPE_3__ dvb_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,struct dvb_frontend_parameters*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_7, dvb_sys_t *VAR_8 )
{
    struct dvb_frontend_parameters VAR_9;



    VAR_9.frequency = FUNC_2( VAR_7, "dvb-frequency" );
    VAR_9.u.vsb.modulation = VAR_5;


    for( ; ; )
    {
        struct dvb_frontend_event VAR_10;
        if ( FUNC_0( VAR_8->i_frontend_handle, VAR_1, &VAR_10 ) < 0
              && VAR_6 == VAR_0 )
            break;
    }


    if( FUNC_0( VAR_8->i_frontend_handle, VAR_2, &VAR_9 ) < 0 )
    {
        FUNC_1( VAR_7, "frontend error: %s", FUNC_3(VAR_6) );
        return VAR_3;
    }

    return VAR_4;
}
