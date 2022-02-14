
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* ids; } ;
typedef TYPE_1__ BS_LIST ;


 int FUNC_0 (TYPE_1__ const*,int const*) ;

int FUNC_1(const BS_LIST *VAR_0, const uint8_t *VAR_1)
{
    int VAR_2 = FUNC_0(VAR_0, VAR_1);


    if (VAR_2 < 0) {
        return -1;
    }

    return VAR_0->ids[VAR_2];
}
