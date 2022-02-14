
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int scan_parameter_t ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ info; } ;
typedef TYPE_2__ frontend_t ;
struct TYPE_10__ {TYPE_2__* p_frontend; } ;
typedef TYPE_3__ dvb_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,int *) ;
 int FUNC_1 (int *,TYPE_3__*,int *) ;
 int FUNC_2 (int *,TYPE_3__*,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,char*) ;

int FUNC_4( vlc_object_t *VAR_4, dvb_sys_t *VAR_5, scan_parameter_t *VAR_6 )
{
    const frontend_t *VAR_7 = VAR_5->p_frontend;

    if( VAR_7->info.type == VAR_0 )
        return FUNC_2( VAR_4, VAR_5, VAR_6 );
    else if( VAR_7->info.type == VAR_1 )
        return FUNC_0( VAR_4, VAR_5, VAR_6 );
    else if( VAR_7->info.type == VAR_2 )
        return FUNC_1( VAR_4, VAR_5, VAR_6 );

    FUNC_3( VAR_4, "frontend scanning not supported" );
    return VAR_3;
}
