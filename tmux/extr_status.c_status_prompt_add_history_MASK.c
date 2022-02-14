
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,size_t) ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int * FUNC_3 (int *,int,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3)
{
 size_t VAR_4;

 if (VAR_2 > 0 &&
     FUNC_2(VAR_1[VAR_2 - 1], VAR_3) == 0)
  return;

 if (VAR_2 == VAR_0) {
  FUNC_0(VAR_1[0]);

  VAR_4 = (VAR_0 - 1) * sizeof *VAR_1;
  FUNC_1(&VAR_1[0], &VAR_1[1], VAR_4);

  VAR_1[VAR_2 - 1] = FUNC_4(VAR_3);
  return;
 }

 VAR_1 = FUNC_3(VAR_1,
     VAR_2 + 1, sizeof *VAR_1);
 VAR_1[VAR_2++] = FUNC_4(VAR_3);
}
