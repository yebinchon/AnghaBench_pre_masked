
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_4( const char *VAR_0, const char *VAR_1 )
{
    size_t VAR_2 = FUNC_1(VAR_1);
    const char * VAR_3 = FUNC_0(VAR_0, ';');
    while( VAR_3 )
    {

        VAR_3++;
        VAR_3 += FUNC_2( VAR_3, " " );

        if( !FUNC_3( VAR_3, VAR_1, VAR_2 )
         && (VAR_3[VAR_2] == '=' || VAR_3[VAR_2] == ';' || VAR_3[VAR_2] == '\0') )
            return 1;

        VAR_3 = FUNC_0(VAR_3, ';');
    }
    return 0;
}
