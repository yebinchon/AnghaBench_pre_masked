
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* zfs_userspace_cb_t ) (void*,int ,int ,int ) ;
typedef scalar_t__ zfs_userquota_prop_t ;
struct TYPE_6__ {int zu_space; int zu_rid; int zu_domain; } ;
typedef TYPE_1__ zfs_useracct_t ;
struct TYPE_7__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_8__ {char* member_0; uintptr_t zc_nvlist_dst; int zc_nvlist_dst_size; int zc_name; scalar_t__ zc_objset_type; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_3__*) ;
 int FUNC_4 (int *,scalar_t__,char*) ;

int
FUNC_5(zfs_handle_t *VAR_12, zfs_userquota_prop_t VAR_13,
    zfs_userspace_cb_t VAR_14, void *VAR_15)
{
 zfs_cmd_t VAR_16 = {"\0"};
 zfs_useracct_t VAR_17[100];
 libzfs_handle_t *VAR_18 = VAR_12->zfs_hdl;
 int VAR_19;

 (void) FUNC_2(VAR_16.zc_name, VAR_12->zfs_name, sizeof (VAR_16.zc_name));

 VAR_16.zc_objset_type = VAR_13;
 VAR_16.zc_nvlist_dst = (uintptr_t)VAR_17;

 for (;;) {
  zfs_useracct_t *VAR_20 = VAR_17;

  VAR_16.zc_nvlist_dst_size = sizeof (VAR_17);
  if (FUNC_3(VAR_18, VAR_2, &VAR_16) != 0) {
   char VAR_21[1024];

   if ((VAR_11 == VAR_0 &&
       (VAR_13 == VAR_10 ||
       VAR_13 == VAR_4 ||
       VAR_13 == VAR_9 ||
       VAR_13 == VAR_3 ||
       VAR_13 == VAR_6 ||
       VAR_13 == VAR_5 ||
       VAR_13 == VAR_8 ||
       VAR_13 == VAR_7)))
    break;

   (void) FUNC_1(VAR_21, sizeof (VAR_21),
       FUNC_0(VAR_1,
       "cannot get used/quota for %s"), VAR_16.zc_name);
   return (FUNC_4(VAR_18, VAR_11, VAR_21));
  }
  if (VAR_16.zc_nvlist_dst_size == 0)
   break;

  while (VAR_16.zc_nvlist_dst_size > 0) {
   if ((VAR_19 = VAR_14(VAR_15, VAR_20->zu_domain, VAR_20->zu_rid,
       VAR_20->zu_space)) != 0)
    return (VAR_19);
   VAR_20++;
   VAR_16.zc_nvlist_dst_size -= sizeof (zfs_useracct_t);
  }
 }

 return (0);
}
