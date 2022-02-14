
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int worker ;
struct TYPE_4__ {int bgw_flags; int bgw_function_name; int bgw_library_name; scalar_t__ bgw_notify_pid; int bgw_start_time; int bgw_restart_time; int bgw_name; } ;
typedef TYPE_1__ BackgroundWorker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;

extern void
FUNC_3(void)
{
 BackgroundWorker VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 FUNC_2(VAR_6.bgw_name, VAR_3, "TimescaleDB Background Worker Launcher");
 VAR_6.bgw_flags = VAR_1 | VAR_0;
 VAR_6.bgw_restart_time = VAR_2;







 VAR_6.bgw_start_time = VAR_4;
 VAR_6.bgw_notify_pid = 0;
 FUNC_2(VAR_6.bgw_library_name, VAR_3, VAR_5);
 FUNC_2(VAR_6.bgw_function_name, VAR_3, "ts_bgw_cluster_launcher_main");
 FUNC_0(&VAR_6);
}
