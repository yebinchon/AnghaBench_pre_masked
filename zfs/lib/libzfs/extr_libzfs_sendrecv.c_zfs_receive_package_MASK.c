
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int zio_cksum_t ;
typedef int zfs_handle_t ;
typedef int uint64_t ;
typedef int tofs ;
struct drr_begin {scalar_t__ drr_magic; char* drr_toname; int drr_versioninfo; } ;
typedef int sendfs ;
struct TYPE_14__ {int nomount; int dryrun; scalar_t__ istail; scalar_t__ isprefix; int byteswap; } ;
typedef TYPE_3__ recvflags_t ;
typedef int prop_changelist_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;
typedef int drre ;
struct TYPE_11__ {void** zc_word; } ;
struct TYPE_12__ {TYPE_10__ drr_checksum; } ;
struct TYPE_13__ {struct drr_begin drr_begin; TYPE_1__ drr_end; } ;
struct TYPE_15__ {scalar_t__ drr_type; scalar_t__ drr_payloadlen; TYPE_2__ drr_u; } ;
typedef TYPE_4__ dmu_replay_record_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 void* FUNC_1 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_10__,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int ,char*) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int **,int ,int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int *,char*,int **) ;
 int FUNC_16 (int *,char*,char**) ;
 int * FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,char*,int *,int *) ;
 int FUNC_20 (int *,char*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_21 (int *,int,TYPE_4__*,int,int ,int *) ;
 int FUNC_22 (int *,int,scalar_t__,int **,int ,int *) ;
 int FUNC_23 (char*,int,char*) ;
 char* FUNC_24 (char const*,char) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,char*,int) ;
 int FUNC_27 (char*,char const*,int) ;
 char* FUNC_28 (char*,char) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,int ,char*) ;
 int FUNC_31 (int *,char*) ;
 int * FUNC_32 (int *,int ,int ) ;
 int FUNC_33 (int *,char const*,int *,TYPE_3__*,int,char*,int *,int *,char**,int,int *,char*,int *) ;

