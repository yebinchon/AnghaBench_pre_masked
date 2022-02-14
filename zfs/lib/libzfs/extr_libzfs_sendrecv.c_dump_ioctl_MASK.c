
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zfs_type; int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_7__ {char* member_0; int zc_cookie; int zc_flags; int zc_value; int zc_name; scalar_t__ zc_fromobj; int zc_sendobj; scalar_t__ zc_obj; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;
typedef scalar_t__ boolean_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int *,char*,char const*) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,int ) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *,int ,scalar_t__) ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (int *,char*,...) ;
 scalar_t__ FUNC_14 (int *,int ,TYPE_2__*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (int *,int,char*) ;

__attribute__((used)) static int
FUNC_17(zfs_handle_t *VAR_10, const char *VAR_11, uint64_t VAR_12,
    boolean_t VAR_13, int VAR_14, enum lzc_send_flags VAR_15,
    nvlist_t *VAR_16)
{
 zfs_cmd_t VAR_17 = {"\0"};
 libzfs_handle_t *VAR_18 = VAR_10->zfs_hdl;
 nvlist_t *VAR_19;

 FUNC_1(VAR_10->zfs_type == VAR_8);
 FUNC_1(VAR_12 == 0 || !VAR_13);

 (void) FUNC_10(VAR_17.zc_name, VAR_10->zfs_name, sizeof (VAR_17.zc_name));
 VAR_17.zc_cookie = VAR_14;
 VAR_17.zc_obj = VAR_13;
 VAR_17.zc_sendobj = FUNC_15(VAR_10, VAR_7);
 VAR_17.zc_fromobj = VAR_12;
 VAR_17.zc_flags = VAR_15;

 FUNC_0(0 == FUNC_6(&VAR_19, VAR_4, 0));
 if (VAR_11 && VAR_11[0] != '\0') {
  FUNC_0(0 == FUNC_4(VAR_19,
      "fromsnap", VAR_11));
 }

 if (FUNC_14(VAR_10->zfs_hdl, VAR_6, &VAR_17) != 0) {
  char VAR_20[1024];
  (void) FUNC_8(VAR_20, sizeof (VAR_20), FUNC_2(VAR_5,
      "warning: cannot send '%s'"), VAR_10->zfs_name);

  FUNC_0(0 == FUNC_5(VAR_19, "error", VAR_9));
  if (VAR_16) {
   FUNC_0(0 == FUNC_3(VAR_16,
       VAR_10->zfs_name, VAR_19));
  }
  FUNC_7(VAR_19);

  switch (VAR_9) {
  case 128:
   FUNC_13(VAR_18, FUNC_2(VAR_5,
       "not an earlier snapshot from the same fs"));
   return (FUNC_12(VAR_18, VAR_1, VAR_20));

  case 141:
   FUNC_13(VAR_18, FUNC_2(VAR_5,
       "source key must be loaded"));
   return (FUNC_12(VAR_18, VAR_2, VAR_20));

  case 136:
   if (FUNC_11(VAR_18, VAR_17.zc_name,
       VAR_8)) {
    FUNC_13(VAR_18, FUNC_2(VAR_5,
        "incremental source (@%s) does not exist"),
        VAR_17.zc_value);
   }
   return (FUNC_12(VAR_18, VAR_3, VAR_20));

  case 140:
  case 138:
  case 137:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 139:
  case 129:
   FUNC_13(VAR_18, FUNC_9(VAR_9));
   return (FUNC_12(VAR_18, VAR_0, VAR_20));

  default:
   return (FUNC_16(VAR_18, VAR_9, VAR_20));
  }
 }

 if (VAR_16)
  FUNC_0(0 == FUNC_3(VAR_16, VAR_10->zfs_name, VAR_19));
 FUNC_7(VAR_19);

 return (0);
}
