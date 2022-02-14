
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 char* FUNC_2 (char*,int *,size_t) ;

__attribute__((used)) static char *FUNC_3( const uint8_t *VAR_0, size_t VAR_1, uint8_t **VAR_2, size_t VAR_3 )
{
    uint8_t *VAR_4 = *VAR_2;
    char *VAR_5 = ((void*)0);
    if( FUNC_0(VAR_3) )
    {
        VAR_5 = FUNC_2( "UTF-16LE", VAR_4, VAR_3 );
    }
    FUNC_1(VAR_3);
    *VAR_2 = VAR_4;
    return VAR_5;
}
