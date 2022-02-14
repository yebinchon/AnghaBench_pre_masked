
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ zfs_userquota_prop_t ;
typedef int zfs_sort_column_t ;
typedef int uu_avl_t ;
typedef int uu_avl_pool_t ;
typedef int uu_avl_index_t ;
struct TYPE_11__ {scalar_t__ member_1; int * member_0; } ;
typedef TYPE_1__ us_sort_info_t ;
struct TYPE_12__ {int * usn_nvl; int usn_avlnode; } ;
typedef TYPE_2__ us_node_t ;
struct TYPE_13__ {scalar_t__ cb_prop; size_t* cb_width; scalar_t__ cb_nicenum; scalar_t__ cb_sid2posix; scalar_t__ cb_numname; int * cb_sortcol; int * cb_avl; int * cb_avl_pool; } ;
typedef TYPE_3__ us_cbdata_t ;
typedef int uint64_t ;
typedef int uid_t ;
typedef int u_longlong_t ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int sizebuf ;
typedef int sid ;
typedef int nvlist_t ;
typedef int * directory_error_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,char**,int*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct group* FUNC_3 (int) ;
 struct passwd* FUNC_4 (int) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,char*,int ) ;
 scalar_t__ FUNC_8 (int *,char*,char*) ;
 scalar_t__ FUNC_9 (int *,char*,unsigned int) ;
 scalar_t__ FUNC_10 (int *,char*,int) ;
 scalar_t__ FUNC_11 (int **,int ,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int) ;
 int FUNC_15 (char*,int ,int*) ;
 size_t FUNC_16 (char*,int,char*,...) ;
 size_t FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 char* FUNC_19 (unsigned int) ;
 TYPE_2__* FUNC_20 (int *,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_21 (int *,TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*,int *,int *) ;
 int FUNC_23 (int,char*,int) ;
 int FUNC_24 (int,char*,int) ;
 scalar_t__ FUNC_25 (scalar_t__) ;
 scalar_t__ FUNC_26 (scalar_t__) ;

__attribute__((used)) static int
FUNC_27(void *VAR_21, const char *VAR_22, uid_t VAR_23, uint64_t VAR_24)
{
 us_cbdata_t *VAR_25 = (us_cbdata_t *)VAR_21;
 zfs_userquota_prop_t VAR_26 = VAR_25->cb_prop;
 char *VAR_27 = ((void*)0);
 char *VAR_28;
 char VAR_29[32];
 us_node_t *VAR_30;
 uu_avl_pool_t *VAR_31 = VAR_25->cb_avl_pool;
 uu_avl_t *VAR_32 = VAR_25->cb_avl;
 uu_avl_index_t VAR_33;
 nvlist_t *VAR_34;
 us_node_t *VAR_35;
 zfs_sort_column_t *VAR_36 = VAR_25->cb_sortcol;
 unsigned VAR_37 = 0;
 const char *VAR_38;
 size_t VAR_39;
 size_t VAR_40;
 size_t VAR_41;
 int VAR_42, VAR_43, VAR_44;
 us_sort_info_t VAR_45 = { VAR_36, VAR_25->cb_numname };
 boolean_t VAR_46 = VAR_0;

 if (FUNC_11(&VAR_34, VAR_3, 0) != 0)
  FUNC_6();
 VAR_30 = FUNC_14(sizeof (us_node_t));
 FUNC_22(VAR_30, &VAR_30->usn_avlnode, VAR_31);
 VAR_30->usn_nvl = VAR_34;

 if (VAR_22 != ((void*)0) && VAR_22[0] != '\0') {
  FUNC_13(VAR_34);
  FUNC_2(VAR_30);

  return (-1);

 }

 if (VAR_25->cb_sid2posix || VAR_22 == ((void*)0) || VAR_22[0] == '\0') {

  if (FUNC_25(VAR_26)) {
   VAR_37 = VAR_5;
   if (!VAR_25->cb_numname) {
    struct group *VAR_47;

    if ((VAR_47 = FUNC_3(VAR_23)) != ((void*)0))
     VAR_27 = VAR_47->gr_name;
   }
  } else if (FUNC_26(VAR_26)) {
   VAR_37 = VAR_6;
   if (!VAR_25->cb_numname) {
    struct passwd *VAR_48;

    if ((VAR_48 = FUNC_4(VAR_23)) != ((void*)0))
     VAR_27 = VAR_48->pw_name;
   }
  } else {
   VAR_37 = VAR_4;
  }
 }






 if (VAR_25->cb_sid2posix &&
     FUNC_7(VAR_34, "smbentity", VAR_46) != 0)
  FUNC_6();


 VAR_38 = FUNC_19(VAR_37);
 VAR_40 = FUNC_17(FUNC_5(VAR_38));
 VAR_42 = FUNC_18("type");
 if (VAR_40 > VAR_25->cb_width[VAR_42])
  VAR_25->cb_width[VAR_42] = VAR_40;
 if (FUNC_9(VAR_34, "type", VAR_37) != 0)
  FUNC_6();


 if ((VAR_25->cb_numname && VAR_25->cb_sid2posix) || VAR_27 == ((void*)0)) {
  if (FUNC_10(VAR_34, "name", VAR_23) != 0)
   FUNC_6();
  VAR_39 = FUNC_16(((void*)0), 0, "%u", VAR_23);
 } else {
  if (FUNC_8(VAR_34, "name", VAR_27) != 0)
   FUNC_6();
  VAR_39 = FUNC_17(VAR_27);
 }
 VAR_43 = FUNC_18("name");
 if (VAR_43 >= 0 && VAR_39 > VAR_25->cb_width[VAR_43])
  VAR_25->cb_width[VAR_43] = VAR_39;





 if ((VAR_35 = FUNC_20(VAR_32, VAR_30, &VAR_45, &VAR_33)) == ((void*)0)) {
  FUNC_21(VAR_32, VAR_30, VAR_33);
 } else {
  FUNC_13(VAR_34);
  FUNC_2(VAR_30);
  VAR_30 = VAR_35;
  VAR_34 = VAR_30->usn_nvl;
 }


 if (VAR_25->cb_nicenum) {
  if (VAR_26 == VAR_20 || VAR_26 == VAR_12 ||
      VAR_26 == VAR_19 || VAR_26 == VAR_11 ||
      VAR_26 == VAR_16 ||
      VAR_26 == VAR_15) {
   FUNC_23(VAR_24, VAR_29, sizeof (VAR_29));
  } else {
   FUNC_24(VAR_24, VAR_29, sizeof (VAR_29));
  }
 } else {
  (void) FUNC_16(VAR_29, sizeof (VAR_29), "%llu",
      (u_longlong_t)VAR_24);
 }
 VAR_41 = FUNC_17(VAR_29);
 if (VAR_26 == VAR_20 || VAR_26 == VAR_12 ||
     VAR_26 == VAR_16) {
  VAR_28 = "used";
  if (!FUNC_12(VAR_34, "quota"))
   (void) FUNC_10(VAR_34, "quota", 0);
 } else if (VAR_26 == VAR_19 || VAR_26 == VAR_11 ||
     VAR_26 == VAR_15) {
  VAR_28 = "quota";
  if (!FUNC_12(VAR_34, "used"))
   (void) FUNC_10(VAR_34, "used", 0);
 } else if (VAR_26 == VAR_18 ||
     VAR_26 == VAR_10 || VAR_26 == VAR_14) {
  VAR_28 = "objused";
  if (!FUNC_12(VAR_34, "objquota"))
   (void) FUNC_10(VAR_34, "objquota", 0);
 } else if (VAR_26 == VAR_17 ||
     VAR_26 == VAR_9 ||
     VAR_26 == VAR_13) {
  VAR_28 = "objquota";
  if (!FUNC_12(VAR_34, "objused"))
   (void) FUNC_10(VAR_34, "objused", 0);
 } else {
  return (-1);
 }
 VAR_44 = FUNC_18(VAR_28);
 if (VAR_44 >= 0 && VAR_41 > VAR_25->cb_width[VAR_44])
  VAR_25->cb_width[VAR_44] = VAR_41;

 if (FUNC_10(VAR_34, VAR_28, VAR_24) != 0)
  FUNC_6();

 return (0);
}
