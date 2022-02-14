
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct entry_item {int p_item; int * p_entry; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int entry_item_list; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int netbios_ns_entry ;


 int FUNC_0 (struct entry_item*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 size_t FUNC_3 (int *) ;
 struct entry_item* FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,size_t) ;

__attribute__((used)) static void FUNC_6( services_discovery_t *VAR_0,
                               netbios_ns_entry *VAR_1 )
{
    services_discovery_sys_t *VAR_2 = VAR_0->p_sys;

    for( size_t VAR_3 = 0; VAR_3 < FUNC_3( &VAR_2->entry_item_list ); VAR_3++ )
    {
        struct entry_item *VAR_4;

        VAR_4 = FUNC_4( &VAR_2->entry_item_list, VAR_3 );
        if( VAR_4->p_entry == VAR_1 )
        {
            FUNC_2( VAR_0, VAR_4->p_item );
            FUNC_1( VAR_4->p_item );
            FUNC_5( &VAR_2->entry_item_list, VAR_3 );
            FUNC_0( VAR_4 );
            break;
        }
    }
}
