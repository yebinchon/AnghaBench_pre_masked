
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_5__ {int * apps_root; int apps; int conn; int thread; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (vlc_object_t *VAR_1)
{
    services_discovery_t *VAR_2 = (services_discovery_t *)VAR_1;
    services_discovery_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_3 (VAR_3->thread);
    FUNC_4 (VAR_3->thread, ((void*)0));
    FUNC_5 (VAR_3->conn);
    FUNC_2 (VAR_3->apps, VAR_0);
    if (VAR_3->apps_root != ((void*)0))
        FUNC_1(VAR_3->apps_root);
    FUNC_0 (VAR_3);
}
