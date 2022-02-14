
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static boolean_t
FUNC_4(nvlist_t *VAR_7)
{
 int VAR_8;
 uint64_t VAR_9;
 char *VAR_10;

 VAR_8 = FUNC_1(VAR_7,
     FUNC_3(VAR_2), &VAR_9);
 if (VAR_8 == 0 && VAR_9 != VAR_6)
  return (VAR_1);

 VAR_8 = FUNC_0(VAR_7,
     FUNC_3(VAR_4), &VAR_10);
 if (VAR_8 == 0 && FUNC_2(VAR_10, "none") != 0)
  return (VAR_1);

 VAR_8 = FUNC_1(VAR_7,
     FUNC_3(VAR_3), &VAR_9);
 if (VAR_8 == 0)
  return (VAR_1);

 VAR_8 = FUNC_1(VAR_7,
     FUNC_3(VAR_5), &VAR_9);
 if (VAR_8 == 0)
  return (VAR_1);

 return (VAR_0);
}
