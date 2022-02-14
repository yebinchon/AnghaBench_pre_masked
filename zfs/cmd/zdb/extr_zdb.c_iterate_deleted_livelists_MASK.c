
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_10__ {int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
struct TYPE_11__ {int * spa_meta_objset; } ;
typedef TYPE_2__ spa_t ;
typedef int objset_t ;
typedef int (* ll_iter_t ) (TYPE_3__*,void*) ;
struct TYPE_12__ {int * dl_os; } ;
typedef TYPE_3__ dsl_deadlist_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_3, ll_iter_t VAR_4, void *VAR_5)
{
 objset_t *VAR_6 = VAR_3->spa_meta_objset;
 uint64_t VAR_7;
 int VAR_8 = FUNC_7(VAR_6, VAR_1,
     VAR_0, sizeof (uint64_t), 1, &VAR_7);
 if (VAR_8 == VAR_2)
  return;
 FUNC_0(VAR_8);

 zap_cursor_t VAR_9;
 zap_attribute_t VAR_10;
 dsl_deadlist_t VAR_11;

 VAR_11.dl_os = ((void*)0);
 for (FUNC_5(&VAR_9, VAR_6, VAR_7);
     FUNC_6(&VAR_9, &VAR_10) == 0;
     (void) FUNC_3(&VAR_9)) {
  FUNC_2(&VAR_11, VAR_6, VAR_10.za_first_integer);
  VAR_4(&VAR_11, VAR_5);
  FUNC_1(&VAR_11);
 }
 FUNC_4(&VAR_9);
}
