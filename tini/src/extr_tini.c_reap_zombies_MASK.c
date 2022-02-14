
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_3 ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int*,int ) ;
 int VAR_6 ;

int FUNC_14(const pid_t VAR_7, int* const VAR_8) {
 pid_t VAR_9;
 int VAR_10;

 while (1) {
  VAR_9 = FUNC_13(-1, &VAR_10, VAR_3);

  switch (VAR_9) {

   case -1:
    if (VAR_4 == VAR_0) {
     FUNC_5("No child to wait");
     break;
    }
    FUNC_3("Error while waiting for pids: '%s'", FUNC_11(VAR_4));
    return 1;

   case 0:
    FUNC_5("No child to reap");
    break;

   default:



    FUNC_2("Reaped child with pid: '%i'", VAR_9);
    if (VAR_9 == VAR_7) {
     if (FUNC_8(VAR_10)) {

      FUNC_4("Main child exited normally (with status '%i')", FUNC_7(VAR_10));
      *VAR_8 = FUNC_7(VAR_10);
     } else if (FUNC_9(VAR_10)) {



      FUNC_4("Main child exited with signal (with signal '%s')", FUNC_12(FUNC_10(VAR_10)));
      *VAR_8 = 128 + FUNC_10(VAR_10);
     } else {
      FUNC_3("Main child exited for unknown reason");
      return 1;
     }


     *VAR_8 = *VAR_8 % (VAR_1 - VAR_2 + 1);


     FUNC_0(VAR_5, *VAR_8);
     if (FUNC_1(VAR_5, *VAR_8)) {
      *VAR_8 = 0;
     }
    } else if (VAR_6 > 0) {
     FUNC_6("Reaped zombie process with pid=%i", VAR_9);
    }


    continue;
  }


  break;
 }

 return 0;
}
