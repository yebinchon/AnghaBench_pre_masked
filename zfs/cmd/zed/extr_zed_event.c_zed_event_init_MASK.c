
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zed_conf {scalar_t__ zevent_fd; int zfs_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct zed_conf *VAR_4)
{
 if (!VAR_4)
  FUNC_4("Failed zed_event_init: %s", FUNC_2(VAR_0));

 VAR_4->zfs_hdl = FUNC_0();
 if (!VAR_4->zfs_hdl)
  FUNC_4("Failed to initialize libzfs");

 VAR_4->zevent_fd = FUNC_1(VAR_2, VAR_1);
 if (VAR_4->zevent_fd < 0)
  FUNC_4("Failed to open \"%s\": %s",
      VAR_2, FUNC_2(VAR_3));

 FUNC_5(VAR_4->zfs_hdl);

 if (FUNC_3() != 0)
  FUNC_4("Failed to initialize disk events");
}
