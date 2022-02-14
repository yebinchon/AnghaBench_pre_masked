
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_meta_type_t ;
typedef int vlc_meta_t ;
typedef int uint8_t ;


 char* FUNC_0 (int const*,size_t,char**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 char* FUNC_4 (int *,int ) ;
 char* FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ,char const*) ;

__attribute__((used)) static bool FUNC_7( const uint8_t *VAR_0, size_t VAR_1,
                               vlc_meta_type_t VAR_2, const char *VAR_3,
                               vlc_meta_t *VAR_4, bool *VAR_5 )
{
    if( VAR_4 == ((void*)0) )
        return 0;

    char *VAR_6;
    const char *VAR_7 = FUNC_0( VAR_0, VAR_1, &VAR_6 );
    if( VAR_7 && *VAR_7 )
    {
        const char *VAR_8 = ( VAR_3 ) ? FUNC_5( VAR_4, VAR_3 ):
                                              FUNC_4( VAR_4, VAR_2 );
        if( !VAR_8 || FUNC_2( VAR_8, VAR_7 ) )
        {
            if( VAR_5 )
                *VAR_5 = 1;
            if( VAR_3 )
                FUNC_3( VAR_4, VAR_3, VAR_7 );
            else
                FUNC_6( VAR_4, VAR_2, VAR_7 );
        }
    }
    FUNC_1( VAR_6 );

    return (VAR_7 != ((void*)0));
}
