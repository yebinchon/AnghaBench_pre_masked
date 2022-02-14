
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int i_screen; } ;
typedef TYPE_1__ eia608_t ;







 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1( eia608_t *VAR_0 )
{
    switch( VAR_0->mode )
    {
    case 131:
        return 1 - VAR_0->i_screen;

    case 130:
    case 129:
    case 128:
    case 132:
        return VAR_0->i_screen;
    default:

        FUNC_0();
        return 0;
    }
}
