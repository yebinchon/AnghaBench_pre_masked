
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {size_t min; size_t max; size_t* data; } ;
typedef TYPE_1__ stats ;



uint64_t FUNC_0(stats *VAR_0, uint64_t VAR_1, uint64_t *VAR_2) {
    *VAR_2 = 0;
    for (uint64_t VAR_3 = VAR_0->min; VAR_3 <= VAR_0->max; VAR_3++) {
        if (VAR_0->data[VAR_3] && (*VAR_2)++ == VAR_1) {
            *VAR_2 = VAR_0->data[VAR_3];
            return VAR_3;
        }
    }
    return 0;
}
