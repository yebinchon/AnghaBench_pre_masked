
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {size_t max; size_t* data; int count; } ;
typedef TYPE_1__ stats ;
typedef int int64_t ;



void FUNC_0(stats *VAR_0, int64_t VAR_1) {
    for (uint64_t VAR_2 = VAR_1 * 2; VAR_2 <= VAR_0->max; VAR_2++) {
        uint64_t VAR_3 = VAR_0->data[VAR_2];
        int64_t VAR_4 = (int64_t) VAR_2 - VAR_1;
        while (VAR_3 && VAR_4 > VAR_1) {
            VAR_0->data[VAR_4] += VAR_3;
            VAR_0->count += VAR_3;
            VAR_4 -= VAR_1;
        }
    }
}
