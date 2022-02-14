
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {int state_fd; int pid_fd; int * zedlets; struct zed_conf* state_file; struct zed_conf* zedlet_dir; struct zed_conf* pid_file; struct zed_conf* conf_file; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct zed_conf*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct zed_conf*) ;
 int FUNC_4 (int ,char*,struct zed_conf*,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct zed_conf *VAR_3)
{
 if (!VAR_3)
  return;

 if (VAR_3->state_fd >= 0) {
  if (FUNC_0(VAR_3->state_fd) < 0)
   FUNC_4(VAR_1,
       "Failed to close state file \"%s\": %s",
       VAR_3->state_file, FUNC_2(VAR_2));
  VAR_3->state_fd = -1;
 }
 if (VAR_3->pid_file) {
  if ((FUNC_3(VAR_3->pid_file) < 0) && (VAR_2 != VAR_0))
   FUNC_4(VAR_1,
       "Failed to remove PID file \"%s\": %s",
       VAR_3->pid_file, FUNC_2(VAR_2));
 }
 if (VAR_3->pid_fd >= 0) {
  if (FUNC_0(VAR_3->pid_fd) < 0)
   FUNC_4(VAR_1,
       "Failed to close PID file \"%s\": %s",
       VAR_3->pid_file, FUNC_2(VAR_2));
  VAR_3->pid_fd = -1;
 }
 if (VAR_3->conf_file) {
  FUNC_1(VAR_3->conf_file);
  VAR_3->conf_file = ((void*)0);
 }
 if (VAR_3->pid_file) {
  FUNC_1(VAR_3->pid_file);
  VAR_3->pid_file = ((void*)0);
 }
 if (VAR_3->zedlet_dir) {
  FUNC_1(VAR_3->zedlet_dir);
  VAR_3->zedlet_dir = ((void*)0);
 }
 if (VAR_3->state_file) {
  FUNC_1(VAR_3->state_file);
  VAR_3->state_file = ((void*)0);
 }
 if (VAR_3->zedlets) {
  FUNC_5(VAR_3->zedlets);
  VAR_3->zedlets = ((void*)0);
 }
 FUNC_1(VAR_3);
}
