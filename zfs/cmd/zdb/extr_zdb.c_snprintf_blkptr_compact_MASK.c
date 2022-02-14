
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int u_longlong_t ;
typedef int dva_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {scalar_t__ blk_birth; int * blk_dva; } ;
typedef TYPE_1__ blkptr_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*) ;
 scalar_t__ FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_1__ const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 scalar_t__ FUNC_11 (int const*) ;
 scalar_t__ FUNC_12 (int const*) ;
 int* VAR_0 ;
 int FUNC_13 (char*,int,char*,char*,...) ;
 int FUNC_14 (char*,size_t,TYPE_1__ const*) ;
 int FUNC_15 (char*,char*,int,int ,int ,int ) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17(char *VAR_1, size_t VAR_2, const blkptr_t *VAR_3,
    boolean_t VAR_4)
{
 const dva_t *VAR_5 = VAR_3->blk_dva;
 int VAR_6 = VAR_0['d'] > 5 ? FUNC_5(VAR_3) : 1;
 int VAR_7;

 if (VAR_0['b'] >= 6) {
  FUNC_14(VAR_1, VAR_2, VAR_3);
  if (VAR_4) {
   (void) FUNC_13(VAR_1 + FUNC_16(VAR_1),
       VAR_2 - FUNC_16(VAR_1), " %s", "FREE");
  }
  return;
 }

 if (FUNC_7(VAR_3)) {
  (void) FUNC_15(VAR_1,
      "EMBEDDED et=%u %llxL/%llxP B=%llu",
      (int)FUNC_0(VAR_3),
      (u_longlong_t)FUNC_1(VAR_3),
      (u_longlong_t)FUNC_2(VAR_3),
      (u_longlong_t)VAR_3->blk_birth);
  return;
 }

 VAR_1[0] = '\0';

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  (void) FUNC_13(VAR_1 + FUNC_16(VAR_1),
      VAR_2 - FUNC_16(VAR_1), "%llu:%llx:%llx ",
      (u_longlong_t)FUNC_12(&VAR_5[VAR_7]),
      (u_longlong_t)FUNC_11(&VAR_5[VAR_7]),
      (u_longlong_t)FUNC_10(&VAR_5[VAR_7]));

 if (FUNC_8(VAR_3)) {
  (void) FUNC_13(VAR_1 + FUNC_16(VAR_1),
      VAR_2 - FUNC_16(VAR_1),
      "%llxL B=%llu",
      (u_longlong_t)FUNC_4(VAR_3),
      (u_longlong_t)VAR_3->blk_birth);
 } else {
  (void) FUNC_13(VAR_1 + FUNC_16(VAR_1),
      VAR_2 - FUNC_16(VAR_1),
      "%llxL/%llxP F=%llu B=%llu/%llu",
      (u_longlong_t)FUNC_4(VAR_3),
      (u_longlong_t)FUNC_6(VAR_3),
      (u_longlong_t)FUNC_3(VAR_3),
      (u_longlong_t)VAR_3->blk_birth,
      (u_longlong_t)FUNC_9(VAR_3));
  if (VAR_4)
   (void) FUNC_13(VAR_1 + FUNC_16(VAR_1),
       VAR_2 - FUNC_16(VAR_1), " %s", "FREE");
 }
}
