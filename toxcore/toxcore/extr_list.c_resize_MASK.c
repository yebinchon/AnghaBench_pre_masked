
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int element_size; void* ids; void* data; } ;
typedef TYPE_1__ BS_LIST ;


 void* FUNC_0 (void*,int) ;

__attribute__((used)) static int FUNC_1(BS_LIST *VAR_0, uint32_t VAR_1)
{
    void *VAR_2;

    VAR_2 = FUNC_0(VAR_0->data, VAR_0->element_size * VAR_1);

    if (!VAR_2) {
        return 0;
    } else {
        VAR_0->data = VAR_2;
    }

    VAR_2 = FUNC_0(VAR_0->ids, sizeof(int) * VAR_1);

    if (!VAR_2) {
        return 0;
    } else {
        VAR_0->ids = VAR_2;
    }

    return 1;
}
