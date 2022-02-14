
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bo_t ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,size_t,char const*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4( const char *VAR_0, bo_t *VAR_1, char *VAR_2 )
{


    while(*VAR_0)
    {
        const char *VAR_3 = FUNC_2( VAR_0, '\n' );
        if( VAR_3 )
        {
            FUNC_1( VAR_1, VAR_3 - VAR_0, VAR_0 );
            if( *VAR_2 == '\n' )
                FUNC_0( VAR_1, '!' );
            FUNC_0( VAR_1, '\n' );
            *VAR_2 = '\n';
            VAR_0 = VAR_3 + 1;
        }
        else
        {
            size_t VAR_4 = FUNC_3(VAR_0);
            FUNC_1( VAR_1, VAR_4, VAR_0 );
            *VAR_2 = (VAR_4 > 0) ? VAR_0[VAR_4 - 1] : '\0';
            break;
        }
    }
}
