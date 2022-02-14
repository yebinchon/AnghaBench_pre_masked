
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_2__ {int zo_raidz_parity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (char*,char*,char*,size_t,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int **,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int ** FUNC_7 (int,int ) ;
 int FUNC_8 (int **,int) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static nvlist_t *
FUNC_9(char *VAR_7, char *VAR_8, char *VAR_9, size_t VAR_10,
    uint64_t VAR_11, int VAR_12)
{
 nvlist_t *VAR_13, **VAR_14;
 int VAR_15;

 if (VAR_12 < 2)
  return (FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11));
 VAR_14 = FUNC_7(VAR_12 * sizeof (nvlist_t *), VAR_1);

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  VAR_14[VAR_15] = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 FUNC_0(FUNC_5(&VAR_13, VAR_0, 0) == 0);
 FUNC_0(FUNC_3(VAR_13, VAR_5,
     VAR_2) == 0);
 FUNC_0(FUNC_4(VAR_13, VAR_4,
     VAR_6.zo_raidz_parity) == 0);
 FUNC_0(FUNC_2(VAR_13, VAR_3,
     VAR_14, VAR_12) == 0);

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
  FUNC_6(VAR_14[VAR_15]);

 FUNC_8(VAR_14, VAR_12 * sizeof (nvlist_t *));

 return (VAR_13);
}
