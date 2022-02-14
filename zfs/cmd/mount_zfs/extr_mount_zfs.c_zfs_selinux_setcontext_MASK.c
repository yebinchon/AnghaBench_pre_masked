
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_prop_t ;
typedef int zfs_handle_t ;
typedef int context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *,int ,char*,int,int *,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_3(zfs_handle_t *VAR_3, zfs_prop_t VAR_4, const char *VAR_5,
    char *VAR_6, char *VAR_7)
{
 char VAR_8[VAR_2];

 if (FUNC_2(VAR_3, VAR_4, VAR_8, sizeof (VAR_8),
     ((void*)0), ((void*)0), 0, VAR_0) == 0) {
  if (FUNC_1(VAR_8, "none") != 0)
   FUNC_0(VAR_5, VAR_8, VAR_6, VAR_7, VAR_1);
 }
}
