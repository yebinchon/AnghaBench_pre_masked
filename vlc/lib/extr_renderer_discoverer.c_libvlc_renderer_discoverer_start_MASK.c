
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_renderer_discovery_owner {int member_2; int member_1; TYPE_1__* member_0; } ;
struct TYPE_3__ {int * p_rd; int name; int p_object; } ;
typedef TYPE_1__ libvlc_renderer_discoverer_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ,struct vlc_renderer_discovery_owner*) ;

int
FUNC_2( libvlc_renderer_discoverer_t *VAR_2 )
{
    FUNC_0( VAR_2->p_rd == ((void*)0) );

    struct vlc_renderer_discovery_owner VAR_3 =
    {
        VAR_2,
        VAR_0,
        VAR_1,
    };

    VAR_2->p_rd = FUNC_1( VAR_2->p_object, VAR_2->name, &VAR_3 );
    return VAR_2->p_rd != ((void*)0) ? 0 : -1;
}
