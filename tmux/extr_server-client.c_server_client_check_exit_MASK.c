
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int flags; int retval; int peer; int stderr_data; int stdout_data; int stdin_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,struct client*) ;
 int FUNC_2 (int ,int ,int,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct client *VAR_4)
{
 if (~VAR_4->flags & VAR_1)
  return;
 if (VAR_4->flags & VAR_2)
  return;

 if (FUNC_0(VAR_4->stdin_data) != 0)
  return;
 if (FUNC_0(VAR_4->stdout_data) != 0)
  return;
 if (FUNC_0(VAR_4->stderr_data) != 0)
  return;

 if (VAR_4->flags & VAR_0)
  FUNC_1("client-detached", VAR_4);
 FUNC_2(VAR_4->peer, VAR_3, -1, &VAR_4->retval, sizeof VAR_4->retval);
 VAR_4->flags |= VAR_2;
}
