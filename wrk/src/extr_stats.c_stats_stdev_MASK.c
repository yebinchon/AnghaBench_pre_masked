
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {int count; size_t min; size_t max; int* data; } ;
typedef TYPE_1__ stats ;


 long double FUNC_0 (size_t,int) ;
 long double FUNC_1 (long double) ;

long double FUNC_2(stats *VAR_0, long double VAR_1) {
    long double VAR_2 = 0.0;
    if (VAR_0->count < 2) return 0.0;
    for (uint64_t VAR_3 = VAR_0->min; VAR_3 <= VAR_0->max; VAR_3++) {
        if (VAR_0->data[VAR_3]) {
            VAR_2 += FUNC_0(VAR_3 - VAR_1, 2) * VAR_0->data[VAR_3];
        }
    }
    return FUNC_1(VAR_2 / (VAR_0->count - 1));
}
