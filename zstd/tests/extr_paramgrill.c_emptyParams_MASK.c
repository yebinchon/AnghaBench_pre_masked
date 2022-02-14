
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;
typedef size_t U32 ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static paramValues_t FUNC_0(void)
{
    U32 VAR_2;
    paramValues_t VAR_3;
    for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_3.vals[VAR_2] = VAR_1;
    }
    return VAR_3;
}
