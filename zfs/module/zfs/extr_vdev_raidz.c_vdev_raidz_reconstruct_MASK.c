
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_9__ {scalar_t__ rc_error; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_2__*,int*,int*,int) ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;
 int FUNC_5 (TYPE_2__*,int*,int) ;

int
FUNC_6(raidz_map_t *VAR_6, const int *VAR_7, int VAR_8)
{
 int VAR_9[VAR_3], *VAR_10;
 int VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;
 int VAR_18[VAR_3];




 for (VAR_12 = 1; VAR_12 < VAR_8; VAR_12++) {
  FUNC_0(VAR_7[VAR_12] > VAR_7[VAR_12 - 1]);
 }

 VAR_16 = VAR_6->rm_firstdatacol;
 VAR_17 = VAR_6->rm_cols - VAR_16;
 VAR_11 = 0;
 for (VAR_12 = 0, VAR_13 = 0; VAR_13 < VAR_6->rm_cols; VAR_13++) {
  if (VAR_13 < VAR_6->rm_firstdatacol)
   VAR_18[VAR_13] = VAR_0;

  if (VAR_12 < VAR_8 && VAR_13 == VAR_7[VAR_12]) {
   VAR_9[VAR_11++] = VAR_13;
   VAR_12++;
  } else if (VAR_6->rm_col[VAR_13].rc_error != 0) {
   VAR_9[VAR_11++] = VAR_13;
  } else if (VAR_13 >= VAR_6->rm_firstdatacol) {
   VAR_17--;
  } else {
   VAR_18[VAR_13] = VAR_1;
   VAR_16--;
  }
 }

 FUNC_0(VAR_11 >= VAR_8);
 FUNC_0(VAR_17 >= 0);
 FUNC_0(VAR_17 + VAR_16 == VAR_11);

 VAR_10 = &VAR_9[VAR_16];


 VAR_14 = FUNC_1(VAR_6, VAR_18, VAR_10, VAR_17);
 if (VAR_14 != VAR_2)
  return (VAR_14);




 switch (VAR_17) {
 case 1:
  if (VAR_18[VAR_4])
   return (FUNC_3(VAR_6, VAR_10, 1));

  FUNC_0(VAR_6->rm_firstdatacol > 1);

  if (VAR_18[VAR_5])
   return (FUNC_5(VAR_6, VAR_10, 1));

  FUNC_0(VAR_6->rm_firstdatacol > 2);
  break;

 case 2:
  FUNC_0(VAR_6->rm_firstdatacol > 1);

  if (VAR_18[VAR_4] &&
      VAR_18[VAR_5])
   return (FUNC_4(VAR_6, VAR_10, 2));

  FUNC_0(VAR_6->rm_firstdatacol > 2);

  break;
 }

 VAR_15 = FUNC_2(VAR_6, VAR_9, VAR_11);
 FUNC_0(VAR_15 < (1 << VAR_3));
 FUNC_0(VAR_15 > 0);
 return (VAR_15);
}
