
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int limit; int min; } ;
typedef TYPE_1__ stats ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

stats *FUNC_1(uint64_t VAR_1) {
    uint64_t VAR_2 = VAR_1 + 1;
    stats *VAR_3 = FUNC_0(sizeof(stats) + sizeof(uint64_t) * VAR_2);
    VAR_3->limit = VAR_2;
    VAR_3->min = VAR_0;
    return VAR_3;
}
