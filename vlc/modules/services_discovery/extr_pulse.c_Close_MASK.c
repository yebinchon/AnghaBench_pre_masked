
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_5__ {int root; int mainloop; int context; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3 (vlc_object_t *VAR_1)
{
    services_discovery_t *VAR_2 = (services_discovery_t *)VAR_1;
    services_discovery_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_2 (VAR_1, VAR_3->context, VAR_3->mainloop);
    FUNC_1 (VAR_3->root, VAR_0);
    FUNC_0 (VAR_3);
}
