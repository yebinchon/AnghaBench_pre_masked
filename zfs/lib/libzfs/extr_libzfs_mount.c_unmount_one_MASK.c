
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int *,int ,int ,char const*) ;

__attribute__((used)) static int
FUNC_3(libzfs_handle_t *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 != 0) {
  return (FUNC_2(VAR_2, VAR_0,
      FUNC_0(VAR_1, "cannot unmount '%s'"),
      VAR_3));
 }

 return (0);
}
