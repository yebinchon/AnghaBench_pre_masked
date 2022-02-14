
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int snapname ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static boolean_t
FUNC_4(char *VAR_6, uint64_t VAR_7)
{
 char VAR_8[VAR_5];
 int VAR_9;

 (void) FUNC_2(VAR_8, sizeof (VAR_8), "%llu", (u_longlong_t)VAR_7);

 VAR_9 = FUNC_0(VAR_6, VAR_8);
 if (VAR_9 == VAR_3) {
  FUNC_3(VAR_4);
  return (VAR_0);
 }
 if (VAR_9 != 0 && VAR_9 != VAR_2) {
  FUNC_1(0, "ztest_snapshot_create(%s@%s) = %d", VAR_6,
      VAR_8, VAR_9);
 }
 return (VAR_1);
}
