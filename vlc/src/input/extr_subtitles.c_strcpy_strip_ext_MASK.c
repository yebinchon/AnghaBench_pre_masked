
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;
 char FUNC_3 (unsigned char) ;

__attribute__((used)) static void FUNC_4( char *VAR_0, const char *VAR_1 )
{
    unsigned char VAR_2;

    const char *VAR_3 = FUNC_2(VAR_1, '.');
    if( !VAR_3 )
    {
        FUNC_0(VAR_0, VAR_1);
        return;
    }
    else
        FUNC_1(VAR_0, VAR_1, VAR_3 - VAR_1 + 1 );
    while( (VAR_2 = *VAR_0) != '\0' )
    {
        *VAR_0 = FUNC_3(VAR_2);
        VAR_0++;
    }
}
