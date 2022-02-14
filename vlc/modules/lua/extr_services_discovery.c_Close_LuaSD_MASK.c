
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int i_query; int L; struct TYPE_6__* psz_filename; int lock; int cond; struct TYPE_6__** ppsz_query; int thread; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int FUNC_0 (int,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7( vlc_object_t *VAR_0 )
{
    services_discovery_t *VAR_1 = ( services_discovery_t * )VAR_0;
    services_discovery_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_3( VAR_2->thread );
    FUNC_5( VAR_2->thread, ((void*)0) );

    for( int VAR_3 = 0; VAR_3 < VAR_2->i_query; VAR_3++ )
        FUNC_1( VAR_2->ppsz_query[VAR_3] );
    FUNC_0( VAR_2->i_query, VAR_2->ppsz_query );

    FUNC_4( &VAR_2->cond );
    FUNC_6( &VAR_2->lock );
    FUNC_1( VAR_2->psz_filename );
    FUNC_2( VAR_2->L );
    FUNC_1( VAR_2 );
}
