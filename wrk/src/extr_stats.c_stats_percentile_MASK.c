
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {long double count; size_t min; size_t max; size_t* data; } ;
typedef TYPE_1__ stats ;


 size_t FUNC_0 (long double) ;

uint64_t FUNC_1(stats *VAR_0, long double VAR_1) {
    uint64_t VAR_2 = FUNC_0((VAR_1 / 100.0) * VAR_0->count + 0.5);
    uint64_t VAR_3 = 0;
    for (uint64_t VAR_4 = VAR_0->min; VAR_4 <= VAR_0->max; VAR_4++) {
        VAR_3 += VAR_0->data[VAR_4];
        if (VAR_3 >= VAR_2) return VAR_4;
    }
    return 0;
}
