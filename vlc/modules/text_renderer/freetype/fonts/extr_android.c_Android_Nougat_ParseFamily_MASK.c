
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_11__ {char const* psz_name; int p_fonts; } ;
typedef TYPE_1__ vlc_family_t ;
typedef int vlc_dictionary_t ;
struct TYPE_12__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_13__ {int fallback_map; int family_map; int p_families; } ;
typedef TYPE_3__ filter_sys_t ;


 int FUNC_0 (TYPE_2__*,int *,TYPE_1__*) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_2__*,char const*,int *,int *,int *) ;
 char* FUNC_2 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int *,char*) ;
 char* FUNC_9 (int *,char const**) ;
 int FUNC_10 (int *,char const**) ;

__attribute__((used)) static int FUNC_11( filter_t *VAR_5, xml_reader_t *VAR_6 )
{
    filter_sys_t *VAR_7 = VAR_5->p_sys;
    vlc_dictionary_t *VAR_8 = &VAR_7->family_map;
    vlc_family_t *VAR_9 = ((void*)0);
    const char *VAR_10 = ((void*)0);
    const char *VAR_11 = ((void*)0);
    const char *VAR_12 = ((void*)0);
    int VAR_13 = 0;

    while( ( VAR_11 = FUNC_9( VAR_6, &VAR_10 ) ) )
    {
        if( !FUNC_5( "name", VAR_11 ) && VAR_10 && *VAR_10 )
        {
            VAR_12 = VAR_10;
            break;
        }
    }

    if( VAR_12 && *VAR_12 )
    {




        char *VAR_14 = FUNC_2( VAR_12 );
        if( FUNC_7( !VAR_14 ) )
            return VAR_3;

        VAR_9 = FUNC_8( VAR_8, VAR_14 );

        FUNC_3( VAR_14 );
    }

    if( VAR_9 == ((void*)0) )
    {







        VAR_9 = FUNC_1( VAR_5, VAR_12, &VAR_7->p_families,
                              &VAR_7->family_map, ((void*)0) );

        if( FUNC_7( !VAR_9 ) )
            return VAR_3;
    }

    while( ( VAR_13 = FUNC_10( VAR_6, &VAR_10 ) ) > 0 )
    {
        switch( VAR_13 )
        {
        case 128:
            if( !FUNC_5( "font", VAR_10 ) )
                if( FUNC_0( VAR_5, VAR_6, VAR_9 ) == VAR_3 )
                    return VAR_3;
            break;

        case 129:
            if( !FUNC_5( "family", VAR_10 ) )
            {
                if( FUNC_6( VAR_9->psz_name, VAR_1 ) )
                {




                    vlc_family_t *VAR_15 =
                        FUNC_1( VAR_5, VAR_9->psz_name,
                                   ((void*)0), &VAR_7->fallback_map, VAR_0 );

                    if( FUNC_7( !VAR_15 ) )
                        return VAR_3;

                    VAR_15->p_fonts = VAR_9->p_fonts;
                }

                return VAR_4;
            }
            break;
        }
    }

    FUNC_4( VAR_5, "Android_ParseFamily: Corrupt font configuration file" );
    return VAR_2;
}
