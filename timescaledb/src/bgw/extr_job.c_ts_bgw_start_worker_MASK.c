
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bgw_flags; int bgw_extra; int bgw_function_name; int bgw_library_name; int bgw_name; int bgw_main_arg; int bgw_notify_pid; int bgw_restart_time; int bgw_start_time; } ;
typedef int BackgroundWorkerHandle ;
typedef TYPE_1__ BackgroundWorker ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int FUNC_3 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;
 char const* FUNC_5 () ;

BackgroundWorkerHandle *
FUNC_6(const char *VAR_8, const char *VAR_9, const char *VAR_10)
{
 BackgroundWorker VAR_11 = {
  .bgw_flags = VAR_1 | VAR_0,
  .bgw_start_time = VAR_5,
  .bgw_restart_time = VAR_4,
  .bgw_notify_pid = VAR_7,
  .bgw_main_arg = FUNC_1(VAR_6),
 };
 BackgroundWorkerHandle *VAR_12 = ((void*)0);

 FUNC_3(VAR_11.bgw_name, VAR_9, VAR_3);
 FUNC_3(VAR_11.bgw_library_name, FUNC_5(), VAR_3);
 FUNC_3(VAR_11.bgw_function_name, VAR_8, VAR_3);

 FUNC_0(FUNC_4(VAR_10) < VAR_2);
 FUNC_3(VAR_11.bgw_extra, VAR_10, VAR_2);

 if (!FUNC_2(&VAR_11, &VAR_12))
  return ((void*)0);
 return VAR_12;
}
