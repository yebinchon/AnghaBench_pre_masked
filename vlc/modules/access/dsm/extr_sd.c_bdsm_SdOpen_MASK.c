
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; int description; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_7__ {int * p_ns; int entry_item_list; } ;
typedef TYPE_2__ services_discovery_sys_t ;
struct TYPE_8__ {int pf_on_entry_removed; int pf_on_entry_added; TYPE_1__* p_opaque; } ;
typedef TYPE_3__ netbios_ns_discover_callbacks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_3__*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

int FUNC_6 (vlc_object_t *VAR_6)
{
    services_discovery_t *VAR_7 = (services_discovery_t *)VAR_6;
    services_discovery_sys_t *VAR_8 = FUNC_2 (1, sizeof (*VAR_8));
    netbios_ns_discover_callbacks VAR_9;

    if( VAR_8 == ((void*)0) )
        return VAR_2;

    VAR_7->description = FUNC_0("Windows networks");
    VAR_7->p_sys = VAR_8;
    FUNC_5( &VAR_8->entry_item_list );

    VAR_8->p_ns = FUNC_4();
    if( VAR_8->p_ns == ((void*)0) )
        goto error;

    VAR_9.p_opaque = VAR_7;
    VAR_9.pf_on_entry_added = VAR_4;
    VAR_9.pf_on_entry_removed = VAR_5;

    if( FUNC_3( VAR_8->p_ns, VAR_0,
                                   &VAR_9) != 0 )
        goto error;

    return VAR_3;

    error:
        FUNC_1( VAR_6 );
        return VAR_1;
}
