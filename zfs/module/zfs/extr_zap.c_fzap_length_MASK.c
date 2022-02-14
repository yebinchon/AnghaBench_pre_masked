
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zn_hash; int zn_zap; } ;
typedef TYPE_1__ zap_name_t ;
typedef int zap_leaf_t ;
struct TYPE_7__ {int zeh_num_integers; int zeh_integer_size; } ;
typedef TYPE_2__ zap_entry_handle_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,int **) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(zap_name_t *VAR_1,
    uint64_t *VAR_2, uint64_t *VAR_3)
{
 zap_leaf_t *VAR_4;
 int VAR_5;
 zap_entry_handle_t VAR_6;

 VAR_5 = FUNC_0(VAR_1->zn_zap, VAR_1->zn_hash, ((void*)0), VAR_0, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_1(VAR_4, VAR_1, &VAR_6);
 if (VAR_5 != 0)
  goto out;

 if (VAR_2 != 0)
  *VAR_2 = VAR_6.zeh_integer_size;
 if (VAR_3 != 0)
  *VAR_3 = VAR_6.zeh_num_integers;
out:
 FUNC_2(VAR_4);
 return (VAR_5);
}
