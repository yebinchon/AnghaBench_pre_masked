
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_time_interval; scalar_t__ integer_interval; int time_interval; } ;
typedef TYPE_1__ FormData_ts_interval ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

bool
FUNC_4(FormData_ts_interval *VAR_1, FormData_ts_interval *VAR_2)
{
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_1->is_time_interval != VAR_2->is_time_interval)
  return 0;

 if (VAR_1->is_time_interval &&
  !FUNC_1(FUNC_2(VAR_0,
            FUNC_3(&VAR_1->time_interval),
            FUNC_3(&VAR_2->time_interval))))
  return 0;

 if (!VAR_1->is_time_interval && VAR_1->integer_interval != VAR_2->integer_interval)
 {
  return 0;
 }

 return 1;
}
