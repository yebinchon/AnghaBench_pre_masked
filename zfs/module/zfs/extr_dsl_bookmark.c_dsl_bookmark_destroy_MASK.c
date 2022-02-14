
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvpair_t ;
typedef int nvlist_t ;
struct TYPE_3__ {int dbda_success; int * dbda_errors; int * dbda_bmarks; } ;
typedef TYPE_1__ dsl_bookmark_destroy_arg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 int VAR_5;
 dsl_bookmark_destroy_arg_t VAR_6;
 nvpair_t *VAR_7 = FUNC_4(VAR_3, ((void*)0));
 if (VAR_7 == ((void*)0))
  return (0);

 VAR_6.dbda_bmarks = VAR_3;
 VAR_6.dbda_errors = VAR_4;
 VAR_6.dbda_success = FUNC_1();

 VAR_5 = FUNC_0(FUNC_5(VAR_7), VAR_1,
     VAR_2, &VAR_6, FUNC_3(VAR_3),
     VAR_0);
 FUNC_2(VAR_6.dbda_success);
 return (VAR_5);
}
