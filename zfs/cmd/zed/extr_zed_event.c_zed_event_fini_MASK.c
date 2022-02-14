
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {int zevent_fd; int * zfs_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 () ;

void
FUNC_7(struct zed_conf *VAR_4)
{
 if (!VAR_4)
  FUNC_4("Failed zed_event_fini: %s", FUNC_2(VAR_0));

 FUNC_3();
 FUNC_6();

 if (VAR_4->zevent_fd >= 0) {
  if (FUNC_0(VAR_4->zevent_fd) < 0)
   FUNC_5(VAR_1, "Failed to close \"%s\": %s",
       VAR_2, FUNC_2(VAR_3));

  VAR_4->zevent_fd = -1;
 }
 if (VAR_4->zfs_hdl) {
  FUNC_1(VAR_4->zfs_hdl);
  VAR_4->zfs_hdl = ((void*)0);
 }
}
