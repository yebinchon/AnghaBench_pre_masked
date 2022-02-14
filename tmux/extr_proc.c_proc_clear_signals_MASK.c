
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmuxproc {int ev_sigwinch; int ev_sigusr2; int ev_sigusr1; int ev_sigterm; int ev_sigcont; int ev_sigchld; int ev_sighup; } ;
struct sigaction {int sa_handler; int sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sigaction*,int ,int) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct tmuxproc *VAR_12, int VAR_13)
{
 struct sigaction VAR_14;

 FUNC_0(&VAR_14, 0, sizeof VAR_14);
 FUNC_2(&VAR_14.sa_mask);
 VAR_14.sa_flags = VAR_0;
 VAR_14.sa_handler = VAR_11;

 FUNC_1(VAR_4, &VAR_14, ((void*)0));
 FUNC_1(VAR_5, &VAR_14, ((void*)0));
 FUNC_1(VAR_7, &VAR_14, ((void*)0));

 FUNC_3(&VAR_12->ev_sighup);
 FUNC_3(&VAR_12->ev_sigchld);
 FUNC_3(&VAR_12->ev_sigcont);
 FUNC_3(&VAR_12->ev_sigterm);
 FUNC_3(&VAR_12->ev_sigusr1);
 FUNC_3(&VAR_12->ev_sigusr2);
 FUNC_3(&VAR_12->ev_sigwinch);

 if (VAR_13) {
  FUNC_1(VAR_3, &VAR_14, ((void*)0));
  FUNC_1(VAR_1, &VAR_14, ((void*)0));
  FUNC_1(VAR_2, &VAR_14, ((void*)0));
  FUNC_1(VAR_6, &VAR_14, ((void*)0));
  FUNC_1(VAR_8, &VAR_14, ((void*)0));
  FUNC_1(VAR_9, &VAR_14, ((void*)0));
  FUNC_1(VAR_10, &VAR_14, ((void*)0));
 }
}
