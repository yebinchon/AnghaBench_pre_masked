
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t received_requests_index; int * received_requests; } ;
typedef TYPE_1__ Friend_Requests ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(Friend_Requests *VAR_1, const uint8_t *VAR_2)
{
    if (VAR_1->received_requests_index >= VAR_0)
        VAR_1->received_requests_index = 0;

    FUNC_0(VAR_1->received_requests[VAR_1->received_requests_index], VAR_2);
    ++VAR_1->received_requests_index;
}
