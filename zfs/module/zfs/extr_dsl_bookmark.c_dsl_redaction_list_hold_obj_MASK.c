
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {int rl_dbu; TYPE_3__* rl_dbuf; int rl_longholds; int * rl_mos; int rl_phys; int rl_object; } ;
typedef TYPE_1__ redaction_list_t ;
typedef int objset_t ;
struct TYPE_16__ {int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_17__ {int db_data; } ;
typedef TYPE_3__ dmu_buf_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void*,TYPE_3__**) ;
 TYPE_1__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int ,int *,TYPE_3__**) ;
 TYPE_1__* FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_7 (int,int ) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;

int
FUNC_9(dsl_pool_t *VAR_2, uint64_t VAR_3, void *VAR_4,
    redaction_list_t **VAR_5)
{
 objset_t *VAR_6 = VAR_2->dp_meta_objset;
 dmu_buf_t *VAR_7;
 redaction_list_t *VAR_8;
 int VAR_9;

 FUNC_0(FUNC_5(VAR_2));

 VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_4, &VAR_7);
 if (VAR_9 != 0)
  return (VAR_9);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 == ((void*)0)) {
  redaction_list_t *VAR_10 = ((void*)0);

  VAR_8 = FUNC_7(sizeof (redaction_list_t), VAR_0);
  VAR_8->rl_dbuf = VAR_7;
  VAR_8->rl_object = VAR_3;
  VAR_8->rl_phys = VAR_7->db_data;
  VAR_8->rl_mos = VAR_2->dp_meta_objset;
  FUNC_8(&VAR_8->rl_longholds);
  FUNC_3(&VAR_8->rl_dbu, VAR_1, ((void*)0),
      &VAR_8->rl_dbuf);
  if ((VAR_10 = FUNC_4(VAR_7, &VAR_8->rl_dbu)) != ((void*)0)) {
   FUNC_6(VAR_8, sizeof (*VAR_8));
   VAR_8 = VAR_10;
  }
 }
 *VAR_5 = VAR_8;
 return (0);
}
