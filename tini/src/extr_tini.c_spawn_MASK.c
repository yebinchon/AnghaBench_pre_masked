
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int signal_configuration_t ;
typedef int pid_t ;




 int FUNC_0 (char*,char* const,...) ;
 int FUNC_1 (char*,char* const,int) ;
 int VAR_0 ;
 int FUNC_2 (char* const,char* const*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int const* const) ;
 int FUNC_6 (int) ;

int FUNC_7(const signal_configuration_t* const VAR_1, char* const VAR_2[], int* const VAR_3) {
 pid_t VAR_4;



 VAR_4 = FUNC_3();
 if (VAR_4 < 0) {
  FUNC_0("fork failed: %s", FUNC_6(VAR_0));
  return 1;
 } else if (VAR_4 == 0) {


  if (FUNC_4()) {
   return 1;
  }


  if (FUNC_5(VAR_1)) {
   return 1;
  }

  FUNC_2(VAR_2[0], VAR_2);




  int VAR_5 = 1;
  switch (VAR_0) {
   case 128:
    VAR_5 = 127;
    break;
   case 129:
    VAR_5 = 126;
    break;
  }
  FUNC_0("exec %s failed: %s", VAR_2[0], FUNC_6(VAR_0));
  return VAR_5;
 } else {

  FUNC_1("Spawned child process '%s' with pid '%i'", VAR_2[0], VAR_4);
  *VAR_3 = VAR_4;
  return 0;
 }
}
