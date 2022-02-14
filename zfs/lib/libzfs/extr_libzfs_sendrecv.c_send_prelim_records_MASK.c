
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int member_0; } ;
struct TYPE_15__ {TYPE_1__ member_0; } ;
typedef TYPE_4__ zio_cksum_t ;
struct TYPE_16__ {scalar_t__ zfs_type; int zfs_hdl; int zfs_name; } ;
typedef TYPE_5__ zfs_handle_t ;
typedef int nvlist_t ;
typedef int errbuf ;
struct TYPE_13__ {int drr_toname; int drr_versioninfo; int drr_magic; } ;
struct TYPE_14__ {TYPE_2__ drr_begin; } ;
struct TYPE_17__ {size_t drr_payloadlen; TYPE_3__ drr_u; int drr_type; int member_0; } ;
typedef TYPE_6__ dmu_replay_record_t ;
typedef scalar_t__ boolean_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_6__*,char*,size_t,TYPE_4__*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *,char*,char const*) ;
 int * FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,char const*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int **,int **) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char**,size_t*,int ,int ) ;
 int FUNC_14 (int,TYPE_4__*) ;
 int FUNC_15 (char*,int,char*,char*,...) ;
 char* FUNC_16 (char*,char) ;
 int FUNC_17 (int) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (int ,int ,char*) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (TYPE_5__*,int ) ;

__attribute__((used)) static int
FUNC_22(zfs_handle_t *VAR_12, const char *VAR_13, int VAR_14,
    boolean_t VAR_15, boolean_t VAR_16, boolean_t VAR_17,
    boolean_t VAR_18, boolean_t VAR_19, boolean_t VAR_20, boolean_t VAR_21,
    boolean_t VAR_22, boolean_t VAR_23, boolean_t VAR_24,
    nvlist_t **VAR_25, avl_tree_t **VAR_26)
{
 int VAR_27 = 0;
 char *VAR_28 = ((void*)0);
 size_t VAR_29 = 0;
 zio_cksum_t VAR_30 = { {0} };
 int VAR_31 = 0;

 char VAR_32[VAR_8];

 char *VAR_33 = "";

 char VAR_34[1024];
 (void) FUNC_15(VAR_34, sizeof (VAR_34), FUNC_3(VAR_7,
     "warning: cannot send '%s'"), VAR_12->zfs_name);
 if (VAR_12->zfs_type == VAR_10 && FUNC_21(VAR_12,
     VAR_9) >= VAR_11) {
  VAR_31 |= VAR_1;
 }

 if (VAR_22)
  VAR_31 |= VAR_0;

 (void) FUNC_18(VAR_32, VAR_12->zfs_name, VAR_8);
 char *VAR_35 = FUNC_16(VAR_32, '@');
 if (VAR_35 != ((void*)0)) {
  *VAR_35 = '\0';
  VAR_33 = VAR_35 + 1;
 }

 if (VAR_15) {
  nvlist_t *VAR_36 = FUNC_8();
  nvlist_t *VAR_37 = ((void*)0);

  if (VAR_13 != ((void*)0))
   FUNC_7(VAR_36, "fromsnap", VAR_13);
  FUNC_7(VAR_36, "tosnap", VAR_33);
  if (!VAR_16)
   FUNC_5(VAR_36, "not_recursive");

  if (VAR_19) {
   FUNC_2(FUNC_11(VAR_36, "raw"));
  }

  if ((VAR_27 = FUNC_10(VAR_12->zfs_hdl, VAR_32,
      VAR_13, VAR_33, VAR_16, VAR_19, VAR_24, VAR_20, VAR_17,
      VAR_21, VAR_22, VAR_23, &VAR_37, VAR_26)) != 0) {
   return (FUNC_19(VAR_12->zfs_hdl, VAR_5,
       VAR_34));
  }
  FUNC_6(VAR_36, "fss", VAR_37);
  FUNC_2(FUNC_13(VAR_36, &VAR_28, &VAR_29, VAR_6,
      0));
  if (VAR_25 != ((void*)0)) {
   *VAR_25 = VAR_37;
  } else {
   FUNC_12(VAR_37);
  }
  FUNC_12(VAR_36);
 }

 if (!VAR_18) {
  dmu_replay_record_t VAR_38 = { 0 };

  VAR_38.drr_type = VAR_4;
  VAR_38.drr_u.drr_begin.drr_magic = VAR_2;
  FUNC_1(VAR_38.drr_u.drr_begin.
      drr_versioninfo, VAR_3);
  FUNC_0(VAR_38.drr_u.drr_begin.
      drr_versioninfo, VAR_31);
  if (FUNC_15(VAR_38.drr_u.drr_begin.drr_toname,
      sizeof (VAR_38.drr_u.drr_begin.drr_toname), "%s@%s", VAR_32,
      VAR_33) >= sizeof (VAR_38.drr_u.drr_begin.drr_toname)) {
   return (FUNC_19(VAR_12->zfs_hdl, VAR_5,
       VAR_34));
  }
  VAR_38.drr_payloadlen = VAR_29;

  VAR_27 = FUNC_4(&VAR_38, VAR_28, VAR_29, &VAR_30, VAR_14);
  FUNC_9(VAR_28);
  if (VAR_27 != 0) {
   FUNC_20(VAR_12->zfs_hdl, FUNC_17(VAR_27));
   return (FUNC_19(VAR_12->zfs_hdl, VAR_5,
       VAR_34));
  }
  VAR_27 = FUNC_14(VAR_14, &VAR_30);
  if (VAR_27 != 0) {
   FUNC_20(VAR_12->zfs_hdl, FUNC_17(VAR_27));
   return (FUNC_19(VAR_12->zfs_hdl, VAR_5,
       VAR_34));
  }
 }
 return (0);
}
