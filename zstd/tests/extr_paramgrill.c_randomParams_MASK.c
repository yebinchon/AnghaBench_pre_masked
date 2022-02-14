
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_3__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,int) ;
 int* VAR_2 ;

__attribute__((used)) static paramValues_t FUNC_2(void)
{
    varInds_t VAR_3; paramValues_t VAR_4;
    for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_4.vals[VAR_3] = FUNC_1(VAR_3, (int)(FUNC_0(&VAR_1) % VAR_2[VAR_3]));
    }
    return VAR_4;
}
