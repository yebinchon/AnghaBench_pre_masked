
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const vlc_family_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int family_map; } ;
typedef TYPE_2__ filter_sys_t ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int const* VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int const* FUNC_3 (int *,char*) ;

const vlc_family_t *FUNC_4( filter_t *VAR_1, const char *VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_1->p_sys;
    char *VAR_4 = FUNC_0( VAR_2 );
    if( FUNC_2( !VAR_4 ) )
        return ((void*)0);

    vlc_family_t *VAR_5 =
            FUNC_3( &VAR_3->family_map, VAR_4 );

    FUNC_1( VAR_4 );

    if( VAR_5 == VAR_0 )
        return ((void*)0);

    return VAR_5;
}
