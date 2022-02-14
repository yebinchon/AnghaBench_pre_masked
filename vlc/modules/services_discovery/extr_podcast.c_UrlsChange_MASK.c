
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* vlc_value_t ;
typedef char const vlc_object_t ;
struct TYPE_2__ {int b_update; int lock; int wait; int update_type; } ;
typedef TYPE_1__ services_discovery_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_2, char const *VAR_3,
                       vlc_value_t VAR_4, vlc_value_t VAR_5,
                       void *VAR_6 )
{
    FUNC_0(VAR_2); FUNC_0(VAR_3); FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    services_discovery_sys_t *VAR_7 = (services_discovery_sys_t *)VAR_6;

    FUNC_2( &VAR_7->lock );
    VAR_7->b_update = 1;
    VAR_7->update_type = VAR_0;
    FUNC_1( &VAR_7->wait );
    FUNC_3( &VAR_7->lock );
    return VAR_1;
}
