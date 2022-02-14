
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * worker; int * parent; } ;
typedef TYPE_1__ vlc_thumbnailer_t ;
typedef int vlc_object_t ;
struct background_worker_config {int default_timeout; int max_threads; int pf_stop; int pf_probe; int pf_start; int pf_hold; int pf_release; } ;


 int * FUNC_0 (TYPE_1__*,struct background_worker_config*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;

vlc_thumbnailer_t *FUNC_4( vlc_object_t* VAR_5)
{
    vlc_thumbnailer_t *VAR_6 = FUNC_2( sizeof( *VAR_6 ) );
    if ( FUNC_3( VAR_6 == ((void*)0) ) )
        return ((void*)0);
    VAR_6->parent = VAR_5;
    struct background_worker_config VAR_7 = {
        .default_timeout = -1,
        .max_threads = 1,
        .pf_release = VAR_2,
        .pf_hold = VAR_0,
        .pf_start = VAR_3,
        .pf_probe = VAR_1,
        .pf_stop = VAR_4,
    };
    VAR_6->worker = FUNC_0( VAR_6, &VAR_7 );
    if ( FUNC_3( VAR_6->worker == ((void*)0) ) )
    {
        FUNC_1( VAR_6 );
        return ((void*)0);
    }
    return VAR_6;
}
