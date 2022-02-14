
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint64_t ;
typedef int ss_cnt ;
typedef int objset_t ;
typedef int fs_cnt ;
struct TYPE_23__ {int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_24__ {int dd_object; int dd_myname; struct TYPE_24__* dd_parent; int dd_dbuf; TYPE_1__* dd_pool; } ;
typedef TYPE_3__ dsl_dir_t ;
struct TYPE_25__ {int ddra_newname; int ddra_oldname; } ;
typedef TYPE_4__ dsl_dir_rename_arg_t ;
typedef int dmu_tx_t ;
struct TYPE_22__ {int * dp_meta_objset; } ;
struct TYPE_21__ {int dd_child_dir_zapobj; int dd_parent_obj; int dd_used_bytes; int dd_reserved; int dd_uncompressed_bytes; int dd_compressed_bytes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_2__*,int ,TYPE_3__*,TYPE_3__**,char const**) ;
 int FUNC_6 (TYPE_2__*,int ,int *,TYPE_3__*,TYPE_3__**) ;
 TYPE_10__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_3__*,char*,int *,char*,int ) ;
 int FUNC_13 (int ,char const*,int) ;
 int FUNC_14 (int *,int ,int ,int,int,int *,int *) ;
 int FUNC_15 (int *,int ,int ,int,int,int *) ;
 int FUNC_16 (int *,int ,int ,int *) ;
 int FUNC_17 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_18(void *VAR_7, dmu_tx_t *VAR_8)
{
 dsl_dir_rename_arg_t *VAR_9 = VAR_7;
 dsl_pool_t *VAR_10 = FUNC_3(VAR_8);
 dsl_dir_t *VAR_11, *VAR_12;
 const char *VAR_13;
 int VAR_14;
 objset_t *VAR_15 = VAR_10->dp_meta_objset;

 FUNC_1(FUNC_5(VAR_10, VAR_9->ddra_oldname, VAR_5, &VAR_11, ((void*)0)));
 FUNC_1(FUNC_5(VAR_10, VAR_9->ddra_newname, VAR_5, &VAR_12,
     &VAR_13));


 FUNC_12(VAR_11, "rename", VAR_8,
     "-> %s", VAR_9->ddra_newname);

 if (VAR_12 != VAR_11->dd_parent) {
  objset_t *VAR_16 = VAR_11->dd_pool->dp_meta_objset;
  uint64_t VAR_17 = 0;
  uint64_t VAR_18 = 0;





  if (FUNC_11(VAR_10->dp_spa,
      VAR_6)) {
   FUNC_1(FUNC_15(VAR_16, VAR_11->dd_object,
       VAR_1, sizeof (VAR_17), 1,
       &VAR_17));

   VAR_17++;

   FUNC_1(FUNC_15(VAR_16, VAR_11->dd_object,
       VAR_2, sizeof (VAR_18), 1,
       &VAR_18));
  }

  FUNC_9(VAR_11->dd_parent, -VAR_17,
      VAR_1, VAR_8);
  FUNC_9(VAR_12, VAR_17,
      VAR_1, VAR_8);

  FUNC_9(VAR_11->dd_parent, -VAR_18,
      VAR_2, VAR_8);
  FUNC_9(VAR_12, VAR_18,
      VAR_2, VAR_8);

  FUNC_4(VAR_11->dd_parent, VAR_3,
      -FUNC_7(VAR_11)->dd_used_bytes,
      -FUNC_7(VAR_11)->dd_compressed_bytes,
      -FUNC_7(VAR_11)->dd_uncompressed_bytes, VAR_8);
  FUNC_4(VAR_12, VAR_3,
      FUNC_7(VAR_11)->dd_used_bytes,
      FUNC_7(VAR_11)->dd_compressed_bytes,
      FUNC_7(VAR_11)->dd_uncompressed_bytes, VAR_8);

  if (FUNC_7(VAR_11)->dd_reserved >
      FUNC_7(VAR_11)->dd_used_bytes) {
   uint64_t VAR_19 = FUNC_7(VAR_11)->dd_reserved -
       FUNC_7(VAR_11)->dd_used_bytes;

   FUNC_4(VAR_11->dd_parent, VAR_4,
       -VAR_19, 0, 0, VAR_8);
   FUNC_4(VAR_12, VAR_4,
       VAR_19, 0, 0, VAR_8);
  }
 }

 FUNC_2(VAR_11->dd_dbuf, VAR_8);


 VAR_14 = FUNC_16(VAR_15,
     FUNC_7(VAR_11->dd_parent)->dd_child_dir_zapobj,
     VAR_11->dd_myname, VAR_8);
 FUNC_0(VAR_14);

 (void) FUNC_13(VAR_11->dd_myname, VAR_13,
     sizeof (VAR_11->dd_myname));
 FUNC_8(VAR_11->dd_parent, VAR_11);
 FUNC_7(VAR_11)->dd_parent_obj = VAR_12->dd_object;
 FUNC_1(FUNC_6(VAR_10,
     VAR_12->dd_object, ((void*)0), VAR_11, &VAR_11->dd_parent));


 FUNC_1(FUNC_14(VAR_15, FUNC_7(VAR_12)->dd_child_dir_zapobj,
     VAR_11->dd_myname, 8, 1, &VAR_11->dd_object, VAR_8));

 FUNC_17(VAR_10->dp_spa, VAR_9->ddra_oldname,
     VAR_9->ddra_newname, VAR_0);

 FUNC_10(VAR_11);

 FUNC_8(VAR_12, VAR_5);
 FUNC_8(VAR_11, VAR_5);
}
