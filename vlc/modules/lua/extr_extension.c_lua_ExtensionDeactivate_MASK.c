
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int extensions_manager_t ;
struct TYPE_8__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_9__ {int event_manager; } ;
struct TYPE_7__ {int b_activated; int i_capabilities; int * L; TYPE_6__* p_item; int dtable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *,TYPE_2__*,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;

int FUNC_6( extensions_manager_t *VAR_6, extension_t *VAR_7 )
{
    FUNC_0( VAR_6 != ((void*)0) && VAR_7 != ((void*)0) );

    if( VAR_7->p_sys->b_activated == 0 )
        return VAR_3;

    FUNC_5( &VAR_7->p_sys->dtable );


    if( VAR_7->p_sys->p_item )
    {
        if( VAR_7->p_sys->i_capabilities & VAR_0 )
            FUNC_4( &VAR_7->p_sys->p_item->event_manager,
                              VAR_5,
                              VAR_4,
                              VAR_7 );
        FUNC_1(VAR_7->p_sys->p_item);
        VAR_7->p_sys->p_item = ((void*)0);
    }

    int VAR_8 = FUNC_2( VAR_6, VAR_7, "deactivate", VAR_1 );

    if ( VAR_7->p_sys->L == ((void*)0) )
        return VAR_2;
    FUNC_3( VAR_7->p_sys->L );
    VAR_7->p_sys->L = ((void*)0);

    return VAR_8;
}
