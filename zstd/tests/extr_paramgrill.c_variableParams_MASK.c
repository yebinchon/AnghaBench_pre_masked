
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static size_t FUNC_0(const paramValues_t VAR_3, varInds_t* VAR_4, const int VAR_5) {
    varInds_t VAR_6;
    size_t VAR_7 = 0;
    for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if(VAR_3.vals[VAR_6] == VAR_1) {
            if(VAR_6 == VAR_2 && !VAR_5) continue;
            VAR_4[VAR_7] = VAR_6; VAR_7++;
        }
    }
    return VAR_7;
}
