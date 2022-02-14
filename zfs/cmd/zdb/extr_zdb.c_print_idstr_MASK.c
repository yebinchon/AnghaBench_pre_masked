
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,int ,...) ;
 char* FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(uint64_t VAR_1, const char *VAR_2)
{
 if (FUNC_0(VAR_1)) {
  char *VAR_3;

  VAR_3 = FUNC_3(&VAR_0, FUNC_0(VAR_1));
  (void) FUNC_2("\t%s     %llx [%s-%d]\n", VAR_2,
      (u_longlong_t)VAR_1, VAR_3, (int)FUNC_1(VAR_1));
 } else {
  (void) FUNC_2("\t%s     %llu\n", VAR_2, (u_longlong_t)VAR_1);
 }

}
