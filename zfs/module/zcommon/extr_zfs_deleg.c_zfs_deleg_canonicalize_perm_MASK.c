
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_2__ {int * z_perm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char const* FUNC_3 (scalar_t__) ;

const char *
FUNC_4(const char *VAR_2)
{
 int VAR_3;
 zfs_prop_t VAR_4;

 for (VAR_3 = 0; VAR_1[VAR_3].z_perm != ((void*)0); VAR_3++) {
  if (FUNC_0(VAR_2, VAR_1[VAR_3].z_perm) == 0)
   return (VAR_2);
 }

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 != VAR_0 && FUNC_2(VAR_4))
  return (FUNC_3(VAR_4));
 return (((void*)0));

}
