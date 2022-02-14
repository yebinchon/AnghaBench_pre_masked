
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* FUNC_0 (int ,char*) ;

const char *
FUNC_1(int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return (FUNC_0(VAR_0, "The ZFS modules are not "
      "loaded.\nTry running '/sbin/modprobe zfs' as root "
      "to load them."));
 case 130:
  return (FUNC_0(VAR_0, "/dev/zfs and /proc/self/mounts "
      "are required.\nTry running 'udevadm trigger' and 'mount "
      "-t proc proc /proc' as root."));
 case 129:
  return (FUNC_0(VAR_0, "The ZFS modules cannot be "
      "auto-loaded.\nTry running '/sbin/modprobe zfs' as "
      "root to manually load them."));
 case 131:
  return (FUNC_0(VAR_0, "Permission denied the "
      "ZFS utilities must be run as root."));
 default:
  return (FUNC_0(VAR_0, "Failed to initialize the "
      "libzfs library."));
 }
}
