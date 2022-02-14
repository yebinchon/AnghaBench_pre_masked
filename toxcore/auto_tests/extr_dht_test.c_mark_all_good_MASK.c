
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {int assoc4; int assoc6; } ;
typedef TYPE_1__ Client_data ;


 int FUNC_0 (int *) ;

void FUNC_1(Client_data *VAR_0, uint32_t VAR_1, uint8_t VAR_2)
{
    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        if (VAR_2)
            FUNC_0(&VAR_0[VAR_3].assoc6);
        else
            FUNC_0(&VAR_0[VAR_3].assoc4);
    }
}
