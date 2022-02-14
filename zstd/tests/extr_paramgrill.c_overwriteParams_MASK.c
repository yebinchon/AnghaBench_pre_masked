
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* vals; } ;
typedef TYPE_1__ paramValues_t ;
typedef size_t U32 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static paramValues_t
FUNC_0(paramValues_t VAR_2, const paramValues_t VAR_3)
{
    U32 VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if(VAR_3.vals[VAR_4] != VAR_1) {
            VAR_2.vals[VAR_4] = VAR_3.vals[VAR_4];
        }
    }
    return VAR_2;
}
