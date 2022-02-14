
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2( char *VAR_0, const char *VAR_1, int VAR_2 )
{
    if( VAR_2 > 1 )
        FUNC_0( VAR_0, VAR_1, VAR_2-1 - FUNC_1(VAR_0, VAR_2-1));
    if( VAR_2 > 0 )
        VAR_0[VAR_2-1] = '\0';
}
