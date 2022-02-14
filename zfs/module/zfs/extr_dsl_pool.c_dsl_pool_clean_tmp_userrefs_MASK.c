
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_6__ {int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int nvlist_t ;
struct TYPE_7__ {scalar_t__ dp_tmp_userrefs_obj; int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int **) ;
 scalar_t__ FUNC_7 (int ) ;
 char* FUNC_8 (int ,char) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*) ;

void
FUNC_13(dsl_pool_t *VAR_1)
{
 zap_attribute_t VAR_2;
 zap_cursor_t VAR_3;
 objset_t *VAR_4 = VAR_1->dp_meta_objset;
 uint64_t VAR_5 = VAR_1->dp_tmp_userrefs_obj;
 nvlist_t *VAR_6;

 if (VAR_5 == 0)
  return;
 FUNC_0(FUNC_7(VAR_1->dp_spa) >= VAR_0);

 VAR_6 = FUNC_4();

 for (FUNC_11(&VAR_3, VAR_4, VAR_5);
     FUNC_12(&VAR_3, &VAR_2) == 0;
     FUNC_9(&VAR_3)) {
  char *VAR_7;
  nvlist_t *VAR_8;

  VAR_7 = FUNC_8(VAR_2.za_name, '-');
  *VAR_7 = '\0';
  ++VAR_7;
  if (FUNC_6(VAR_6, VAR_2.za_name, &VAR_8) != 0) {
   VAR_8 = FUNC_4();
   FUNC_2(VAR_8, VAR_7);
   FUNC_3(VAR_6, VAR_2.za_name, VAR_8);
   FUNC_5(VAR_8);
  } else {
   FUNC_2(VAR_8, VAR_7);
  }
 }
 FUNC_1(VAR_1, VAR_6);
 FUNC_5(VAR_6);
 FUNC_10(&VAR_3);
}
