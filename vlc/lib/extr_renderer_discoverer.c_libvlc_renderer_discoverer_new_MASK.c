
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int event_manager; int * p_rd; int pp_items; int i_items; int name; int p_object; } ;
typedef TYPE_1__ libvlc_renderer_discoverer_t ;
struct TYPE_8__ {int p_libvlc_int; } ;
typedef TYPE_2__ libvlc_instance_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int ,char const*,size_t) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;

libvlc_renderer_discoverer_t *
FUNC_7( libvlc_instance_t *VAR_0,
                                const char *VAR_1 )
{
    size_t VAR_2 = FUNC_5( VAR_1 ) + 1;
    libvlc_renderer_discoverer_t *VAR_3 = FUNC_3( sizeof(*VAR_3) + VAR_2 );

    if( FUNC_6(VAR_3 == ((void*)0)) )
        return ((void*)0);

    VAR_3->p_object = FUNC_1(VAR_0->p_libvlc_int);
    FUNC_4( VAR_3->name, VAR_1, VAR_2 );
    FUNC_0( VAR_3->i_items, VAR_3->pp_items );
    VAR_3->p_rd = ((void*)0);
    FUNC_2( &VAR_3->event_manager, VAR_3 );

    return VAR_3;
}
