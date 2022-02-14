
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zap_rwlock; } ;
typedef TYPE_1__ zap_t ;
struct TYPE_12__ {TYPE_1__* zn_zap; int zn_hash; } ;
typedef TYPE_2__ zap_name_t ;
typedef int zap_leaf_t ;
typedef int zap_entry_handle_t ;
typedef int uint64_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int ,int **) ;
 int FUNC_4 (int *,TYPE_2__*,int ,int,int ,void const*,int *) ;
 int FUNC_5 (int *,int,int ,void const*) ;
 int FUNC_6 (TYPE_2__*,int *,void*,int *,int **) ;
 int FUNC_7 (TYPE_1__*,int,int *) ;
 int FUNC_8 (int *,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *,void*,int *) ;

int
FUNC_10(zap_name_t *VAR_4,
    int VAR_5, uint64_t VAR_6, const void *VAR_7,
    void *VAR_8, dmu_tx_t *VAR_9)
{
 zap_leaf_t *VAR_10;
 int VAR_11;
 boolean_t VAR_12;
 zap_entry_handle_t VAR_13;
 zap_t *VAR_14 = VAR_4->zn_zap;

 FUNC_0(FUNC_1(&VAR_14->zap_rwlock));
 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_11 != 0)
  return (VAR_11);

 VAR_11 = FUNC_3(VAR_14, VAR_4->zn_hash, VAR_9, VAR_2, &VAR_10);
 if (VAR_11 != 0)
  return (VAR_11);
retry:
 VAR_11 = FUNC_8(VAR_10, VAR_4, &VAR_13);
 VAR_12 = (VAR_11 == VAR_1);
 FUNC_0(VAR_11 == 0 || VAR_11 == VAR_1);

 if (VAR_12) {
  VAR_11 = FUNC_4(VAR_10, VAR_4, VAR_3,
      VAR_5, VAR_6, VAR_7, &VAR_13);
  if (VAR_11 == 0)
   FUNC_7(VAR_14, 1, VAR_9);
 } else {
  VAR_11 = FUNC_5(&VAR_13, VAR_5, VAR_6, VAR_7);
 }

 if (VAR_11 == VAR_0) {
  VAR_11 = FUNC_6(VAR_4, VAR_10, VAR_8, VAR_9, &VAR_10);
  VAR_14 = VAR_4->zn_zap;
  if (VAR_11 == 0)
   goto retry;
 }

 if (VAR_14 != ((void*)0))
  FUNC_9(VAR_4, VAR_10, VAR_8, VAR_9);
 return (VAR_11);
}
