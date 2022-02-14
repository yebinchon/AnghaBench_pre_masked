
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_longlong_t ;
typedef int id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int*,int) ;
 int FUNC_4 (char*,int,char*,int ) ;

__attribute__((used)) static void
FUNC_5(char *VAR_1, int VAR_2)
{
 uint64_t VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_1("/dev/urandom", VAR_0);
 if (VAR_4 >= 0) {
  if (FUNC_3(VAR_4, &VAR_3, sizeof (VAR_3)) != sizeof (VAR_3))
   VAR_3 = 0;

  FUNC_0(VAR_4);
 }

 if (VAR_3 == 0)
  VAR_3 = (((uint64_t)FUNC_2()) << 32) | (uint64_t)FUNC_2();

 FUNC_4(VAR_1, VAR_2, "zfs-%016llx", (u_longlong_t)VAR_3);
}
