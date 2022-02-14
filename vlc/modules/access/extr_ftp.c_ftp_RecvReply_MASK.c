
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int access_sys_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*,int) ;
 unsigned int FUNC_5 (char*,char**,int) ;

__attribute__((used)) static int FUNC_6( vlc_object_t *VAR_0, access_sys_t *VAR_1,
                          char **restrict VAR_2,
                          void (*VAR_3)(void *, const char *), void *VAR_4 )
{
    char *VAR_5 = FUNC_1( VAR_0, VAR_1 );
    if( VAR_5 == ((void*)0) )
        return -1;

    char *VAR_6;
    unsigned VAR_7 = FUNC_5( VAR_5, &VAR_6, 10 );
    if( (VAR_6 - VAR_5) != 3 || (*VAR_6 != '-' && *VAR_6 != ' ') )
    {
        FUNC_3( VAR_0, "malformatted response" );
        goto error;
    }
    FUNC_2( VAR_0, "received response: \"%s\"", VAR_5 );

    if( *VAR_6 == '-' )
    {
        bool VAR_8;

        *VAR_6 = ' ';
        do
        {
            char *VAR_9 = FUNC_1( VAR_0, VAR_1 );
            if( VAR_9 == ((void*)0) )
                goto error;

            VAR_8 = !FUNC_4( VAR_5, VAR_9, 4 );
            if( !VAR_8 )
                VAR_3( VAR_4, VAR_9 );
            FUNC_0( VAR_9 );
        }
        while( !VAR_8 );
    }

    if( VAR_2 != ((void*)0) )
        *VAR_2 = VAR_5;
    else
        FUNC_0( VAR_5 );
    return VAR_7;
error:
    FUNC_0( VAR_5 );
    return -1;
}
