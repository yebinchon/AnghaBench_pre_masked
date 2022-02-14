
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zn_zap; int zn_hash; } ;
typedef TYPE_1__ zap_name_t ;
typedef int zap_leaf_t ;
typedef int zap_entry_handle_t ;
typedef int uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ,int **) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_4 (int *,int ,int ,void*) ;
 int FUNC_5 (int ,int *,int,char*) ;
 int FUNC_6 (int *,TYPE_1__*,int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(zap_name_t *VAR_1,
    uint64_t VAR_2, uint64_t VAR_3, void *VAR_4,
    char *VAR_5, int VAR_6, boolean_t *VAR_7)
{
 zap_leaf_t *VAR_8;
 zap_entry_handle_t VAR_9;

 int VAR_10 = FUNC_0(VAR_1);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_10 = FUNC_2(VAR_1->zn_zap, VAR_1->zn_hash, ((void*)0), VAR_0, &VAR_8);
 if (VAR_10 != 0)
  return (VAR_10);
 VAR_10 = FUNC_6(VAR_8, VAR_1, &VAR_9);
 if (VAR_10 == 0) {
  if ((VAR_10 = FUNC_1(VAR_2, VAR_3)) != 0) {
   FUNC_7(VAR_8);
   return (VAR_10);
  }

  VAR_10 = FUNC_4(&VAR_9, VAR_2, VAR_3, VAR_4);
  (void) FUNC_5(VAR_1->zn_zap, &VAR_9, VAR_6, VAR_5);
  if (VAR_7) {
   *VAR_7 = FUNC_3(&VAR_9,
       VAR_1, ((void*)0), VAR_1->zn_zap);
  }
 }

 FUNC_7(VAR_8);
 return (VAR_10);
}
