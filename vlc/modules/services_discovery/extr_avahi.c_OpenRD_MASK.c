
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_renderer_discovery_t ;
typedef int vlc_object_t ;
struct TYPE_7__ {int renderer; int services_name_to_input_item; int * parent; } ;
typedef TYPE_2__ discovery_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_3 )
{
    vlc_renderer_discovery_t *VAR_4 = (vlc_renderer_discovery_t *)VAR_3;

    discovery_sys_t *VAR_5 = VAR_4->p_sys = FUNC_1( 1, sizeof( discovery_sys_t ) );
    if( !VAR_4->p_sys )
        return VAR_0;
    VAR_5->parent = VAR_3;
    VAR_5->renderer = 1;

    int VAR_6 = FUNC_0( VAR_5 );
    if( VAR_6 != VAR_1 )
    {
        FUNC_3( &VAR_5->services_name_to_input_item,
                              VAR_2, ((void*)0) );
        FUNC_2( VAR_5 );
    }
    return VAR_6;
}
