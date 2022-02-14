
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xml_reader_t ;
struct TYPE_12__ {char* psz_name; int p_fonts; } ;
typedef TYPE_1__ vlc_family_t ;
typedef int vlc_dictionary_t ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_14__ {int fallback_map; int family_map; int p_families; } ;
typedef TYPE_3__ filter_sys_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,char*,int *,int *,int *) ;
 int FUNC_1 (char*,int ,int,int,TYPE_1__*) ;
 char* FUNC_2 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_3 (char**,char*,int ,char const*) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char const**) ;

__attribute__((used)) static int FUNC_12( filter_t *VAR_8, xml_reader_t *VAR_9 )
{
    filter_sys_t *VAR_10 = VAR_8->p_sys;
    vlc_dictionary_t *VAR_11 = &VAR_10->family_map;
    vlc_family_t *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    bool VAR_15 = 0;
    bool VAR_16 = 0;
    const char *VAR_17 = ((void*)0);
    int VAR_18 = 0;

    while( ( VAR_18 = FUNC_11( VAR_9, &VAR_17 ) ) > 0 )
    {
        switch( VAR_18 )
        {
        case 128:
            if( !FUNC_6( "name", VAR_17 ) )
            {
                VAR_18 = FUNC_11( VAR_9, &VAR_17 );

                if( VAR_18 != VAR_6 || !VAR_17 || !*VAR_17 )
                {
                    FUNC_5( VAR_8, "Android_ParseFamily: empty name" );
                    continue;
                }

                VAR_13 = FUNC_2( VAR_17 );
                if( FUNC_8( !VAR_13 ) )
                    return VAR_4;

                if( !VAR_12 )
                {
                    VAR_12 = FUNC_10( VAR_11, VAR_13 );
                    if( VAR_12 == VAR_7 )
                    {
                        VAR_12 =
                            FUNC_0( VAR_8, VAR_13, &VAR_10->p_families, ((void*)0), ((void*)0) );

                        if( FUNC_8( !VAR_12 ) )
                        {
                            FUNC_4( VAR_13 );
                            return VAR_4;
                        }

                    }
                }

                if( FUNC_10( VAR_11, VAR_13 ) == VAR_7 )
                    FUNC_9( VAR_11, VAR_13, VAR_12 );
                FUNC_4( VAR_13 );
            }






            else if( !FUNC_6( "file", VAR_17 ) )
            {
                VAR_18 = FUNC_11( VAR_9, &VAR_17 );

                if( VAR_18 != VAR_6 || !VAR_17 || !*VAR_17 )
                {
                    ++VAR_14;
                    continue;
                }

                if( !VAR_12 )
                    VAR_12 = FUNC_0( VAR_8, ((void*)0), &VAR_10->p_families,
                                          &VAR_10->family_map, ((void*)0) );

                if( FUNC_8( !VAR_12 ) )
                    return VAR_4;

                switch( VAR_14 )
                {
                case 0:
                    VAR_15 = 0;
                    VAR_16 = 0;
                    break;
                case 1:
                    VAR_15 = 1;
                    VAR_16 = 0;
                    break;
                case 2:
                    VAR_15 = 0;
                    VAR_16 = 1;
                    break;
                case 3:
                    VAR_15 = 1;
                    VAR_16 = 1;
                    break;
                default:
                    FUNC_5( VAR_8, "Android_ParseFamily: too many files" );
                    return VAR_3;
                }

                char *VAR_19 = ((void*)0);
                if( FUNC_3( &VAR_19, "%d/%s", VAR_0, VAR_17 ) < 0
                 || !FUNC_1( VAR_19, 0, VAR_15, VAR_16, VAR_12 ) )
                    return VAR_4;

                ++VAR_14;
            }
            break;

        case 129:
            if( !FUNC_6( "family", VAR_17 ) )
            {
                if( !VAR_12 )
                {
                    FUNC_5( VAR_8, "Android_ParseFamily: empty family" );
                    return VAR_3;
                }





                if( FUNC_7( VAR_12->psz_name, VAR_2 ) )
                {
                    vlc_family_t *VAR_20 =
                        FUNC_0( VAR_8, VAR_12->psz_name,
                                   ((void*)0), &VAR_10->fallback_map, VAR_1 );

                    if( FUNC_8( !VAR_20 ) )
                        return VAR_4;

                    VAR_20->p_fonts = VAR_12->p_fonts;
                }

                return VAR_5;
            }
            break;
        }
    }

    FUNC_5( VAR_8, "Android_ParseOldFamily: Corrupt font configuration file" );
    return VAR_3;
}
