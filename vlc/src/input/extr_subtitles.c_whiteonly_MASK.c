
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1( const char *VAR_0 )
{
    unsigned char VAR_1;

    while( (VAR_1 = *VAR_0) != '\0' )
    {
        if( FUNC_0( VAR_1 ) )
            return 0;
        VAR_0++;
    }
    return 1;
}
