
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,int *,int ,int ) ;
 int FUNC_6 (char**,char*,char const*,long) ;

void
FUNC_7(const char *VAR_4)
{
 char *VAR_5;

 if (VAR_3 == 0)
  return;
 FUNC_4();

 FUNC_6(&VAR_5, "tmux-%s-%ld.log", VAR_4, (long)FUNC_3());
 VAR_2 = FUNC_1(VAR_5, "a");
 FUNC_2(VAR_5);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_5(VAR_2, ((void*)0), VAR_0, 0);
 FUNC_0(VAR_1);
}
