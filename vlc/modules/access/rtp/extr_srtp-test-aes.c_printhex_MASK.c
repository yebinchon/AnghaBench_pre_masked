
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2 (const void *VAR_1, size_t VAR_2)
{
    for (size_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        FUNC_1 ("%02X", ((uint8_t *)VAR_1)[VAR_3]);
    FUNC_0 ('\n', VAR_0);
}
