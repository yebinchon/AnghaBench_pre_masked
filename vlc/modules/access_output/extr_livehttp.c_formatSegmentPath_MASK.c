
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,int,int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5( char *VAR_1, uint32_t VAR_2 )
{
    char *VAR_3;
    char *VAR_4;

    if ( ! ( VAR_3 = FUNC_4( VAR_1 ) ) )
        return ((void*)0);

    VAR_4 = VAR_3 + FUNC_2( VAR_3, VAR_0 );
    if ( *VAR_4 )
    {
        char *VAR_5;
        int VAR_6 = FUNC_3( VAR_4, VAR_0 );
        int VAR_7;

        *VAR_4 = '\0';
        VAR_7 = FUNC_0( &VAR_5, "%s%0*d%s", VAR_3, VAR_6, VAR_2, VAR_4 + VAR_6 );
        FUNC_1 ( VAR_3 );
        if ( VAR_7 < 0 )
            return ((void*)0);
        VAR_3 = VAR_5;
    }

    return VAR_3;
}
