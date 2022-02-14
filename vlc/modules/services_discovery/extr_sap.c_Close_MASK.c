
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int i_fd; int i_announces; int * pp_announces; int * pi_fd; int thread; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6( vlc_object_t *VAR_0 )
{
    services_discovery_t *VAR_1 = ( services_discovery_t* )VAR_0;
    services_discovery_sys_t *VAR_2 = VAR_1->p_sys;
    int VAR_3;

    FUNC_4 (VAR_2->thread);
    FUNC_5 (VAR_2->thread, ((void*)0));

    for( VAR_3 = VAR_2->i_fd-1 ; VAR_3 >= 0 ; VAR_3-- )
    {
        FUNC_3( VAR_2->pi_fd[VAR_3] );
    }
    FUNC_0( VAR_2->pi_fd );

    for( VAR_3 = VAR_2->i_announces - 1; VAR_3>= 0; VAR_3-- )
    {
        FUNC_1( VAR_1, VAR_2->pp_announces[VAR_3] );
    }
    FUNC_0( VAR_2->pp_announces );

    FUNC_2( VAR_2 );
}
