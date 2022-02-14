
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tgtidx ;
struct TYPE_11__ {int rto_dcols; int rto_sanity; } ;
typedef TYPE_1__ raidz_test_opts_t ;
struct TYPE_12__ {int rm_cols; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_13__ {scalar_t__ rto_should_stop; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int const VAR_1 ;
 int const VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_6__ VAR_3 ;
 int FUNC_5 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int
FUNC_6(raidz_test_opts_t *VAR_4, raidz_map_t *VAR_5, const int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10[3];
 int VAR_11 = 0;
 static const int VAR_12[7][3] = {
  {1, 2, 3},
  {0, 2, 3},
  {0, 1, 3},
  {2, 3, 4},
  {1, 3, 4},
  {0, 3, 4},
  {3, 4, 5}
 };

 FUNC_3(VAR_10, VAR_12[VAR_6], sizeof (VAR_10));

 if (VAR_6 < VAR_1) {

  for (VAR_7 = 0; VAR_7 < VAR_4->rto_dcols; VAR_7++) {
   if (VAR_7 >= VAR_5->rm_cols - FUNC_4(VAR_5))
    continue;


   if (VAR_3.rto_should_stop)
    return (VAR_11);

   FUNC_0(VAR_0, "[%d] ", VAR_7);

   VAR_10[2] = VAR_7 + FUNC_4(VAR_5);

   FUNC_2(VAR_5, VAR_10+2, 1);

   if (!VAR_4->rto_sanity)
    FUNC_5(VAR_5, VAR_10, 3);

   if (FUNC_1(VAR_4, VAR_5) != 0) {
    VAR_11++;
    FUNC_0(VAR_0, "\nREC D[%d]... [FAIL]\n", VAR_7);
   }
  }

 } else if (VAR_6 < VAR_2) {

  for (VAR_7 = 0; VAR_7 < VAR_4->rto_dcols; VAR_7++) {
   if (VAR_7 >= VAR_5->rm_cols - FUNC_4(VAR_5))
    continue;
   for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_4->rto_dcols; VAR_8++) {
    if (VAR_8 >= VAR_5->rm_cols - FUNC_4(VAR_5))
     continue;


    if (VAR_3.rto_should_stop)
     return (VAR_11);

    FUNC_0(VAR_0, "[%d %d] ", VAR_7, VAR_8);

    VAR_10[1] = VAR_7 + FUNC_4(VAR_5);
    VAR_10[2] = VAR_8 + FUNC_4(VAR_5);

    FUNC_2(VAR_5, VAR_10+1, 2);

    if (!VAR_4->rto_sanity)
     FUNC_5(VAR_5, VAR_10, 3);

    if (FUNC_1(VAR_4, VAR_5) != 0) {
     VAR_11++;
     FUNC_0(VAR_0, "\nREC D[%d %d]... "
         "[FAIL]\n", VAR_7, VAR_8);
    }
   }
  }
 } else {

  for (VAR_7 = 0; VAR_7 < VAR_4->rto_dcols; VAR_7++) {
   if (VAR_7 >= VAR_5->rm_cols - FUNC_4(VAR_5))
    continue;
   for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_4->rto_dcols; VAR_8++) {
    if (VAR_8 >= VAR_5->rm_cols - FUNC_4(VAR_5))
     continue;
    for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_4->rto_dcols; VAR_9++) {
     if (VAR_9 >=
         VAR_5->rm_cols - FUNC_4(VAR_5))
      continue;


     if (VAR_3.rto_should_stop)
      return (VAR_11);

     FUNC_0(VAR_0, "[%d %d %d]", VAR_7, VAR_8, VAR_9);

     VAR_10[0] = VAR_7 + FUNC_4(VAR_5);
     VAR_10[1] = VAR_8 + FUNC_4(VAR_5);
     VAR_10[2] = VAR_9 + FUNC_4(VAR_5);

     FUNC_2(VAR_5, VAR_10, 3);

     if (!VAR_4->rto_sanity)
      FUNC_5(VAR_5,
          VAR_10, 3);

     if (FUNC_1(VAR_4, VAR_5) != 0) {
      VAR_11++;
      FUNC_0(VAR_0,
          "\nREC D[%d %d %d]... "
          "[FAIL]\n", VAR_7, VAR_8, VAR_9);
     }
    }
   }
  }
 }
 return (VAR_11);
}
