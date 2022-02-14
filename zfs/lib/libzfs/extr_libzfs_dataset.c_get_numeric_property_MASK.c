
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfs_prop_t ;
struct TYPE_11__ {void* dds_redacted; void* dds_inconsistent; void* dds_num_clones; } ;
struct TYPE_12__ {scalar_t__ zfs_type; char* zfs_name; char* zfs_mntopts; int * zfs_hdl; TYPE_1__ zfs_dmustats; void* zfs_mntcheck; int zfs_head_type; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_13__ {char* member_0; int zc_name; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef void* uint64_t ;
struct mnttab {char* mnt_mntopts; } ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (TYPE_2__*,int,char**) ;
 int FUNC_2 (struct mnttab*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,struct mnttab*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,void**) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*,int **) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,int ,void*) ;
 char* FUNC_20 (int *,char*) ;

__attribute__((used)) static int
FUNC_21(zfs_handle_t *VAR_24, zfs_prop_t VAR_25, zprop_source_t *VAR_26,
    char **VAR_27, uint64_t *VAR_28)
{
 zfs_cmd_t VAR_29 = {"\0"};
 nvlist_t *VAR_30 = ((void*)0);
 struct mnttab VAR_31;
 char *VAR_32 = ((void*)0);
 char *VAR_33 = ((void*)0);
 boolean_t VAR_34 = FUNC_13(VAR_24);

 *VAR_27 = ((void*)0);





 if (VAR_24->zfs_type == VAR_21 &&
     !FUNC_19(VAR_25, VAR_24->zfs_head_type, VAR_1)) {
  *VAR_28 = FUNC_14(VAR_25);
  return (-1);
 }

 switch (VAR_25) {
 case 153:
  VAR_32 = VAR_3;
  VAR_33 = VAR_7;
  break;

 case 136:
  VAR_32 = VAR_14;
  VAR_33 = VAR_11;
  break;

 case 150:
  VAR_32 = VAR_4;
  VAR_33 = VAR_8;
  break;

 case 149:
  VAR_32 = VAR_5;
  VAR_33 = VAR_9;
  break;

 case 140:
  VAR_32 = VAR_15;
  VAR_33 = VAR_16;
  break;

 case 134:
  VAR_32 = VAR_17;
  VAR_33 = VAR_12;
  break;

 case 128:
  VAR_32 = VAR_18;
  VAR_33 = VAR_13;
  break;

 case 144:
  VAR_32 = VAR_6;
  VAR_33 = VAR_10;
  break;

 default:
  break;
 }







 if (!VAR_24->zfs_mntcheck &&
     (VAR_32 != ((void*)0) || VAR_25 == 145)) {
  libzfs_handle_t *VAR_35 = VAR_24->zfs_hdl;
  struct mnttab VAR_36;

  if (FUNC_3(VAR_35, VAR_24->zfs_name, &VAR_36) == 0) {
   VAR_24->zfs_mntopts = FUNC_20(VAR_35,
       VAR_36.mnt_mntopts);
   if (VAR_24->zfs_mntopts == ((void*)0))
    return (-1);
  }

  VAR_24->zfs_mntcheck = VAR_1;
 }

 if (VAR_24->zfs_mntopts == ((void*)0))
  VAR_31.mnt_mntopts = "";
 else
  VAR_31.mnt_mntopts = VAR_24->zfs_mntopts;

 switch (VAR_25) {
 case 153:
 case 136:
 case 150:
 case 149:
 case 140:
 case 134:
 case 128:
 case 144:
  *VAR_28 = FUNC_1(VAR_24, VAR_25, VAR_27);

  if (VAR_34)
   break;

  if (FUNC_2(&VAR_31, VAR_32) && !*VAR_28) {
   *VAR_28 = VAR_1;
   if (VAR_26)
    *VAR_26 = VAR_23;
  } else if (FUNC_2(&VAR_31, VAR_33) && *VAR_28) {
   *VAR_28 = VAR_0;
   if (VAR_26)
    *VAR_26 = VAR_23;
  }
  break;

 case 152:
 case 129:
 case 141:
 case 138:
 case 135:
 case 137:
 case 147:
 case 132:
 case 148:
 case 133:
  *VAR_28 = FUNC_1(VAR_24, VAR_25, VAR_27);

  if (*VAR_27 == ((void*)0)) {

   *VAR_27 = VAR_24->zfs_name;
  }
  break;

 case 145:
  *VAR_28 = (VAR_24->zfs_mntopts != ((void*)0));
  break;

 case 142:
  *VAR_28 = VAR_24->zfs_dmustats.dds_num_clones;
  break;

 case 130:
 case 143:
 case 131:
 case 151:
  if (FUNC_7(VAR_24->zfs_hdl, &VAR_29, 0) != 0)
   return (-1);
  (void) FUNC_6(VAR_29.zc_name, VAR_24->zfs_name, sizeof (VAR_29.zc_name));
  if (FUNC_12(VAR_24->zfs_hdl, VAR_20, &VAR_29)) {
   FUNC_8(&VAR_29);
   if (VAR_25 == 130 &&
       VAR_24->zfs_type == VAR_22)
    *VAR_28 = FUNC_14(VAR_25);
   return (-1);
  }
  if (FUNC_9(VAR_24->zfs_hdl, &VAR_29, &VAR_30) != 0 ||
      FUNC_5(VAR_30, FUNC_18(VAR_25),
      VAR_28) != 0) {
   FUNC_8(&VAR_29);
   return (-1);
  }
  FUNC_4(VAR_30);
  FUNC_8(&VAR_29);
  break;

 case 146:
  *VAR_28 = VAR_24->zfs_dmustats.dds_inconsistent;
  break;

 case 139:
  *VAR_28 = VAR_24->zfs_dmustats.dds_redacted;
  break;

 default:
  switch (FUNC_15(VAR_25)) {
  case 155:
  case 156:
   *VAR_28 = FUNC_1(VAR_24, VAR_25, VAR_27);







   if (FUNC_16(VAR_25) &&
       !FUNC_17(VAR_25) &&
       *VAR_27 != ((void*)0) && (*VAR_27)[0] == '\0') {
    *VAR_27 = ((void*)0);
    return (-1);
   }
   break;

  case 154:
  default:
   FUNC_11(VAR_24->zfs_hdl, FUNC_0(VAR_19,
       "cannot get non-numeric property"));
   return (FUNC_10(VAR_24->zfs_hdl, VAR_2,
       FUNC_0(VAR_19, "internal error")));
  }
 }

 return (0);
}
