
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int objset_t ;
struct TYPE_4__ {char const* ddha_name; } ;
typedef TYPE_1__ dsl_destroy_head_arg_t ;
typedef int boolean_t ;
struct TYPE_5__ {int ds_prev_snap_txg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int ,int ,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char const*,int ,int ,TYPE_1__*,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char const*,int **,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char const*) ;

int
FUNC_13(const char *VAR_10)
{
 dsl_destroy_head_arg_t VAR_11;
 int VAR_12;
 spa_t *VAR_13;
 boolean_t VAR_14;





 VAR_12 = FUNC_10(VAR_10, &VAR_13, VAR_4);
 if (VAR_12 != 0)
  return (VAR_12);
 VAR_14 = FUNC_9(VAR_13, VAR_5);
 FUNC_8(VAR_13, VAR_4);

 VAR_11.ddha_name = VAR_10;

 if (!VAR_14) {
  objset_t *VAR_15;

  VAR_12 = FUNC_7(VAR_10, VAR_8,
      VAR_7, &VAR_11,
      0, VAR_6);
  if (VAR_12 != 0)
   return (VAR_12);







  VAR_12 = FUNC_4(VAR_10, VAR_2, VAR_0, VAR_1,
      VAR_4, &VAR_15);
  if (VAR_12 == 0) {
   uint64_t VAR_16 =
       FUNC_6(FUNC_3(VAR_15))->
       ds_prev_snap_txg;
   for (uint64_t VAR_17 = 0; VAR_12 == 0;
       VAR_12 = FUNC_1(VAR_15, &VAR_17, VAR_3,
       VAR_16))
    (void) FUNC_0(VAR_15, VAR_17);

   FUNC_11(FUNC_5(VAR_15), 0);
   FUNC_2(VAR_15, VAR_1, VAR_4);
  }
 }

 return (FUNC_7(VAR_10, VAR_8,
     VAR_9, &VAR_11, 0, VAR_6));
}
