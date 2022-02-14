
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int ulLo; } ;
typedef TYPE_1__ QWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;

void FUNC_2 (void *VAR_0, size_t VAR_1)
{
    QWORD VAR_2;
    uint8_t *VAR_3 = (uint8_t *)VAR_0;

    while (VAR_1 > 0)
    {
        FUNC_0( &VAR_2 );

        *VAR_3++ = ( uint8_t )( VAR_2.ulLo * FUNC_1());
        VAR_1--;
    }
}
