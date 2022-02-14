
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int FUNC_1( char **VAR_2, char **VAR_3,
                       int VAR_4, char *VAR_5 )
{
    if( *VAR_3 - *VAR_2 < VAR_4 )
    {
        return VAR_0;
    }
    FUNC_0( VAR_5, *VAR_2, VAR_4 );
    *VAR_2 += VAR_4;
    return VAR_1;
}
