
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_5__ {int thread; struct TYPE_5__* psz_name; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_0 )
{
    services_discovery_t *VAR_1 = ( services_discovery_t * )VAR_0;
    services_discovery_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2->psz_name );
    FUNC_1( VAR_2->thread );
    FUNC_2( VAR_2->thread, ((void*)0) );
    FUNC_0( VAR_2 );
}
