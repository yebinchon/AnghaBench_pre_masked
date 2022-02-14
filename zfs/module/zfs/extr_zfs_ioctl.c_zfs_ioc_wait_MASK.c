
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int int32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (char const*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_4, nvlist_t *VAR_5, nvlist_t *VAR_6)
{
 int32_t VAR_7;
 uint64_t VAR_8;
 boolean_t VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_5, VAR_1, &VAR_7) != 0)
  return (VAR_0);

 if (FUNC_2(VAR_5, VAR_2, &VAR_8) == 0)
  VAR_10 = FUNC_4(VAR_4, VAR_7, VAR_8, &VAR_9);
 else
  VAR_10 = FUNC_3(VAR_4, VAR_7, &VAR_9);

 if (VAR_10 == 0)
  FUNC_0(VAR_6, VAR_3, VAR_9);

 return (VAR_10);
}
