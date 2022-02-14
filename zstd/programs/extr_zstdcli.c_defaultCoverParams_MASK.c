
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int params ;
struct TYPE_4__ {int d; int steps; double splitPoint; int shrinkDictMaxRegression; scalar_t__ shrinkDict; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ZDICT_cover_params_t FUNC_1(void)
{
    ZDICT_cover_params_t VAR_1;
    FUNC_0(&VAR_1, 0, sizeof(VAR_1));
    VAR_1.d = 8;
    VAR_1.steps = 4;
    VAR_1.splitPoint = 1.0;
    VAR_1.shrinkDict = 0;
    VAR_1.shrinkDictMaxRegression = VAR_0;
    return VAR_1;
}
