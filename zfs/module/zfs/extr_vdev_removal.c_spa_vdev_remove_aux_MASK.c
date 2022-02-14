
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int ** FUNC_1 (int,int ) ;
 int FUNC_2 (int **,int) ;
 scalar_t__ FUNC_3 (int *,char*,int **,int) ;
 scalar_t__ FUNC_4 (int *,int **,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_7(nvlist_t *VAR_2, char *VAR_3, nvlist_t **VAR_4, int VAR_5,
    nvlist_t *VAR_6)
{
 nvlist_t **VAR_7 = ((void*)0);

 if (VAR_5 > 1)
  VAR_7 = FUNC_1((VAR_5 - 1) * sizeof (void *), VAR_1);

 for (int VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (VAR_4[VAR_8] == VAR_6)
   continue;
  FUNC_0(FUNC_4(VAR_4[VAR_8], &VAR_7[VAR_9++], VAR_1) == 0);
 }

 FUNC_0(FUNC_6(VAR_2, VAR_3, VAR_0) == 0);
 FUNC_0(FUNC_3(VAR_2, VAR_3, VAR_7, VAR_5 - 1) == 0);

 for (int VAR_10 = 0; VAR_10 < VAR_5 - 1; VAR_10++)
  FUNC_5(VAR_7[VAR_10]);

 if (VAR_5 > 1)
  FUNC_2(VAR_7, (VAR_5 - 1) * sizeof (void *));
}
