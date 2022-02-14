
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int*) ;

__attribute__((used)) static boolean_t
FUNC_4(const char *VAR_4, int VAR_5)
{
 objset_t *VAR_6;
 boolean_t VAR_7 = VAR_0;

 if (FUNC_0(VAR_4, VAR_2, &VAR_6) == 0) {
  uint64_t VAR_8;

  if (FUNC_2(VAR_6) != VAR_1) {
   FUNC_1(VAR_6, VAR_2);
   return (VAR_0);
  }

  if (FUNC_3(VAR_6, VAR_3, &VAR_8) == 0)
   VAR_7 = VAR_8 < VAR_5;
  FUNC_1(VAR_6, VAR_2);
 }
 return (VAR_7);
}
