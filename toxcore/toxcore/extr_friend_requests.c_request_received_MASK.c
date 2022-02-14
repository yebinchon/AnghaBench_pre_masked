
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {int * received_requests; } ;
typedef TYPE_1__ Friend_Requests ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*) ;

__attribute__((used)) static int FUNC_1(Friend_Requests *VAR_1, const uint8_t *VAR_2)
{
    uint32_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
        if (FUNC_0(VAR_1->received_requests[VAR_3], VAR_2))
            return 1;

    return 0;
}
