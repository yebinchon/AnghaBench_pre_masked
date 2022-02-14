
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
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(Friend_Requests *VAR_2, const uint8_t *VAR_3)
{
    uint32_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
        if (FUNC_0(VAR_2->received_requests[VAR_4], VAR_3)) {
            FUNC_1(VAR_2->received_requests[VAR_4], VAR_1);
            return 0;
        }
    }

    return -1;
}
