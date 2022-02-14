
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int worker ;
typedef int VirtualTransactionId ;
struct TYPE_4__ {int bgw_flags; int bgw_extra; int bgw_main_arg; int bgw_notify_pid; int bgw_function_name; int bgw_library_name; int bgw_start_time; int bgw_restart_time; int bgw_name; } ;
typedef int Oid ;
typedef int BackgroundWorkerHandle ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static bool
FUNC_5(Oid VAR_8, VirtualTransactionId VAR_9, BackgroundWorkerHandle **VAR_10)
{
 BackgroundWorker VAR_11;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 FUNC_4(VAR_11.bgw_name, VAR_3, "TimescaleDB Background Worker Scheduler");
 VAR_11.bgw_flags = VAR_1 | VAR_0;
 VAR_11.bgw_restart_time = VAR_4;
 VAR_11.bgw_start_time = VAR_5;
 FUNC_4(VAR_11.bgw_library_name, VAR_3, VAR_6);
 FUNC_4(VAR_11.bgw_function_name, VAR_3, VAR_2);
 VAR_11.bgw_notify_pid = VAR_7;
 VAR_11.bgw_main_arg = FUNC_0(VAR_8);
 FUNC_2(VAR_11.bgw_extra, &VAR_9, sizeof(VirtualTransactionId));

 return FUNC_1(&VAR_11, VAR_10);
}
