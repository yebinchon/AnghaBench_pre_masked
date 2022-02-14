
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {size_t min; size_t max; scalar_t__* data; } ;
typedef TYPE_1__ stats ;



uint64_t FUNC_0(stats *VAR_0) {
    uint64_t VAR_1 = 0;
    for (uint64_t VAR_2 = VAR_0->min; VAR_2 <= VAR_0->max; VAR_2++) {
        if (VAR_0->data[VAR_2]) VAR_1++;
    }
    return VAR_1;
}
