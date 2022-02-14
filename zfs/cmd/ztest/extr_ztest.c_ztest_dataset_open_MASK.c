
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {char* zd_name; TYPE_3__* zd_zilog; } ;
typedef TYPE_2__ ztest_ds_t ;
struct TYPE_15__ {scalar_t__ zl_replaying_seq; scalar_t__ zl_parse_lr_count; scalar_t__ zl_parse_blk_count; TYPE_1__* zl_header; } ;
typedef TYPE_3__ zilog_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
struct TYPE_17__ {int zo_verbose; int zo_pool; } ;
struct TYPE_16__ {scalar_t__ zd_seq; } ;
struct TYPE_13__ {scalar_t__ zh_claim_lr_seq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 TYPE_5__* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,char*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (char*,int ,int ,int ,TYPE_2__*,int **) ;
 TYPE_2__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__ VAR_10 ;
 int FUNC_13 (int ) ;
 int VAR_11 ;
 int FUNC_14 (TYPE_2__*,TYPE_5__*,int *) ;

__attribute__((used)) static int
FUNC_15(int VAR_12)
{
 ztest_ds_t *VAR_13 = &VAR_7[VAR_12];
 uint64_t VAR_14 = FUNC_2(VAR_12)->zd_seq;
 objset_t *VAR_15;
 zilog_t *VAR_16;
 char VAR_17[VAR_6];
 int VAR_18;

 FUNC_11(VAR_17, VAR_10.zo_pool, VAR_12);

 (void) FUNC_5(&VAR_9);

 VAR_18 = FUNC_9(VAR_17);
 if (VAR_18 == VAR_4) {
  (void) FUNC_6(&VAR_9);
  FUNC_13(VAR_5);
  return (VAR_18);
 }
 FUNC_0(VAR_18 == 0 || VAR_18 == VAR_3);

 FUNC_1(FUNC_12(VAR_17, VAR_2, VAR_0,
     VAR_1, VAR_13, &VAR_15));
 (void) FUNC_6(&VAR_9);

 FUNC_14(VAR_13, FUNC_2(VAR_12), VAR_15);

 VAR_16 = VAR_13->zd_zilog;

 if (VAR_16->zl_header->zh_claim_lr_seq != 0 &&
     VAR_16->zl_header->zh_claim_lr_seq < VAR_14)
  FUNC_3(0, "missing log records: claimed %llu < committed %llu",
      VAR_16->zl_header->zh_claim_lr_seq, VAR_14);

 FUNC_10(VAR_13);

 FUNC_8(VAR_15, VAR_13, VAR_11);

 FUNC_10(VAR_13);

 if (VAR_10.zo_verbose >= 6)
  (void) FUNC_4("%s replay %llu blocks, %llu records, seq %llu\n",
      VAR_13->zd_name,
      (u_longlong_t)VAR_16->zl_parse_blk_count,
      (u_longlong_t)VAR_16->zl_parse_lr_count,
      (u_longlong_t)VAR_16->zl_replaying_seq);

 VAR_16 = FUNC_7(VAR_15, VAR_8);

 if (VAR_16->zl_replaying_seq != 0 &&
     VAR_16->zl_replaying_seq < VAR_14)
  FUNC_3(0, "missing log records: replayed %llu < committed %llu",
      VAR_16->zl_replaying_seq, VAR_14);

 return (0);
}
