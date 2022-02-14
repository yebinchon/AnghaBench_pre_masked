
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_5__ {int pi_fd; int i_fd; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3( services_discovery_t *VAR_3, const char *VAR_4,
                       int VAR_5 )
{
    int VAR_6 = FUNC_1 ((vlc_object_t *)VAR_3, VAR_4, VAR_5);
    if (VAR_6 == -1)
        return VAR_1;

    FUNC_2( VAR_6, VAR_0 );
    services_discovery_sys_t *VAR_7 = VAR_3->p_sys;
    FUNC_0(VAR_7->i_fd, VAR_7->pi_fd, VAR_6);
    return VAR_2;
}
