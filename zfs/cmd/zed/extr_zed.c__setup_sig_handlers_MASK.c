
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct sigaction*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct sigaction VAR_8;

 if (FUNC_1(&VAR_8.sa_mask) < 0)
  FUNC_2("Failed to initialize sigset");

 VAR_8.sa_flags = VAR_0;
 VAR_8.sa_handler = VAR_5;

 if (FUNC_0(VAR_3, &VAR_8, ((void*)0)) < 0)
  FUNC_2("Failed to ignore SIGPIPE");

 VAR_8.sa_handler = VAR_6;
 if (FUNC_0(VAR_2, &VAR_8, ((void*)0)) < 0)
  FUNC_2("Failed to register SIGINT handler");

 if (FUNC_0(VAR_4, &VAR_8, ((void*)0)) < 0)
  FUNC_2("Failed to register SIGTERM handler");

 VAR_8.sa_handler = VAR_7;
 if (FUNC_0(VAR_1, &VAR_8, ((void*)0)) < 0)
  FUNC_2("Failed to register SIGHUP handler");
}
