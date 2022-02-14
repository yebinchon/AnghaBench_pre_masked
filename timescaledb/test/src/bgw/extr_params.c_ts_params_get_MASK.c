
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; int params; } ;
typedef TYPE_1__ TestParamsWrapper ;
typedef int TestParams ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;

TestParams *
FUNC_7()
{
 TestParamsWrapper *VAR_0 = FUNC_6();
 TestParams *VAR_1;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_1 = FUNC_4(sizeof(TestParams));

 FUNC_1(&VAR_0->mutex);

 FUNC_3(VAR_1, &VAR_0->params, sizeof(TestParams));

 FUNC_2(&VAR_0->mutex);

 FUNC_5(VAR_0);

 return VAR_1;
}
