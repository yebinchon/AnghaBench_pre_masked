
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_9__ {int dp_spa; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_10__ {int (* ddura_holdfunc ) (TYPE_1__*,char*,int ,int **) ;int ddura_chkholds; int ddura_todelete; int * ddura_errlist; int * ddura_holds; } ;
typedef TYPE_2__ dsl_dataset_user_release_arg_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*,int ,int **) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int **) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (char*,int ,int ,TYPE_2__*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int * FUNC_10 (int *,int *) ;
 char* FUNC_11 (int *) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14(nvlist_t *VAR_7, nvlist_t *VAR_8,
    dsl_pool_t *VAR_9)
{
 dsl_dataset_user_release_arg_t VAR_10;
 nvpair_t *VAR_11;
 char *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_10(VAR_7, ((void*)0));
 if (VAR_11 == ((void*)0))
  return (0);





 if (VAR_9 != ((void*)0)) {

  VAR_10.ddura_holdfunc = FUNC_2;
  VAR_12 = FUNC_12(VAR_9->dp_spa);
 } else {

  VAR_10.ddura_holdfunc = FUNC_1;
  VAR_12 = FUNC_11(VAR_11);






 }

 VAR_10.ddura_holds = VAR_7;
 VAR_10.ddura_errlist = VAR_8;
 FUNC_0(FUNC_9(&VAR_10.ddura_todelete, VAR_2,
     VAR_1));
 FUNC_0(FUNC_9(&VAR_10.ddura_chkholds, VAR_2,
     VAR_1));

 VAR_13 = FUNC_7(VAR_12, VAR_5,
     VAR_6, &VAR_10, 0,
     VAR_4);
 FUNC_8(VAR_10.ddura_todelete);
 FUNC_8(VAR_10.ddura_chkholds);

 return (VAR_13);
}
