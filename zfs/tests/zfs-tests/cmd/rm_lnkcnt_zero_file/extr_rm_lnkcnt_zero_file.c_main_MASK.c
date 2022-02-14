
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_nlink; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int *,int ,void*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,struct stat*) ;
 int VAR_6 ;

int
FUNC_8(int VAR_7, char **VAR_8)
{
 int VAR_9;
 pthread_t VAR_10;

 if (VAR_7 == 1) {
  (void) FUNC_3("Usage: %s <filebase>\n", VAR_8[0]);
  FUNC_0(-1);
 }

 VAR_4 = VAR_8[1];
 VAR_9 = FUNC_1(VAR_4, VAR_0 | VAR_2 | VAR_1, 0644);
 if (VAR_9 < 0) {
  FUNC_2("creating test file");
  FUNC_0(-1);
 }

 (void) FUNC_5(4);
 (void) FUNC_4(&VAR_10, ((void*)0), VAR_5, ((void*)0));
 (void) FUNC_4(&VAR_10, ((void*)0), VAR_3, ((void*)0));
 (void) FUNC_4(&VAR_10, ((void*)0), VAR_6, (void *) &VAR_9);

 for (;;) {
  int VAR_11;
  struct stat VAR_12;

  VAR_11 = FUNC_7(VAR_4, &VAR_12);
  if (VAR_11 == 0 && (VAR_12.st_nlink > 2 || VAR_12.st_nlink < 1)) {
   (void) FUNC_3("st.st_nlink = %d, exiting\n", (int)VAR_12.st_nlink);

   FUNC_0(0);
  }
  (void) FUNC_6(1);
 }

 return (0);
}