__attribute__((used)) static int
FUNC_34(libzfs_handle_t *VAR_14, int VAR_15, const char *VAR_16,
    recvflags_t *VAR_17, dmu_replay_record_t *VAR_18, zio_cksum_t *VAR_19,
    char **VAR_20, int VAR_21, uint64_t *VAR_22,
    nvlist_t *VAR_23)
{
 nvlist_t *VAR_24 = ((void*)0);
 avl_tree_t *VAR_25 = ((void*)0);
 char *VAR_26 = ((void*)0);
 char *VAR_27 = ((void*)0);
 char *VAR_28;
 char VAR_29[VAR_11];
 char VAR_30[VAR_11];
 char VAR_31[1024];
 dmu_replay_record_t VAR_32;
 int VAR_33;
 boolean_t VAR_34 = VAR_0;
 boolean_t VAR_35 = VAR_0;
 boolean_t VAR_36, VAR_37;

 (void) FUNC_23(VAR_31, sizeof (VAR_31), FUNC_9(VAR_10,
     "cannot receive"));

 FUNC_5(VAR_18->drr_type == VAR_3);
 FUNC_5(VAR_18->drr_u.drr_begin.drr_magic == VAR_1);
 FUNC_5(FUNC_2(VAR_18->drr_u.drr_begin.drr_versioninfo) ==
     VAR_2);




 if (VAR_18->drr_payloadlen != 0) {
  VAR_33 = FUNC_22(VAR_14, VAR_15, VAR_18->drr_payloadlen,
      &VAR_24, VAR_17->byteswap, VAR_19);
  if (VAR_33) {
   VAR_33 = FUNC_30(VAR_14, VAR_7, VAR_31);
   goto out;
  }
 }

 VAR_36 = (FUNC_14(VAR_24, "not_recursive") ==
     VAR_6);
 VAR_37 = (FUNC_14(VAR_24, "raw") == 0);

 if (VAR_36 && FUNC_24(VAR_16, '@')) {
  FUNC_31(VAR_14, FUNC_9(VAR_10,
      "cannot specify snapshot name for multi-snapshot stream"));
  VAR_33 = FUNC_30(VAR_14, VAR_7, VAR_31);
  goto out;
 }




 if (0 != (VAR_33 = FUNC_21(VAR_14, VAR_15, &VAR_32, sizeof (VAR_32),
     VAR_17->byteswap, ((void*)0))))
  goto out;
 if (VAR_17->byteswap) {
  VAR_32.drr_type = FUNC_0(VAR_32.drr_type);
  VAR_32.drr_u.drr_end.drr_checksum.zc_word[0] =
      FUNC_1(VAR_32.drr_u.drr_end.drr_checksum.zc_word[0]);
  VAR_32.drr_u.drr_end.drr_checksum.zc_word[1] =
      FUNC_1(VAR_32.drr_u.drr_end.drr_checksum.zc_word[1]);
  VAR_32.drr_u.drr_end.drr_checksum.zc_word[2] =
      FUNC_1(VAR_32.drr_u.drr_end.drr_checksum.zc_word[2]);
  VAR_32.drr_u.drr_end.drr_checksum.zc_word[3] =
      FUNC_1(VAR_32.drr_u.drr_end.drr_checksum.zc_word[3]);
 }
 if (VAR_32.drr_type != VAR_4) {
  VAR_33 = FUNC_30(VAR_14, VAR_7, VAR_31);
  goto out;
 }
 if (!FUNC_4(VAR_32.drr_u.drr_end.drr_checksum, *VAR_19)) {
  FUNC_31(VAR_14, FUNC_9(VAR_10,
      "incorrect header checksum"));
  VAR_33 = FUNC_30(VAR_14, VAR_7, VAR_31);
  goto out;
 }

 (void) FUNC_16(VAR_24, "fromsnap", &VAR_26);

 if (VAR_18->drr_payloadlen != 0) {
  nvlist_t *VAR_38;

  FUNC_3(0 == FUNC_15(VAR_24, "fss",
      &VAR_38));
  if ((VAR_25 = FUNC_10(VAR_38)) == ((void*)0)) {
   FUNC_31(VAR_14, FUNC_9(VAR_10,
       "couldn't allocate avl tree"));
   VAR_33 = FUNC_30(VAR_14, VAR_8, VAR_31);
   goto out;
  }

  if (VAR_26 != ((void*)0) && VAR_36) {
   nvlist_t *VAR_39 = ((void*)0);
   nvpair_t *VAR_40 = ((void*)0);

   (void) FUNC_27(VAR_29, VAR_16, sizeof (VAR_29));
   if (VAR_17->isprefix) {
    struct drr_begin *VAR_41 = &VAR_18->drr_u.drr_begin;
    int VAR_42;

    if (VAR_17->istail) {
     VAR_28 = FUNC_28(VAR_41->drr_toname, '/');
     if (VAR_28 == ((void*)0)) {
      (void) FUNC_26(VAR_29, "/",
          sizeof (VAR_29));
      VAR_42 = 0;
     } else {
      VAR_42 = (VAR_28 - VAR_41->drr_toname);
     }
    } else {
     VAR_42 = FUNC_25(VAR_41->drr_toname, "/@");
    }

    (void) FUNC_26(VAR_29, &VAR_41->drr_toname[VAR_42],
        sizeof (VAR_29));
    *FUNC_24(VAR_29, '@') = '\0';
   }

   if (!VAR_17->dryrun && !VAR_17->nomount) {
    FUNC_3(0 == FUNC_12(&VAR_39,
        VAR_9, 0));
   }

   VAR_35 = FUNC_20(VAR_14, VAR_29, VAR_17,
       VAR_24, VAR_25, VAR_39);


   while ((VAR_40 = FUNC_17(VAR_39,
       VAR_40)) != ((void*)0)) {
    zfs_handle_t *VAR_43;
    prop_changelist_t *VAR_44 = ((void*)0);

    VAR_43 = FUNC_32(VAR_14, FUNC_18(VAR_40),
        VAR_13);
    if (VAR_43 != ((void*)0)) {
     VAR_44 = FUNC_7(VAR_43,
         VAR_12, 0, 0);
     FUNC_29(VAR_43);
     if (VAR_44 != ((void*)0)) {
      VAR_35 |=
          FUNC_8(VAR_44);
      FUNC_6(VAR_44);
     }
    }
   }

   FUNC_13(VAR_39);
  }
 }






 (void) FUNC_27(VAR_30, VAR_18->drr_u.drr_begin.drr_toname,
     sizeof (VAR_30));
 if ((VAR_28 = FUNC_24(VAR_30, '@')) != ((void*)0)) {
  *VAR_28 = '\0';






  VAR_27 = (VAR_28 + 1);
 }


 do {







  VAR_33 = FUNC_33(VAR_14, VAR_16, ((void*)0), VAR_17, VAR_15,
      VAR_30, VAR_24, VAR_25, VAR_20, VAR_21,
      VAR_22, VAR_27, VAR_23);
  if (VAR_33 == VAR_5) {
   VAR_33 = 0;
   break;
  }
  VAR_34 |= VAR_33;
 } while (VAR_33 == 0);

 if (VAR_18->drr_payloadlen != 0 && VAR_36 && VAR_26 != ((void*)0)) {




  VAR_35 = FUNC_20(VAR_14, VAR_29, VAR_17,
      VAR_24, VAR_25, ((void*)0));
 }

 if (VAR_37 && VAR_35 == 0 && *VAR_20 != ((void*)0)) {
  VAR_35 = FUNC_19(VAR_14, *VAR_20,
      VAR_24, VAR_25);
 }

out:
 FUNC_11(VAR_25);
 FUNC_13(VAR_24);
 if (VAR_35)
  VAR_33 = -2;
 if (VAR_34)
  VAR_33 = -1;
 return (VAR_33);
}
