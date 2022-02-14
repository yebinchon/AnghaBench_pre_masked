
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {int port; int ip; } ;
typedef TYPE_1__ IP_Port ;
typedef int IP ;


 scalar_t__ FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static uint16_t FUNC_2(uint16_t *VAR_0, IP_Port *VAR_1, uint16_t VAR_2, IP VAR_3)
{
    uint32_t VAR_4;
    uint16_t VAR_5 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
        if (FUNC_0(&VAR_1[VAR_4].ip, &VAR_3)) {
            VAR_0[VAR_5] = FUNC_1(VAR_1[VAR_4].port);
            ++VAR_5;
        }
    }

    return VAR_5;
}
