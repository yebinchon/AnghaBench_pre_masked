
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_cfg; struct discovery_sys* p_sys; } ;
typedef TYPE_1__ vlc_renderer_discovery_t ;
typedef int vlc_object_t ;
struct discovery_sys {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct discovery_sys*,int) ;
 int VAR_1 ;
 struct discovery_sys* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3( vlc_object_t *VAR_3 )
{
    vlc_renderer_discovery_t *VAR_4 = (vlc_renderer_discovery_t *)VAR_3;

    struct discovery_sys *VAR_5 = FUNC_1( 1, sizeof(struct discovery_sys) );
    if( !VAR_5 )
        return VAR_1;
    VAR_4->p_sys = VAR_5;

    FUNC_2( VAR_4, VAR_0, VAR_2, VAR_4->p_cfg );

    return FUNC_0( VAR_3, VAR_5, 1 );
}
