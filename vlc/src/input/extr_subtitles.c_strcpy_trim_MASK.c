
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;

__attribute__((used)) static void FUNC_2( char *VAR_0, const char *VAR_1 )
{
    unsigned char VAR_2;


    while( ((VAR_2 = *VAR_1) != '\0') && !FUNC_0(VAR_2) )
    {
        VAR_1++;
    }
    for(;;)
    {

        while( ((VAR_2 = *VAR_1) != '\0') && FUNC_0(VAR_2) )
        {
            *VAR_0 = FUNC_1(VAR_2);
            VAR_1++; VAR_0++;
        }
        if( *VAR_1 == 0 ) break;

        while( ((VAR_2 = *VAR_1) != '\0') && !FUNC_0(VAR_2) )
        {
            VAR_1++;
        }
        if( *VAR_1 == 0 ) break;
        *VAR_0++ = ' ';
    }
    *VAR_0 = 0;
}
