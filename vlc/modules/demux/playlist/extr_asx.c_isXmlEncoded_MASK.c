
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const) ;
 char* FUNC_4 (char const*,char) ;
 int * FUNC_5 (char const*,char*) ;

__attribute__((used)) static bool FUNC_6(const char* VAR_0)
{
    FUNC_0( VAR_0 != ((void*)0) );

    if( FUNC_5(VAR_0, "<>'\"") != ((void*)0) )
        return 0;

    bool VAR_1 = 0;
    while( 1 )
    {
        const char* VAR_2 = FUNC_4(VAR_0, '&');
        if( VAR_2 == ((void*)0) )
            break;
        const char* VAR_3 = FUNC_4(VAR_2, ';');
        if( VAR_3 == ((void*)0) )
            return 0;

        else if(VAR_2[1] == '#')
        {
            if( VAR_2[2] == 'x' )
            {
                const char* VAR_4 = &VAR_2[3];
                if( VAR_4 == VAR_3 )
                    return 0;
                for ( ; VAR_4 < VAR_3; VAR_4++)
                    if( ! FUNC_3( *VAR_4 ) )
                        return 0;
            }
            else
            {
                const char* VAR_5 = &(VAR_2[2]);
                if( VAR_5 == VAR_3 )
                    return 0;
                for ( ; VAR_5 < VAR_3; VAR_5++)
                    if( ! FUNC_2( *VAR_5 ) )
                        return 0;
            }
        }
        else
        {
            const char* VAR_6 = &(VAR_2[1]);
            if( VAR_6 == VAR_3 )
                return 0;
            for ( ; VAR_6 < VAR_3; VAR_6++)
                if( ! FUNC_1( *VAR_6 ) )
                    return 0;
        }
        VAR_1 = 1;
        VAR_0 = VAR_3;
    }
    return VAR_1;
}
