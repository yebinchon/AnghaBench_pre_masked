
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_onexit_t ;
typedef int minor_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int *) ;

int
FUNC_4(int VAR_2, minor_t *VAR_3)
{
 zfs_onexit_t *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_2);
  return (VAR_5);
 }

 VAR_4 = FUNC_2(*VAR_3, VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_2);
  return (FUNC_0(VAR_0));
 }
 return (0);
}
