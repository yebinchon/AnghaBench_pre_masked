
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int fec_inner; void* symbol_rate; } ;
struct TYPE_7__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; int inversion; } ;
struct dvb_frontend_event {int frequency; TYPE_2__ u; int inversion; } ;
struct TYPE_8__ {int i_frontend_handle; } ;
typedef TYPE_3__ dvb_sys_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,struct dvb_frontend_parameters*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,...) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8( vlc_object_t *VAR_7, dvb_sys_t *VAR_8 )
{
    struct dvb_frontend_parameters VAR_9;
    int VAR_10;
    int VAR_11, VAR_12 = 0, VAR_13, VAR_14 = 0;


    VAR_11 = FUNC_5( VAR_7, "dvb-frequency" );

    VAR_10 = FUNC_5( VAR_7, "dvb-lnb-lof1" );
    if( VAR_10 == 0 )
    {

        if ( VAR_11 >= 950000 && VAR_11 <= 2150000 )
        {
            FUNC_3( VAR_7, "frequency %d is in IF-band", VAR_11 );
            VAR_13 = 0;
        }
        else if ( VAR_11 >= 2500000 && VAR_11 <= 2700000 )
        {
            FUNC_3( VAR_7, "frequency %d is in S-band", VAR_11 );
            VAR_13 = 3650000;
        }
        else if ( VAR_11 >= 3400000 && VAR_11 <= 4200000 )
        {
            FUNC_3( VAR_7, "frequency %d is in C-band (lower)",
                     VAR_11 );
            VAR_13 = 5150000;
        }
        else if ( VAR_11 >= 4500000 && VAR_11 <= 4800000 )
        {
            FUNC_3( VAR_7, "frequency %d is in C-band (higher)",
                     VAR_11 );
            VAR_13 = 5950000;
        }
        else if ( VAR_11 >= 10700000 && VAR_11 <= 13250000 )
        {
            FUNC_3( VAR_7, "frequency %d is in Ku-band",
                     VAR_11 );
            VAR_13 = 9750000;
            VAR_14 = 10600000;
            VAR_12 = 11700000;
        }
        else
        {
            FUNC_4( VAR_7, "frequency %d is out of any known band",
                     VAR_11 );
            FUNC_4( VAR_7, "specify dvb-lnb-lof1 manually for the local "
                     "oscillator frequency" );
            return VAR_4;
        }
        FUNC_6( VAR_7, "dvb-lnb-lof1", VAR_13 );
        FUNC_6( VAR_7, "dvb-lnb-lof2", VAR_14 );
        FUNC_6( VAR_7, "dvb-lnb-slof", VAR_12 );
    }
    else
    {
        VAR_13 = VAR_10;
        VAR_14 = FUNC_5( VAR_7, "dvb-lnb-lof2" );
        VAR_12 = FUNC_5( VAR_7, "dvb-lnb-slof" );
    }

    if( VAR_12 && VAR_11 >= VAR_12 )
    {
        VAR_11 -= VAR_14;
    }
    else
    {
        VAR_11 -= VAR_13;
    }
    VAR_9.frequency = VAR_11 >= 0 ? VAR_11 : -VAR_11;

    VAR_9.inversion = FUNC_0( VAR_7 );

    VAR_9.u.qpsk.symbol_rate = FUNC_5( VAR_7, "dvb-srate" );

    VAR_9.u.qpsk.fec_inner = VAR_1;

    if( FUNC_1( VAR_7, VAR_8 ) < 0 )
    {
        return VAR_4;
    }


    for( ; ; )
    {
        struct dvb_frontend_event VAR_15;
        if ( FUNC_2( VAR_8->i_frontend_handle, VAR_2, &VAR_15 ) < 0
              && VAR_6 == VAR_0 )
            break;
    }


    if( FUNC_2( VAR_8->i_frontend_handle, VAR_3, &VAR_9 ) < 0 )
    {
        FUNC_4( VAR_7, "frontend error: %s", FUNC_7(VAR_6) );
        return VAR_4;
    }

    return VAR_5;
}
