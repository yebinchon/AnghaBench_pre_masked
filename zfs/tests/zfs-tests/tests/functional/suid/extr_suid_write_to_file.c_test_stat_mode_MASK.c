
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int penv ;
typedef int mode_t ;
typedef int fpath ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 int FUNC_10 (char*,struct stat*) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char*,int) ;

__attribute__((used)) static void
FUNC_14(mode_t VAR_4)
{
 struct stat VAR_5;
 int VAR_6, VAR_7;
 char VAR_8[1024];
 char *VAR_9[] = {"TESTDIR", "TESTFILE0"};
 char VAR_10[] = "test";
 mode_t VAR_11;
 mode_t VAR_12 = 0777 | VAR_4;




 for (VAR_6 = 0; VAR_6 < sizeof (VAR_9) / sizeof (char *); VAR_6++) {
  if ((VAR_9[VAR_6] = FUNC_4(VAR_9[VAR_6])) == ((void*)0)) {
   FUNC_3(VAR_3, "getenv(penv[%d])\n", VAR_6);
   FUNC_2(1);
  }
 }

 FUNC_11(0);
 if (FUNC_10(VAR_9[0], &VAR_5) == -1 && FUNC_5(VAR_9[0], VAR_12) == -1) {
  FUNC_7("mkdir");
  FUNC_2(2);
 }

 FUNC_9(VAR_8, sizeof (VAR_8), "%s/%s", VAR_9[0], VAR_9[1]);
 FUNC_12(VAR_8);
 if (FUNC_10(VAR_8, &VAR_5) == 0) {
  FUNC_3(VAR_3, "%s exists\n", VAR_8);
  FUNC_2(3);
 }

 VAR_7 = FUNC_1(VAR_8, VAR_12);
 if (VAR_7 == -1) {
  FUNC_7("creat");
  FUNC_2(4);
 }
 FUNC_0(VAR_7);

 if (FUNC_8(65534) == -1) {
  FUNC_7("setuid");
  FUNC_2(5);
 }

 VAR_7 = FUNC_6(VAR_8, VAR_0);
 if (VAR_7 == -1) {
  FUNC_7("open");
  FUNC_2(6);
 }

 if (FUNC_13(VAR_7, VAR_10, sizeof (VAR_10)) == -1) {
  FUNC_7("write");
  FUNC_2(7);
 }
 FUNC_0(VAR_7);

 if (FUNC_10(VAR_8, &VAR_5) == -1) {
  FUNC_7("stat");
  FUNC_2(8);
 }
 FUNC_12(VAR_8);


 VAR_11 = VAR_5.st_mode & (0777 | VAR_2 | VAR_1);
 if (VAR_11 != (VAR_12 & 0777)) {
  FUNC_3(VAR_3, "stat(2) %o\n", VAR_11);
  FUNC_2(9);
 }
}
