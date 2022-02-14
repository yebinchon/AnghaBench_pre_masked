
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct discovery_sys {int dummy; } ;
struct TYPE_3__ {int p_cfg; int description; struct discovery_sys* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct discovery_sys*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 struct discovery_sys* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4( vlc_object_t *VAR_3 )
{
    services_discovery_t *VAR_4 = (services_discovery_t *)VAR_3;

    struct discovery_sys *VAR_5 = FUNC_2( 1, sizeof(struct discovery_sys) );
    if( !VAR_5 )
        return VAR_1;
    VAR_4->p_sys = VAR_5;

    VAR_4->description = FUNC_1("mDNS Network Discovery");
    FUNC_3( VAR_4, VAR_0, VAR_2, VAR_4->p_cfg );

    return FUNC_0( VAR_3, VAR_5, 0 );
}
