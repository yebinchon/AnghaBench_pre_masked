
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_longlong_t ;
struct stat64 {scalar_t__ st_size; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,struct stat64*) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*,scalar_t__,int **,int ) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char*,char const*,char*) ;
 scalar_t__ FUNC_11 (int,char*,scalar_t__) ;
 int VAR_2 ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_3)
{
 int VAR_4;
 struct stat64 VAR_5;
 char *VAR_6;
 nvlist_t *VAR_7;

 if ((VAR_4 = FUNC_9(VAR_3, VAR_0)) < 0) {
  (void) FUNC_10("cannot open '%s': %s\n", VAR_3,
      FUNC_12(VAR_1));
  FUNC_2(1);
 }

 if (FUNC_5(VAR_4, &VAR_5) != 0) {
  (void) FUNC_10("failed to stat '%s': %s\n", VAR_3,
      FUNC_12(VAR_1));
  FUNC_2(1);
 }

 if ((VAR_6 = FUNC_6(VAR_5.st_size)) == ((void*)0)) {
  (void) FUNC_3(VAR_2, "failed to allocate %d bytes\n",
      (u_longlong_t)VAR_5.st_size);
  FUNC_2(1);
 }

 if (FUNC_11(VAR_4, VAR_6, VAR_5.st_size) != VAR_5.st_size) {
  (void) FUNC_3(VAR_2, "failed to read %d bytes\n",
      (u_longlong_t)VAR_5.st_size);
  FUNC_2(1);
 }

 (void) FUNC_0(VAR_4);

 if (FUNC_8(VAR_6, VAR_5.st_size, &VAR_7, 0) != 0) {
  (void) FUNC_3(VAR_2, "failed to unpack nvlist\n");
  FUNC_2(1);
 }

 FUNC_4(VAR_6);

 FUNC_1(VAR_7, 0);

 FUNC_7(VAR_7);
}
