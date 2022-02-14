
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
struct entry_item {int entry_item_list; int p_item; scalar_t__ p_ns; } ;
struct TYPE_2__ {struct entry_item* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
typedef struct entry_item services_discovery_sys_t ;


 int FUNC_0 (struct entry_item*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 struct entry_item* FUNC_6 (int *,size_t) ;

void FUNC_7 (vlc_object_t *VAR_0)
{
    services_discovery_t *VAR_1 = (services_discovery_t *)VAR_0;
    services_discovery_sys_t *VAR_2 = VAR_1->p_sys;

    if( VAR_2 == ((void*)0) )
        return;

    if( VAR_2->p_ns )
    {
        FUNC_3( VAR_2->p_ns );
        FUNC_2( VAR_2->p_ns );
    }

    for( size_t VAR_3 = 0; VAR_3 < FUNC_5( &VAR_2->entry_item_list ); VAR_3++ )
    {
        struct entry_item *VAR_4;

        VAR_4 = FUNC_6( &VAR_2->entry_item_list, VAR_3 );
        FUNC_1( VAR_4->p_item );
        FUNC_0( VAR_4 );
    }
    FUNC_4( &VAR_2->entry_item_list );

    FUNC_0( VAR_2 );
}
