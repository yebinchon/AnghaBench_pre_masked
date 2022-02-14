
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {int pid_fd; int state_fd; int zevent_fd; void* state_file; void* zedlet_dir; void* pid_file; void* conf_file; int * zfs_hdl; int * zedlets; int max_events; int min_events; int syslog_facility; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct zed_conf* FUNC_0 (int,int) ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

struct zed_conf *
FUNC_4(void)
{
 struct zed_conf *VAR_8;

 VAR_8 = FUNC_0(1, sizeof (*VAR_8));
 if (!VAR_8)
  goto nomem;

 VAR_8->syslog_facility = VAR_0;
 VAR_8->min_events = VAR_3;
 VAR_8->max_events = VAR_2;
 VAR_8->pid_fd = -1;
 VAR_8->zedlets = ((void*)0);
 VAR_8->state_fd = -1;
 VAR_8->zfs_hdl = ((void*)0);
 VAR_8->zevent_fd = -1;

 if (!(VAR_8->conf_file = FUNC_1(VAR_1)))
  goto nomem;

 if (!(VAR_8->pid_file = FUNC_1(VAR_4)))
  goto nomem;

 if (!(VAR_8->zedlet_dir = FUNC_1(VAR_6)))
  goto nomem;

 if (!(VAR_8->state_file = FUNC_1(VAR_5)))
  goto nomem;

 return (VAR_8);

nomem:
 FUNC_3("Failed to create conf: %s", FUNC_2(VAR_7));
 return (((void*)0));
}
