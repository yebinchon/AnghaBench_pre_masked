
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef int vlc_family_t ;
typedef int vlc_dictionary_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {int family_map; } ;
typedef TYPE_2__ filter_sys_t ;


 char* FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,char*,int *) ;
 int * FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char const**) ;

__attribute__((used)) static int FUNC_7( filter_t *VAR_2, xml_reader_t *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_2->p_sys;
    vlc_dictionary_t *VAR_5 = &VAR_4->family_map;
    vlc_family_t *VAR_6 = ((void*)0);
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    const char *VAR_9 = ((void*)0);
    const char *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    int VAR_12 = VAR_1;

    while( ( VAR_10 = FUNC_6( VAR_3, &VAR_9 ) ) )
    {
        if( !FUNC_3( "weight", VAR_10 ) && VAR_9 && *VAR_9 )
            VAR_11 = FUNC_1( VAR_9 );
        else if( !FUNC_3( "to", VAR_10 ) && VAR_9 && *VAR_9 )
            VAR_8 = FUNC_0( VAR_9 );
        else if( !FUNC_3( "name", VAR_10 ) && VAR_9 && *VAR_9 )
            VAR_7 = FUNC_0( VAR_9 );
    }

    if( !VAR_8 || !VAR_7 )
    {
        VAR_12 = VAR_0;
        goto done;
    }

    VAR_6 = FUNC_5( VAR_5, VAR_8 );

    if( VAR_6 && VAR_11 == 0 )
        if( FUNC_5( VAR_5, VAR_7 ) == ((void*)0) )
            FUNC_4( VAR_5, VAR_7, VAR_6 );

done:
    FUNC_2( VAR_8 );
    FUNC_2( VAR_7 );
    return VAR_12;
}
