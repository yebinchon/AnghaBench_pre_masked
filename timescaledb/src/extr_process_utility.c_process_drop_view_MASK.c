
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int view_name; int schema; } ;
typedef TYPE_1__ EventTriggerDropView ;
typedef int ContinuousAgg ;


 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(EventTriggerDropView *VAR_0)
{
 ContinuousAgg *VAR_1;

 VAR_1 = FUNC_1(VAR_0->schema, VAR_0->view_name);
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1, VAR_0->schema, VAR_0->view_name);
}
