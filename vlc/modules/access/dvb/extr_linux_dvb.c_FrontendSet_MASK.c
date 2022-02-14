
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {TYPE_1__* p_frontend; } ;
typedef TYPE_3__ dvb_sys_t ;
struct TYPE_10__ {int type; int name; } ;
struct TYPE_9__ {scalar_t__ i_last_status; TYPE_2__ info; } ;






 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,char*,...) ;

int FUNC_5( vlc_object_t *VAR_2, dvb_sys_t *VAR_3 )
{
    switch( VAR_3->p_frontend->info.type )
    {

    case 128:
        if( FUNC_3( VAR_2, VAR_3 ) )
        {
            FUNC_4( VAR_2, "DVB-S tuning error" );
            return VAR_0;
        }
        break;


    case 129:
        if( FUNC_2( VAR_2, VAR_3 ) )
        {
            FUNC_4( VAR_2, "DVB-C tuning error" );
            return VAR_0;
        }
        break;


    case 130:
        if( FUNC_1( VAR_2, VAR_3 ) )
        {
            FUNC_4( VAR_2, "DVB-T tuning error" );
            return VAR_0;
        }
        break;


    case 131:
        if( FUNC_0( VAR_2, VAR_3 ) )
        {
            FUNC_4( VAR_2, "ATSC tuning error" );
            return VAR_0;
        }
        break;

    default:
        FUNC_4( VAR_2, "tuner type %s not supported",
                 VAR_3->p_frontend->info.name );
        return VAR_0;
    }
    VAR_3->p_frontend->i_last_status = 0;
    return VAR_1;
}
