
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char,size_t) ;

__attribute__((used)) static char *FUNC_2( const uint8_t *VAR_0, size_t VAR_1, uint8_t VAR_2 )
{
    if( VAR_1 == 0 )
        return ((void*)0);

    char *VAR_3 = FUNC_0( VAR_1 * 2 + 1 );
    char *VAR_4 = VAR_3;

    if( VAR_4 )
    {
        FUNC_1( VAR_4, VAR_2, VAR_1 * 2 );
        VAR_4[ VAR_1 * 2 ] = 0;
        while( VAR_1-- )
        {
            VAR_4[1] = VAR_0[0];
            VAR_0++;
            VAR_4 += 2;
        }
    }
    return VAR_3;
}
