
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static const char *FUNC_1( const char *VAR_1, int *VAR_2, int *VAR_3 )
{
    char *VAR_4;
    unsigned long VAR_5;


    VAR_5 = FUNC_0( VAR_1, &VAR_4, 0 );
    *VAR_2 = (VAR_1 == VAR_4 || VAR_5 > (unsigned long)VAR_0) ? -1 : (int)VAR_5;
    VAR_1 = VAR_4;


    if( *VAR_1 == ':' )
    {
        VAR_1++;
        VAR_5 = FUNC_0( VAR_1, &VAR_4, 0 );
        *VAR_3 = (VAR_1 == VAR_4 || VAR_5 > (unsigned long)VAR_0) ? -1 : (int)VAR_5;
        VAR_1 = VAR_4;
    }
    else
        *VAR_3 = -1;

    return VAR_1;
}
