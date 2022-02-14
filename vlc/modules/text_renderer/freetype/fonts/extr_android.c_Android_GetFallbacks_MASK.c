
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_family_t ;
typedef int uni_char_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int fallback_map; } ;
typedef TYPE_2__ filter_sys_t ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int *,char*) ;

vlc_family_t *FUNC_5( filter_t *VAR_1, const char *VAR_2,
                                    uni_char_t VAR_3 )
{
    FUNC_1( VAR_3 );

    vlc_family_t *VAR_4 = ((void*)0);
    filter_sys_t *VAR_5 = VAR_1->p_sys;
    char *VAR_6 = FUNC_0( VAR_2 );
    if( FUNC_3( !VAR_6 ) )
        return ((void*)0);

    VAR_4 = FUNC_4( &VAR_5->fallback_map, VAR_6 );

    FUNC_2( VAR_6 );

    if( VAR_4 == VAR_0 )
        return ((void*)0);

    return VAR_4;
}
