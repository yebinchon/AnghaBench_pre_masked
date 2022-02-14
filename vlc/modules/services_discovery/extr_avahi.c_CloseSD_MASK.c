
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int services_name_to_input_item; } ;
typedef TYPE_2__ discovery_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_1 )
{
    services_discovery_t *VAR_2 = ( services_discovery_t* )VAR_1;
    discovery_sys_t *VAR_3 = VAR_2->p_sys;
    FUNC_0( VAR_3 );
    FUNC_2( &VAR_3->services_name_to_input_item,
                          VAR_0, ((void*)0) );
    FUNC_1( VAR_3 );
}
