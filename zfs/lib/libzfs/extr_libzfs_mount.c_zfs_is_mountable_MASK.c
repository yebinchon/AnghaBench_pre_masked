
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zprop_source_t ;
struct TYPE_5__ {int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int sourceloc ;
typedef int boolean_t ;


 int B_FALSE ;
 int B_TRUE ;
 scalar_t__ GLOBAL_ZONEID ;
 int MAXNAMELEN ;
 int MS_FORCE ;
 scalar_t__ ZFS_CANMOUNT_OFF ;
 int ZFS_MOUNTPOINT_LEGACY ;
 int ZFS_MOUNTPOINT_NONE ;
 int ZFS_PROP_CANMOUNT ;
 int ZFS_PROP_MOUNTPOINT ;
 int ZFS_PROP_REDACTED ;
 int ZFS_PROP_ZONED ;
 scalar_t__ getzoneid () ;
 scalar_t__ strcmp (char*,int ) ;
 int verify (int) ;
 scalar_t__ zfs_prop_get (TYPE_1__*,int ,char*,size_t,int *,char*,int,int ) ;
 scalar_t__ zfs_prop_get_int (TYPE_1__*,int ) ;
 int zfs_prop_valid_for_type (int ,int ,int ) ;

boolean_t
zfs_is_mountable(zfs_handle_t *zhp, char *buf, size_t buflen,
    zprop_source_t *source, int flags)
{
 char sourceloc[MAXNAMELEN];
 zprop_source_t sourcetype;

 if (!zfs_prop_valid_for_type(ZFS_PROP_MOUNTPOINT, zhp->zfs_type,
     B_FALSE))
  return (B_FALSE);

 verify(zfs_prop_get(zhp, ZFS_PROP_MOUNTPOINT, buf, buflen,
     &sourcetype, sourceloc, sizeof (sourceloc), B_FALSE) == 0);

 if (strcmp(buf, ZFS_MOUNTPOINT_NONE) == 0 ||
     strcmp(buf, ZFS_MOUNTPOINT_LEGACY) == 0)
  return (B_FALSE);

 if (zfs_prop_get_int(zhp, ZFS_PROP_CANMOUNT) == ZFS_CANMOUNT_OFF)
  return (B_FALSE);

 if (zfs_prop_get_int(zhp, ZFS_PROP_ZONED) &&
     getzoneid() == GLOBAL_ZONEID)
  return (B_FALSE);

 if (zfs_prop_get_int(zhp, ZFS_PROP_REDACTED) && !(flags & MS_FORCE))
  return (B_FALSE);

 if (source)
  *source = sourcetype;

 return (B_TRUE);
}
