
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int access_sys_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,char**,void (*) (void*,char const*),void*) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_0, access_sys_t *VAR_1,
                           int *restrict VAR_2, char **restrict VAR_3,
                           void (*VAR_4)(void *, const char *), void *VAR_5 )
{
    char *VAR_6;
    int VAR_7 = FUNC_1( VAR_0, VAR_1, &VAR_6, VAR_4, VAR_5 );
    if( (VAR_7 / 100) == 1 )
    {
        FUNC_0( VAR_6 );
        VAR_7 = FUNC_1( VAR_0, VAR_1, &VAR_6, VAR_4, VAR_5 );
    }

    if( VAR_7 >= 0 )
    {
        if( VAR_2 != ((void*)0) )
            *VAR_2 = VAR_7;
        if( VAR_3 != ((void*)0) )
            *VAR_3 = VAR_6;
        else
            FUNC_0( VAR_6 );
        VAR_7 /= 100;
    }
    else
    {
        if( VAR_2 != ((void*)0) )
            *VAR_2 = 500;
        if( VAR_3 != ((void*)0) )
            *VAR_3 = ((void*)0);
    }
    return VAR_7;
}
