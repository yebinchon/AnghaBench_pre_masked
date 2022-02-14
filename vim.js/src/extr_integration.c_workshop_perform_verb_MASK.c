
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char*,char*,int,int,int,int,int,int,int,char*) ;
 scalar_t__ FUNC_5 (void*,char**,int*,int*,int*,int*,int*,int*,int*,char**) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int ) ;

void FUNC_8(char *VAR_4, void *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 char *VAR_14;

 char VAR_15[2*VAR_0];




 if (FUNC_5(VAR_5,
       &VAR_6,
       &VAR_7,
       &VAR_8,
       &VAR_9,
       &VAR_10,
       &VAR_11,
       &VAR_12,
       &VAR_13,
       &VAR_14)) {
  if (VAR_14 == ((void*)0)) {
   VAR_14 = FUNC_0("");
  }





  if (VAR_2) {
   if (!FUNC_2(VAR_4, "build.build") || !FUNC_2(VAR_4, "build.build-file") ||
       !FUNC_2(VAR_4, "debug.fix") || !FUNC_2(VAR_4, "debug.fix-all")) {
    FUNC_6();
   }
  }

  FUNC_4(VAR_15, sizeof(VAR_15),
   FUNC_0("toolVerb %s %s %d,%d %d,%d %d,%d %d %s\n"),
   VAR_4,
   VAR_6,
   VAR_7, VAR_8,
   VAR_9, VAR_10,
   VAR_11, VAR_12,
   VAR_13,
   VAR_14);
  VAR_1 = FUNC_7(VAR_3, VAR_15, FUNC_3(VAR_15));
  if (*VAR_14) {
   FUNC_1(VAR_14);
  }
 }
}
