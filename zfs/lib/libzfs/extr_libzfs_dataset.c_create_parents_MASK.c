
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int * FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,int ,int *) ;
 int FUNC_6 (int *,char*,char const*,char*) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int *,char*,int ) ;
 scalar_t__ FUNC_9 (int *) ;

int
FUNC_10(libzfs_handle_t *VAR_2, char *VAR_3, int VAR_4)
{
 zfs_handle_t *VAR_5;
 char *VAR_6;
 const char *VAR_7;


 VAR_6 = VAR_3 + VAR_4;
 if (*VAR_6 != '/') {
  FUNC_0(FUNC_3(VAR_6, '/') == ((void*)0));
  VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_1);
 } else {
  *VAR_6 = '\0';
  VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_1);
  *VAR_6 = '/';
 }
 if (VAR_5 == ((void*)0))
  return (-1);
 FUNC_4(VAR_5);





 for (VAR_6 = VAR_3 + VAR_4 + 1;
     (VAR_6 = FUNC_3(VAR_6, '/')) != ((void*)0); *VAR_6 = '/', VAR_6++) {

  *VAR_6 = '\0';

  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5) {

   FUNC_4(VAR_5);
   continue;
  }

  if (FUNC_5(VAR_2, VAR_3, VAR_1,
      ((void*)0)) != 0) {
   VAR_7 = FUNC_1(VAR_0, "create");
   goto ancestorerr;
  }

  VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_1);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = FUNC_1(VAR_0, "open");
   goto ancestorerr;
  }

  if (FUNC_7(VAR_5, ((void*)0), 0) != 0) {
   VAR_7 = FUNC_1(VAR_0, "mount");
   goto ancestorerr;
  }

  if (FUNC_9(VAR_5) != 0) {
   VAR_7 = FUNC_1(VAR_0, "share");
   goto ancestorerr;
  }

  FUNC_4(VAR_5);
 }

 return (0);

ancestorerr:
 FUNC_6(VAR_2, FUNC_1(VAR_0,
     "failed to %s ancestor '%s'"), VAR_7, VAR_3);
 return (-1);
}
