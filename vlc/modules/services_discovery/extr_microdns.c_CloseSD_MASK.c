
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct discovery_sys {int dummy; } ;
struct TYPE_2__ {struct discovery_sys* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;


 int FUNC_0 (struct discovery_sys*) ;

__attribute__((used)) static void
FUNC_1( vlc_object_t *VAR_0 )
{
    services_discovery_t *VAR_1 = (services_discovery_t *) VAR_0;
    struct discovery_sys *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2 );
}
