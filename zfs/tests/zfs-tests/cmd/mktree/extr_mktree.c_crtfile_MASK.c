
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*,char*,int,int ) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int,char*,char*) ;
 int VAR_3 ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static void
FUNC_11(char *VAR_4)
{
 int VAR_5 = -1;
 int VAR_6, VAR_7;
 char *VAR_8 = "0123456789ABCDF";
 char *VAR_9;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(1);
 }

 VAR_7 = sizeof (char) * 1024;
 VAR_9 = (char *)FUNC_9(VAR_7);
 for (VAR_6 = 0; VAR_6 < VAR_7 / FUNC_8(VAR_8); VAR_6++) {
  int VAR_10 = VAR_6 * FUNC_8(VAR_8);
  (void) FUNC_6(VAR_9+VAR_10, VAR_7-VAR_10, "%s", VAR_8);
 }

 if ((VAR_5 = FUNC_5(VAR_4, VAR_0|VAR_1, 0777)) < 0) {
  (void) FUNC_2(VAR_3, "open(%s, O_CREAT|O_RDWR, 0777) failed."
      "\n[%d]: %s.\n", VAR_4, VAR_2, FUNC_7(VAR_2));
  FUNC_1(VAR_2);
 }
 if (FUNC_10(VAR_5, VAR_9, 1024) < 1024) {
  (void) FUNC_2(VAR_3, "write(fd, pbuf, 1024) failed."
      "\n[%d]: %s.\n", VAR_2, FUNC_7(VAR_2));
  FUNC_1(VAR_2);
 }

 if (FUNC_4(VAR_5, "user.xattr", VAR_9, 1024, 0) < 0) {
  (void) FUNC_2(VAR_3, "fsetxattr(fd, \"xattr\", pbuf, "
      "1024, 0) failed.\n[%d]: %s.\n", VAR_2, FUNC_7(VAR_2));
  FUNC_1(VAR_2);
 }

 (void) FUNC_0(VAR_5);
 FUNC_3(VAR_9);
}
