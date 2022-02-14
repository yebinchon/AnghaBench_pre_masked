
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zver_userland ;
typedef int zver_kernel ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;

int
FUNC_5(void)
{
 char VAR_2[128];
 char VAR_3[128];

 if (FUNC_3(VAR_3, sizeof (VAR_3)) == -1) {
  FUNC_0(VAR_1, "zfs_version_kernel() failed: %s\n",
      FUNC_2(VAR_0));
  return (-1);
 }

 FUNC_4(VAR_2, sizeof (VAR_2));

 (void) FUNC_1("%s\n", VAR_2);
 (void) FUNC_1("zfs-kmod-%s\n", VAR_3);

 return (0);
}
