
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int ,char const*) ;
 scalar_t__ FUNC_1 (int*,char const*,int ,int) ;
 int FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(int *VAR_2, const char *VAR_3)
{
 if (FUNC_0(VAR_2, VAR_1, VAR_3))
  return 1;


 if (!FUNC_2(VAR_3, "color"))
  VAR_3 += 5;
 return FUNC_3(VAR_3) &&
        FUNC_1(VAR_2, VAR_3, 0, 255) == VAR_0;
}
