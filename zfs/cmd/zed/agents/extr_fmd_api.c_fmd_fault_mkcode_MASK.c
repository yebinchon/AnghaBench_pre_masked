
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,char**) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(nvlist_t *VAR_1)
{
 char *VAR_2, *VAR_3 = "-";




 if (FUNC_0(VAR_1, VAR_0, &VAR_2) == 0) {
  if (FUNC_1(VAR_2, "fault.fs.zfs.vdev.io") == 0)
   VAR_3 = "ZFS-8000-FD";
  else if (FUNC_1(VAR_2, "fault.fs.zfs.vdev.checksum") == 0)
   VAR_3 = "ZFS-8000-GH";
  else if (FUNC_1(VAR_2, "fault.fs.zfs.io_failure_wait") == 0)
   VAR_3 = "ZFS-8000-HC";
  else if (FUNC_1(VAR_2, "fault.fs.zfs.io_failure_continue") == 0)
   VAR_3 = "ZFS-8000-JQ";
  else if (FUNC_1(VAR_2, "fault.fs.zfs.log_replay") == 0)
   VAR_3 = "ZFS-8000-K4";
  else if (FUNC_1(VAR_2, "fault.fs.zfs.pool") == 0)
   VAR_3 = "ZFS-8000-CS";
  else if (FUNC_1(VAR_2, "fault.fs.zfs.device") == 0)
   VAR_3 = "ZFS-8000-D3";

 }
 return (VAR_3);
}
