
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct background_worker_config {int (* pf_start ) (void*,void*,void**) ;int pf_hold; int pf_release; int pf_stop; int pf_probe; int max_threads; int default_timeout; } ;
struct background_worker {int dummy; } ;
struct TYPE_4__ {int owner; } ;
typedef TYPE_1__ input_fetcher_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct background_worker* FUNC_0 (TYPE_1__*,struct background_worker_config*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2( input_fetcher_t* VAR_4,
    struct background_worker** VAR_5, int( *VAR_6 )( void*, void*, void** ) )
{
    struct background_worker_config VAR_7 = {
        .default_timeout = 0,
        .max_threads = FUNC_1( VAR_4->owner, "fetch-art-threads" ),
        .pf_start = VAR_6,
        .pf_probe = VAR_1,
        .pf_stop = VAR_0,
        .pf_release = VAR_3,
        .pf_hold = VAR_2 };

    *VAR_5 = FUNC_0( VAR_4, &VAR_7 );
}
