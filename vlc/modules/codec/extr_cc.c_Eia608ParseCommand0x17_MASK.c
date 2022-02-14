
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int eia608_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static bool FUNC_3( eia608_t *VAR_0, uint8_t VAR_1 )
{
    switch( VAR_1 )
    {
    case 0x21:
    case 0x22:
    case 0x23:
        FUNC_0(FUNC_2("[TO%d]", VAR_1 - 0x20));
        FUNC_1( VAR_0, VAR_1 - 0x20 );
        break;
    }
    return 0;
}
