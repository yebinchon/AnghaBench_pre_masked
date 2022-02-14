
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {TYPE_2__* p_sys; int description; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_7__ {int renderer; int services_name_to_input_item; int * parent; } ;
typedef TYPE_2__ discovery_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_3 )
{
    services_discovery_t *VAR_4 = ( services_discovery_t* )VAR_3;
    VAR_4->description = FUNC_1("Zeroconf network services");

    discovery_sys_t *VAR_5 = VAR_4->p_sys = FUNC_2( 1, sizeof( discovery_sys_t ) );
    if( !VAR_4->p_sys )
        return VAR_0;
    VAR_5->parent = VAR_3;
    VAR_5->renderer = 0;

    int VAR_6 = FUNC_0( VAR_5 );
    if( VAR_6 != VAR_1 )
    {
        FUNC_4( &VAR_5->services_name_to_input_item,
                              VAR_2, ((void*)0) );
        FUNC_3( VAR_5 );
    }
    return VAR_6;
}
