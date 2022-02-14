
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int p_fonts; } ;
typedef TYPE_1__ vlc_family_t ;
struct TYPE_14__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_15__ {int fallback_map; TYPE_1__* (* pf_get_family ) (TYPE_2__*,char const* const) ;} ;
typedef TYPE_3__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char const* const,TYPE_1__**,int *,int *) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char const* const) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;

vlc_family_t *FUNC_5( filter_t *VAR_1, const char *const *VAR_2,
                               int VAR_3 )
{

    vlc_family_t *VAR_4 = ((void*)0);
    filter_sys_t *VAR_5 = VAR_1->p_sys;

    for( int VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6 )
    {
        const vlc_family_t *VAR_7 =
                VAR_5->pf_get_family( VAR_1, VAR_2[ VAR_6 ] );

        if( VAR_7 )
        {
            vlc_family_t *VAR_8 =
                FUNC_1( VAR_1, VAR_2[ VAR_6 ], &VAR_4, ((void*)0), ((void*)0) );

            if( FUNC_3( !VAR_8 ) )
                goto error;

            VAR_8->p_fonts = VAR_7->p_fonts;
        }
    }

    if( VAR_4 )
        FUNC_4( &VAR_5->fallback_map, VAR_0, VAR_4 );

    return VAR_4;

error:
    if( VAR_4 ) FUNC_0( VAR_4, ((void*)0) );
    return ((void*)0);
}
