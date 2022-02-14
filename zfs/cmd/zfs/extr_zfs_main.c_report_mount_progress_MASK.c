
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, int VAR_2)
{
 static time_t VAR_3 = 0;
 time_t VAR_4 = FUNC_4(((void*)0));
 char VAR_5[32];


 ++VAR_1;


 if (VAR_1 == 1) {
  FUNC_2(FUNC_1("Mounting ZFS filesystems"));
 } else if (VAR_1 != VAR_2 && VAR_3 + VAR_0 >= VAR_4) {

  return;
 }

 VAR_3 = VAR_4;

 (void) FUNC_3(VAR_5, "(%d/%d)", VAR_1, VAR_2);

 if (VAR_1 == VAR_2)
  FUNC_0(VAR_5);
 else
  FUNC_5(VAR_5);
}
