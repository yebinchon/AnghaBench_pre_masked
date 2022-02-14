
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct background_worker_config {int pf_hold; int pf_release; int pf_stop; int pf_probe; int pf_start; int max_threads; int default_timeout; } ;
struct TYPE_7__ {int fetcher; int deactivated; int * owner; int worker; } ;
typedef TYPE_1__ input_preparser_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,struct background_worker_config*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,char*) ;

input_preparser_t* FUNC_10( vlc_object_t *VAR_5 )
{
    input_preparser_t* VAR_6 = FUNC_6( sizeof *VAR_6 );

    struct background_worker_config VAR_7 = {
        .default_timeout = FUNC_0(FUNC_9( VAR_5, "preparse-timeout" )),
        .max_threads = FUNC_9( VAR_5, "preparse-threads" ),
        .pf_start = VAR_1,
        .pf_probe = VAR_2,
        .pf_stop = VAR_0,
        .pf_release = VAR_4,
        .pf_hold = VAR_3
    };


    if( FUNC_5( VAR_6 ) )
        VAR_6->worker = FUNC_2( VAR_6, &VAR_7 );

    if( FUNC_8( !VAR_6 || !VAR_6->worker ) )
    {
        FUNC_3( VAR_6 );
        return ((void*)0);
    }

    VAR_6->owner = VAR_5;
    VAR_6->fetcher = FUNC_4( VAR_5 );
    FUNC_1( &VAR_6->deactivated, 0 );

    if( FUNC_8( !VAR_6->fetcher ) )
        FUNC_7( VAR_5, "unable to create art fetcher" );

    return VAR_6;
}
