
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_11__ {char* member_0; int zc_cookie; int zc_name; int zc_value; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int pthread_t ;
typedef int errbuf ;
struct TYPE_12__ {int scripted; int classify; int timestamped; int outputfd; int datafd; scalar_t__ zerr; char* errbuf; int tosnap; int fromsnap; int member_0; } ;
typedef TYPE_3__ differ_info_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char const*,char const*,TYPE_3__*) ;
 int FUNC_7 (char*,int,char*) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ,int ,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ,TYPE_2__*) ;

int
FUNC_15(zfs_handle_t *VAR_14, int VAR_15, const char *VAR_16,
    const char *VAR_17, int VAR_18)
{
 zfs_cmd_t VAR_19 = {"\0"};
 char VAR_20[1024];
 differ_info_t VAR_21 = { 0 };
 pthread_t VAR_22;
 int VAR_23[2];
 int VAR_24;

 (void) FUNC_7(VAR_20, sizeof (VAR_20),
     FUNC_1(VAR_7, "zfs diff failed"));

 if (FUNC_6(VAR_14, VAR_16, VAR_17, &VAR_21)) {
  FUNC_11(&VAR_21);
  return (-1);
 }

 if (FUNC_2(VAR_23)) {
  FUNC_13(VAR_14->zfs_hdl, FUNC_8(VAR_13));
  FUNC_11(&VAR_21);
  return (FUNC_12(VAR_14->zfs_hdl, VAR_5, VAR_20));
 }

 VAR_21.scripted = (VAR_18 & VAR_9);
 VAR_21.classify = (VAR_18 & VAR_8);
 VAR_21.timestamped = (VAR_18 & VAR_10);

 VAR_21.outputfd = VAR_15;
 VAR_21.datafd = VAR_23[0];

 if (FUNC_4(&VAR_22, ((void*)0), VAR_12, &VAR_21)) {
  FUNC_13(VAR_14->zfs_hdl, FUNC_8(VAR_13));
  (void) FUNC_0(VAR_23[0]);
  (void) FUNC_0(VAR_23[1]);
  FUNC_11(&VAR_21);
  return (FUNC_12(VAR_14->zfs_hdl,
      VAR_6, VAR_20));
 }


 (void) FUNC_9(VAR_19.zc_value, VAR_21.fromsnap, FUNC_10(VAR_21.fromsnap) + 1);
 (void) FUNC_9(VAR_19.zc_name, VAR_21.tosnap, FUNC_10(VAR_21.tosnap) + 1);
 VAR_19.zc_cookie = VAR_23[1];

 VAR_24 = FUNC_14(VAR_14->zfs_hdl, VAR_11, &VAR_19);
 if (VAR_24 != 0) {
  (void) FUNC_7(VAR_20, sizeof (VAR_20),
      FUNC_1(VAR_7, "Unable to obtain diffs"));
  if (VAR_13 == VAR_0) {
   FUNC_13(VAR_14->zfs_hdl, FUNC_1(VAR_7,
       "\n   The sys_mount privilege or diff delegated "
       "permission is needed\n   to execute the "
       "diff ioctl"));
  } else if (VAR_13 == VAR_2) {
   FUNC_13(VAR_14->zfs_hdl, FUNC_1(VAR_7,
       "\n   Not an earlier snapshot from the same fs"));
  } else if (VAR_13 != VAR_1 || VAR_21.zerr == 0) {
   FUNC_13(VAR_14->zfs_hdl, FUNC_8(VAR_13));
  }
  (void) FUNC_0(VAR_23[1]);
  (void) FUNC_3(VAR_22);
  (void) FUNC_5(VAR_22, ((void*)0));
  FUNC_11(&VAR_21);
  if (VAR_21.zerr != 0 && VAR_21.zerr != VAR_1) {
   FUNC_13(VAR_14->zfs_hdl, FUNC_8(VAR_21.zerr));
   return (FUNC_12(VAR_14->zfs_hdl, VAR_3, VAR_21.errbuf));
  } else {
   return (FUNC_12(VAR_14->zfs_hdl, VAR_4, VAR_20));
  }
 }

 (void) FUNC_0(VAR_23[1]);
 (void) FUNC_5(VAR_22, ((void*)0));

 if (VAR_21.zerr != 0) {
  FUNC_13(VAR_14->zfs_hdl, FUNC_8(VAR_21.zerr));
  return (FUNC_12(VAR_14->zfs_hdl, VAR_3, VAR_21.errbuf));
 }
 FUNC_11(&VAR_21);
 return (0);
}
