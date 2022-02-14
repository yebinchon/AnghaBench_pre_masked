
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int longlong_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(zfs_handle_t *VAR_0, zfs_prop_t VAR_1, uint64_t VAR_2)
{
 char VAR_3[64];

 (void) FUNC_0(VAR_3, sizeof (VAR_3), "%llu", (longlong_t)VAR_2);
 return (FUNC_1(VAR_0, FUNC_2(VAR_1), VAR_3));
}
