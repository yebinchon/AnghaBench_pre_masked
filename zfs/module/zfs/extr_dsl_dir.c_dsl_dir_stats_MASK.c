
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_16__ {int dd_lock; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_17__ {int dd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 TYPE_3__* FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *,int ,char*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

void
FUNC_16(dsl_dir_t *VAR_12, nvlist_t *VAR_13)
{
 FUNC_14(&VAR_12->dd_lock);
 FUNC_13(VAR_13, VAR_5,
     FUNC_3(VAR_12));
 FUNC_13(VAR_13, VAR_6,
     FUNC_4(VAR_12));
 FUNC_13(VAR_13, VAR_3,
     FUNC_1(VAR_12));
 if (FUNC_11(VAR_12)->dd_flags & VAR_0) {
  FUNC_13(VAR_13, VAR_11,
      FUNC_9(VAR_12));
  FUNC_13(VAR_13, VAR_9,
      FUNC_7(VAR_12));
  FUNC_13(VAR_13, VAR_10,
      FUNC_8(VAR_12));
  FUNC_13(VAR_13, VAR_8,
      FUNC_6(VAR_12));
 }
 FUNC_15(&VAR_12->dd_lock);

 uint64_t VAR_14;
 if (FUNC_0(VAR_12, &VAR_14) == 0) {
  FUNC_13(VAR_13, VAR_2,
      VAR_14);
 }
 if (FUNC_5(VAR_12, &VAR_14) == 0) {
  FUNC_13(VAR_13, VAR_7,
      VAR_14);
 }

 if (FUNC_10(VAR_12)) {
  char VAR_15[VAR_1];
  FUNC_2(VAR_12, VAR_15);
  FUNC_12(VAR_13, VAR_4, VAR_15);
 }

}
