
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmuxproc {void (* signalcb ) (int) ;int ev_sigwinch; int ev_sigusr2; int ev_sigusr1; int ev_sigterm; int ev_sigcont; int ev_sigchld; int ev_sighup; } ;
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
 int VAR_12 ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,struct tmuxproc*) ;

void
FUNC_5(struct tmuxproc *VAR_13, void (*VAR_14)(int))
{
 struct sigaction VAR_15;

 VAR_13->signalcb = VAR_14;

 FUNC_0(&VAR_15, 0, sizeof VAR_15);
 FUNC_2(&VAR_15.sa_mask);
 VAR_15.sa_flags = VAR_0;
 VAR_15.sa_handler = VAR_11;

 FUNC_1(VAR_4, &VAR_15, ((void*)0));
 FUNC_1(VAR_5, &VAR_15, ((void*)0));
 FUNC_1(VAR_7, &VAR_15, ((void*)0));

 FUNC_4(&VAR_13->ev_sighup, VAR_3, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sighup, ((void*)0));
 FUNC_4(&VAR_13->ev_sigchld, VAR_1, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sigchld, ((void*)0));
 FUNC_4(&VAR_13->ev_sigcont, VAR_2, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sigcont, ((void*)0));
 FUNC_4(&VAR_13->ev_sigterm, VAR_6, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sigterm, ((void*)0));
 FUNC_4(&VAR_13->ev_sigusr1, VAR_8, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sigusr1, ((void*)0));
 FUNC_4(&VAR_13->ev_sigusr2, VAR_9, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sigusr2, ((void*)0));
 FUNC_4(&VAR_13->ev_sigwinch, VAR_10, VAR_12, VAR_13);
 FUNC_3(&VAR_13->ev_sigwinch, ((void*)0));
}
