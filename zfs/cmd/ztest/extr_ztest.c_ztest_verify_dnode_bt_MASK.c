
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
struct TYPE_12__ {scalar_t__ bt_magic; int bt_gen; int bt_crtxg; int bt_txg; int bt_offset; } ;
typedef TYPE_2__ ztest_block_tag_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_13__ {int doi_bonus_size; int doi_dnodesize; } ;
typedef TYPE_3__ dmu_object_info_t ;
typedef int dmu_buf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__*,int ,int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (int *,TYPE_2__*,scalar_t__,int *,int ) ;

void
FUNC_9(ztest_ds_t *VAR_4, uint64_t VAR_5)
{
 objset_t *VAR_6 = VAR_4->zd_os;
 uint64_t VAR_7;
 int VAR_8 = 0;

 for (VAR_7 = 0; VAR_8 == 0; VAR_8 = FUNC_3(VAR_6, &VAR_7, VAR_1, 0)) {
  ztest_block_tag_t *VAR_9 = ((void*)0);
  dmu_object_info_t VAR_10;
  dmu_buf_t *VAR_11;

  FUNC_6(VAR_4, VAR_7, VAR_3);
  if (FUNC_0(VAR_6, VAR_7, VAR_2, &VAR_11) != 0) {
   FUNC_7(VAR_4, VAR_7);
   continue;
  }

  FUNC_2(VAR_11, &VAR_10);
  if (VAR_10.doi_bonus_size >= sizeof (*VAR_9))
   VAR_9 = FUNC_4(VAR_11);

  if (VAR_9 && VAR_9->bt_magic == VAR_0) {
   FUNC_5(VAR_9, VAR_6, VAR_7, VAR_10.doi_dnodesize,
       VAR_9->bt_offset, VAR_9->bt_gen, VAR_9->bt_txg,
       VAR_9->bt_crtxg);
   FUNC_8(VAR_11, VAR_9, VAR_7, VAR_6, VAR_9->bt_gen);
  }

  FUNC_1(VAR_11, VAR_2);
  FUNC_7(VAR_4, VAR_7);
 }
}
