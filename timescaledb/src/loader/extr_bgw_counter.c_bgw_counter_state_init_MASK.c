
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ total_workers; int mutex; } ;
typedef int CounterState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_5()
{
 bool VAR_4;

 FUNC_0(VAR_0, VAR_2);
 VAR_3 = FUNC_2(VAR_1, sizeof(CounterState), &VAR_4);
 if (!VAR_4)
 {
  FUNC_4(VAR_3, 0, sizeof(CounterState));
  FUNC_3(&VAR_3->mutex);
  VAR_3->total_workers = 0;
 }
 FUNC_1(VAR_0);
}
