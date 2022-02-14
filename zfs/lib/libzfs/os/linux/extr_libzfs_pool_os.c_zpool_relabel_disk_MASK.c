
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int *,int ,char const*) ;
 int FUNC_7 (int *,int ,char const*,...) ;

int
FUNC_8(libzfs_handle_t *VAR_8, const char *VAR_9, const char *VAR_10)
{
 int VAR_11, VAR_12;

 if ((VAR_11 = FUNC_5(VAR_9, VAR_4|VAR_3)) < 0) {
  FUNC_7(VAR_8, FUNC_1(VAR_5, "cannot "
      "relabel '%s': unable to open device: %d"), VAR_9, VAR_7);
  return (FUNC_6(VAR_8, VAR_2, VAR_10));
 }
 VAR_12 = FUNC_2(VAR_11);


 (void) FUNC_3(VAR_11);
 (void) FUNC_4(VAR_11, VAR_0);

 (void) FUNC_0(VAR_11);
 if (VAR_12 && VAR_12 != VAR_6) {
  FUNC_7(VAR_8, FUNC_1(VAR_5, "cannot "
      "relabel '%s': unable to read disk capacity"), VAR_9);
  return (FUNC_6(VAR_8, VAR_1, VAR_10));
 }
 return (0);
}
