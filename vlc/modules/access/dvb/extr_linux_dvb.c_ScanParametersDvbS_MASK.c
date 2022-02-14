
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int i_max; int i_min; } ;
struct TYPE_10__ {int scanlist_format; int * psz_scanlist_file; TYPE_1__ frequency; int type; } ;
typedef TYPE_3__ scan_parameter_t ;
struct TYPE_9__ {int frequency_max; int frequency_min; } ;
struct TYPE_11__ {TYPE_2__ info; } ;
typedef TYPE_4__ frontend_t ;
struct TYPE_12__ {TYPE_4__* p_frontend; } ;
typedef TYPE_5__ dvb_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,char*,char*,char*) ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_4, dvb_sys_t *VAR_5, scan_parameter_t *VAR_6 )
{
    const frontend_t *VAR_7 = VAR_5->p_frontend;

    VAR_6->type = VAR_1;

    VAR_6->frequency.i_min = VAR_7->info.frequency_min;
    VAR_6->frequency.i_max = VAR_7->info.frequency_max;

    char *VAR_8 = FUNC_3( VAR_4, "dvb-satellite" );
    if( VAR_8 )
    {
        char *VAR_9 = FUNC_1(VAR_3, "dvb/dvb-s");
        if( !VAR_9 || -1 == FUNC_0( &VAR_6->psz_scanlist_file,
            "%s/%s", VAR_9, VAR_8 ) )
        {
            VAR_6->psz_scanlist_file = ((void*)0);
        }
        VAR_6->scanlist_format = VAR_0;
        FUNC_2( VAR_9 );
        FUNC_2( VAR_8 );
    }

    return VAR_2;
}
