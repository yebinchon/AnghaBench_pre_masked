
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,int,int) ;
 int VAR_5 ;
 int FUNC_4 (char*,int,char*,long) ;

void
FUNC_5(void)
{
 char VAR_6[64];

 FUNC_4(VAR_6, sizeof VAR_6, "tmux-out-%ld.log", (long)FUNC_2());

 VAR_5 = FUNC_3(VAR_6, VAR_4|VAR_2|VAR_3, 0644);
 if (VAR_5 != -1 && FUNC_1(VAR_5, VAR_1, VAR_0) == -1)
  FUNC_0("fcntl failed");
}
