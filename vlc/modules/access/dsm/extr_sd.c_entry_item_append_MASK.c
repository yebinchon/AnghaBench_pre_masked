
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct entry_item {int * p_item; int * p_entry; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int entry_item_list; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int netbios_ns_entry ;
typedef int input_item_t ;


 struct entry_item* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *,struct entry_item*) ;

__attribute__((used)) static void FUNC_4( services_discovery_t *VAR_0,
                               netbios_ns_entry *VAR_1,
                               input_item_t *VAR_2 )
{
    services_discovery_sys_t *VAR_3 = VAR_0->p_sys;
    struct entry_item *VAR_4 = FUNC_0(1, sizeof(struct entry_item));

    if( !VAR_4 )
        return;
    VAR_4->p_entry = VAR_1;
    VAR_4->p_item = VAR_2;
    FUNC_1( VAR_2 );
    FUNC_3( &VAR_3->entry_item_list, VAR_4 );
    FUNC_2( VAR_0, VAR_2 );
}
