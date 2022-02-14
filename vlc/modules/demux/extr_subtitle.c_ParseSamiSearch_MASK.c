
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text_t ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static const char *FUNC_3( text_t *VAR_0,
                                    const char *VAR_1, const char *VAR_2 )
{
    if( VAR_1 && FUNC_1( VAR_1, VAR_2 ) )
    {
        const char *VAR_3 = FUNC_1( VAR_1, VAR_2 );
        return &VAR_3[FUNC_2( VAR_2 )];
    }

    for( ;; )
    {
        const char *VAR_4 = FUNC_0( VAR_0 );
        if( !VAR_4 )
            return ((void*)0);

        const char *VAR_5 = FUNC_1( VAR_4, VAR_2 );
        if( VAR_5 != ((void*)0) )
            return &VAR_5[FUNC_2( VAR_2 )];
    }
}
