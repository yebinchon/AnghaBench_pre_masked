
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int progdir ;
typedef int pid_t ;
typedef int lua_State ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char*,int*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char*,int) ;
 int FUNC_15 (int*,int,char*,size_t*,int *,int ) ;

__attribute__((used)) static void FUNC_16(lua_State *VAR_7) {
  char VAR_8[VAR_6 + 1];
  char *VAR_9;
  int VAR_10 = sizeof(VAR_8)/sizeof(char);
  int VAR_11 = 0;
  VAR_11 = FUNC_11("/proc/self/exe", VAR_8, VAR_10);
  if (VAR_11 > 0) VAR_8[VAR_11] = 0;
  if (VAR_11 == 0 || VAR_11 == VAR_10 || (VAR_9 = FUNC_14(VAR_8, (int)VAR_4[0])) == ((void*)0))
    FUNC_5(VAR_7, "unable to get process executable path");
  else {
    *VAR_9 = '\0';


    FUNC_6(VAR_7, FUNC_8(VAR_7, -1), VAR_5, VAR_8);
    FUNC_7(VAR_7, -2);
  }
}
