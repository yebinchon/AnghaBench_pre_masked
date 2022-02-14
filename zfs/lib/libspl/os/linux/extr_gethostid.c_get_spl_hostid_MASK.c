
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,unsigned long*) ;
 char* FUNC_3 (char*) ;
 unsigned long FUNC_4 (char*,int *,int ) ;

__attribute__((used)) static unsigned long
FUNC_5(void)
{
 FILE *VAR_1;
 unsigned long VAR_2;
 char *VAR_3;




 VAR_3 = FUNC_3("ZFS_HOSTID");
 if (VAR_3) {
  VAR_2 = FUNC_4(VAR_3, ((void*)0), 0);
  return (VAR_2 & VAR_0);
 }

 VAR_1 = FUNC_1("/sys/module/spl/parameters/spl_hostid", "r");
 if (!VAR_1)
  return (0);

 if (FUNC_2(VAR_1, "%lu", &VAR_2) != 1)
  VAR_2 = 0;

 FUNC_0(VAR_1);

 return (VAR_2 & VAR_0);
}
