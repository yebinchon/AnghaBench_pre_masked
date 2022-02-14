
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uqc_project_deltas; int uqc_group_deltas; int uqc_user_deltas; } ;
typedef TYPE_1__ userquota_cache_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int longlong_t ;
typedef int int64_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_3(objset_t *VAR_2, userquota_cache_t *VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7, uint64_t VAR_8,
    boolean_t VAR_9)
{
 if (VAR_5 & VAR_0) {
  int64_t VAR_10 = VAR_1 + VAR_4;
  char VAR_11[20];

  if (VAR_9)
   VAR_10 = -VAR_10;

  (void) FUNC_1(VAR_11, "%llx", (longlong_t)VAR_6);
  FUNC_2(&VAR_3->uqc_user_deltas, VAR_11, VAR_10);

  (void) FUNC_1(VAR_11, "%llx", (longlong_t)VAR_7);
  FUNC_2(&VAR_3->uqc_group_deltas, VAR_11, VAR_10);

  if (FUNC_0(VAR_2)) {
   (void) FUNC_1(VAR_11, "%llx", (longlong_t)VAR_8);
   FUNC_2(&VAR_3->uqc_project_deltas,
       VAR_11, VAR_10);
  }
 }
}
