
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int member_0; } ;
struct TYPE_20__ {TYPE_1__ member_0; } ;
typedef TYPE_3__ zio_cksum_t ;
typedef int uint64_t ;
struct drr_begin {scalar_t__ drr_magic; scalar_t__ drr_versioninfo; scalar_t__ drr_creation_time; scalar_t__ drr_type; scalar_t__ drr_flags; scalar_t__ drr_toguid; scalar_t__ drr_fromguid; char* drr_toname; } ;
struct TYPE_21__ {void* holds; void* byteswap; scalar_t__ isprefix; } ;
typedef TYPE_4__ recvflags_t ;
typedef int nvlist_t ;
typedef int nonpackage_sendfs ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int drr ;
struct TYPE_19__ {struct drr_begin drr_begin; } ;
struct TYPE_22__ {scalar_t__ drr_type; scalar_t__ drr_payloadlen; TYPE_2__ drr_u; } ;
typedef TYPE_5__ dmu_replay_record_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 char* FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_5__*,int,TYPE_3__*) ;
 int FUNC_10 (int *,int,TYPE_5__*,int,void*,TYPE_3__*) ;
 int FUNC_11 (char*,int,char*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int *,char const*,int ) ;
 int FUNC_15 (int *,int ,char*) ;
 int FUNC_16 (int *,char*,...) ;
 int FUNC_17 (int *,int *,char*) ;
 int FUNC_18 (int *,int,char const*,char const*,TYPE_4__*,TYPE_5__*,TYPE_5__*,char const*,int *,int *,char**,int,int *,char const*,int *) ;
 int FUNC_19 (int *,int,char const*,TYPE_4__*,TYPE_5__*,TYPE_3__*,char**,int,int *,int *) ;

__attribute__((used)) static int
FUNC_20(libzfs_handle_t *VAR_15, const char *VAR_16,
    const char *VAR_17, recvflags_t *VAR_18, int VAR_19, const char *VAR_20,
    nvlist_t *VAR_21, avl_tree_t *VAR_22, char **VAR_23, int VAR_24,
    uint64_t *VAR_25, const char *VAR_26, nvlist_t *VAR_27)
{
 int VAR_28;
 dmu_replay_record_t VAR_29, VAR_30;
 struct drr_begin *VAR_31 = &VAR_29.drr_u.drr_begin;
 char VAR_32[1024];
 zio_cksum_t VAR_33 = { { 0 } };
 uint64_t VAR_34;
 int VAR_35;

 (void) FUNC_11(VAR_32, sizeof (VAR_32), FUNC_8(VAR_12,
     "cannot receive"));


 if (!FUNC_17(VAR_15, VAR_27, VAR_32)) {
  return (FUNC_15(VAR_15, VAR_9, VAR_32));
 }

 if (VAR_18->isprefix &&
     !FUNC_14(VAR_15, VAR_16, VAR_14)) {
  FUNC_16(VAR_15, FUNC_8(VAR_12, "specified fs "
      "(%s) does not exist"), VAR_16);
  return (FUNC_15(VAR_15, VAR_11, VAR_32));
 }
 if (VAR_17 &&
     !FUNC_14(VAR_15, VAR_17, VAR_14)) {
  FUNC_16(VAR_15, FUNC_8(VAR_12, "specified origin fs "
      "(%s) does not exist"), VAR_17);
  return (FUNC_15(VAR_15, VAR_11, VAR_32));
 }


 if (0 != (VAR_28 = FUNC_10(VAR_15, VAR_19, &VAR_29, sizeof (VAR_29), VAR_0,
     &VAR_33)))
  return (VAR_28);

 if (VAR_29.drr_type == VAR_7 || VAR_29.drr_type == FUNC_0(VAR_7)) {

  return (VAR_8);
 }


 VAR_30 = VAR_29;

 VAR_18->byteswap = VAR_0;
 if (VAR_31->drr_magic == FUNC_1(VAR_3)) {




  FUNC_7(&VAR_33, sizeof (zio_cksum_t));
  FUNC_9(&VAR_29, sizeof (VAR_29), &VAR_33);
  VAR_18->byteswap = VAR_1;

  VAR_29.drr_type = FUNC_0(VAR_29.drr_type);
  VAR_29.drr_payloadlen = FUNC_0(VAR_29.drr_payloadlen);
  VAR_31->drr_magic = FUNC_1(VAR_31->drr_magic);
  VAR_31->drr_versioninfo = FUNC_1(VAR_31->drr_versioninfo);
  VAR_31->drr_creation_time = FUNC_1(VAR_31->drr_creation_time);
  VAR_31->drr_type = FUNC_0(VAR_31->drr_type);
  VAR_31->drr_flags = FUNC_0(VAR_31->drr_flags);
  VAR_31->drr_toguid = FUNC_1(VAR_31->drr_toguid);
  VAR_31->drr_fromguid = FUNC_1(VAR_31->drr_fromguid);
 }

 if (VAR_31->drr_magic != VAR_3 || VAR_29.drr_type != VAR_6) {
  FUNC_16(VAR_15, FUNC_8(VAR_12, "invalid "
      "stream (bad magic number)"));
  return (FUNC_15(VAR_15, VAR_10, VAR_32));
 }

 VAR_34 = FUNC_2(VAR_31->drr_versioninfo);
 VAR_35 = FUNC_3(VAR_31->drr_versioninfo);

 if (!FUNC_4(VAR_34) ||
     (VAR_35 != VAR_5 && VAR_35 != VAR_4)) {
  FUNC_16(VAR_15, FUNC_8(VAR_12,
      "stream has unsupported feature, feature flags = %lx"),
      VAR_34);
  return (FUNC_15(VAR_15, VAR_10, VAR_32));
 }


 boolean_t VAR_36 = (FUNC_2(VAR_31->drr_versioninfo) &
     VAR_2);
 if (VAR_36)
  VAR_18->holds = VAR_1;

 if (FUNC_12(VAR_31->drr_toname, '@') == ((void*)0)) {
  FUNC_16(VAR_15, FUNC_8(VAR_12, "invalid "
      "stream (bad snapshot name)"));
  return (FUNC_15(VAR_15, VAR_10, VAR_32));
 }

 if (FUNC_3(VAR_31->drr_versioninfo) == VAR_5) {
  char VAR_37[VAR_13];
  if (VAR_20 == ((void*)0)) {




   char *VAR_38;
   (void) FUNC_13(VAR_37,
       VAR_29.drr_u.drr_begin.drr_toname,
       sizeof (VAR_37));
   if ((VAR_38 = FUNC_12(VAR_37, '@')) != ((void*)0))
    *VAR_38 = '\0';
   VAR_20 = VAR_37;
   FUNC_5(VAR_26 == ((void*)0));
  }
  return (FUNC_18(VAR_15, VAR_19, VAR_16, VAR_17, VAR_18,
      &VAR_29, &VAR_30, VAR_20, VAR_21, VAR_22, VAR_23,
      VAR_24, VAR_25, VAR_26, VAR_27));
 } else {
  FUNC_6(FUNC_3(VAR_31->drr_versioninfo) ==
      VAR_4);
  return (FUNC_19(VAR_15, VAR_19, VAR_16, VAR_18, &VAR_29,
      &VAR_33, VAR_23, VAR_24, VAR_25, VAR_27));
 }
}
