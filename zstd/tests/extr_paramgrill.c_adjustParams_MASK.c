
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_6__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,size_t const,size_t const) ;
 TYPE_1__ FUNC_1 (int ) ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_1__) ;
 size_t VAR_2 ;

__attribute__((used)) static paramValues_t
FUNC_3(paramValues_t VAR_3, const size_t VAR_4, const size_t VAR_5)
{
    paramValues_t VAR_6 = VAR_3;
    varInds_t VAR_7;
    VAR_3 = FUNC_1(FUNC_0(FUNC_2(VAR_3), VAR_4, VAR_5));
    if (!VAR_5) { VAR_3.vals[VAR_1] = 0; }

    for(VAR_7 = VAR_2 + 1; VAR_7 < VAR_0; VAR_7++) {
        VAR_3.vals[VAR_7] = VAR_6.vals[VAR_7];
    }
    return VAR_3;
}
