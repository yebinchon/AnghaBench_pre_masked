
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int (*) (int *,void*),void*) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_2, void *VAR_3)
{
 int VAR_4 = (int)FUNC_5(VAR_2, VAR_0);
 int *VAR_5 = (int *)VAR_3;

 if (VAR_4 > VAR_1) {
  (void) FUNC_1(FUNC_0("%s (v%d) is not supported by this "
      "implementation of ZFS.\n"),
      FUNC_3(VAR_2), VAR_4);
  (*VAR_5)++;
 }

 FUNC_4(VAR_2, FUNC_6, VAR_3);

 FUNC_2(VAR_2);

 return (0);
}
