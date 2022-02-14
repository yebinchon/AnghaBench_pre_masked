
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mock_wait_type; } ;
struct TYPE_6__ {int mutex; TYPE_1__ params; } ;
typedef TYPE_2__ TestParamsWrapper ;
typedef int MockWaitType ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(MockWaitType VAR_0)
{
 TestParamsWrapper *VAR_1 = FUNC_4();

 FUNC_0(VAR_1 != ((void*)0));

 FUNC_1(&VAR_1->mutex);

 VAR_1->params.mock_wait_type = VAR_0;

 FUNC_2(&VAR_1->mutex);

 FUNC_3(VAR_1);
}
