
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_type_t ;
typedef int zfs_handle_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,char const*,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(libzfs_handle_t *VAR_5, const char *VAR_6, zfs_type_t VAR_7)
{
 zfs_handle_t *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 VAR_8 = FUNC_6(VAR_5, VAR_6, VAR_7);
 if (VAR_8 == ((void*)0))
  return (1);





 if (FUNC_4(VAR_8) == VAR_3) {
  FUNC_3(VAR_8);
  return (0);
 }
 if (FUNC_8(VAR_2, VAR_7, VAR_0) &&
     FUNC_7(VAR_8, VAR_2) == VAR_1) {
  if (FUNC_1() != 0) {
   (void) FUNC_0(VAR_4, "%s", FUNC_2("filesystem "
       "successfully created, but it may only be "
       "mounted by root\n"));
   VAR_9 = 1;
  } else if (FUNC_5(VAR_8, ((void*)0), 0) != 0) {
   (void) FUNC_0(VAR_4, "%s", FUNC_2("filesystem "
       "successfully created, but not mounted\n"));
   VAR_9 = 1;
  } else if (FUNC_9(VAR_8) != 0) {
   (void) FUNC_0(VAR_4, "%s", FUNC_2("filesystem "
       "successfully created, but not shared\n"));
   VAR_9 = 1;
  }
 }

 FUNC_3(VAR_8);

 return (VAR_9);
}
