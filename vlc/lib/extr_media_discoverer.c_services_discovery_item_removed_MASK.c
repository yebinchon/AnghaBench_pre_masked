
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* sys; } ;
struct TYPE_9__ {TYPE_1__ owner; } ;
typedef TYPE_2__ services_discovery_t ;
struct TYPE_10__ {int * p_input_item; } ;
typedef TYPE_3__ libvlc_media_t ;
struct TYPE_11__ {int p_mlist; } ;
typedef TYPE_4__ libvlc_media_discoverer_t ;
typedef int input_item_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7( services_discovery_t *VAR_0,
                                             input_item_t *VAR_1 )
{
    libvlc_media_t * VAR_2;
    libvlc_media_discoverer_t *VAR_3 = VAR_0->owner.sys;

    int VAR_4, VAR_5 = FUNC_1( VAR_3->p_mlist );
    FUNC_4( VAR_3->p_mlist );
    for( VAR_4 = 0; VAR_4 < VAR_5; VAR_4++ )
    {
        VAR_2 = FUNC_3( VAR_3->p_mlist, VAR_4 );
        FUNC_0(VAR_2 != ((void*)0));
        if( VAR_2->p_input_item == VAR_1 )
        {
            FUNC_2( VAR_3->p_mlist, VAR_4 );
            FUNC_6( VAR_2 );
            break;
        }
        FUNC_6( VAR_2 );
    }
    FUNC_5( VAR_3->p_mlist );
}
