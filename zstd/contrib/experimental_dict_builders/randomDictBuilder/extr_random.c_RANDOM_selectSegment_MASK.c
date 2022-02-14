
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t k; } ;
typedef TYPE_1__ ZDICT_random_params_t ;
typedef size_t U32 ;
struct TYPE_6__ {unsigned int begin; unsigned int end; } ;
typedef TYPE_2__ RANDOM_segment_t ;


 size_t const FUNC_0 () ;

__attribute__((used)) static RANDOM_segment_t FUNC_1(const size_t VAR_0,
                                            ZDICT_random_params_t VAR_1) {
    const U32 VAR_2 = VAR_1.k;
    RANDOM_segment_t VAR_3;
    unsigned VAR_4;


    VAR_4 = FUNC_0()%(VAR_0 - VAR_2 + 1);


    VAR_3.begin = VAR_4;
    VAR_3.end = VAR_4 + VAR_2 - 1;

    return VAR_3;
}
