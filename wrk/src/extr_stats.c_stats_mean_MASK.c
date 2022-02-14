
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {scalar_t__ count; size_t min; size_t max; size_t* data; } ;
typedef TYPE_1__ stats ;



long double FUNC_0(stats *VAR_0) {
    if (VAR_0->count == 0) return 0.0;

    uint64_t VAR_1 = 0;
    for (uint64_t VAR_2 = VAR_0->min; VAR_2 <= VAR_0->max; VAR_2++) {
        VAR_1 += VAR_0->data[VAR_2] * VAR_2;
    }
    return VAR_1 / (long double) VAR_0->count;
}
