
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_10__ {int pp_announces; int i_announces; } ;
typedef TYPE_2__ services_discovery_sys_t ;
struct TYPE_11__ {int * p_item; int * p_sdp; } ;
typedef TYPE_3__ sap_announce_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5( services_discovery_t *VAR_1,
                           sap_announce_t *VAR_2 )
{
    if( VAR_2->p_sdp )
    {
        FUNC_0( VAR_2->p_sdp );
        VAR_2->p_sdp = ((void*)0);
    }

    if( VAR_2->p_item )
    {
        FUNC_4( VAR_1, VAR_2->p_item );
        FUNC_3( VAR_2->p_item );
        VAR_2->p_item = ((void*)0);
    }

    services_discovery_sys_t *VAR_3 = VAR_1->p_sys;
    FUNC_1(VAR_3->i_announces, VAR_3->pp_announces, VAR_2);
    FUNC_2( VAR_2 );

    return VAR_0;
}
