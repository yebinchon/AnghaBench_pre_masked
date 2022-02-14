
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {int pid; int fd; int * event; int * data; int (* freecb ) (int *) ;struct job* cmd; } ;


 int FUNC_0 (struct job*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct job*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,struct job*,struct job*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct job *VAR_2)
{
 FUNC_5("free job %p: %s", VAR_2, VAR_2->cmd);

 FUNC_0(VAR_2, VAR_1);
 FUNC_3(VAR_2->cmd);

 if (VAR_2->freecb != ((void*)0) && VAR_2->data != ((void*)0))
  VAR_2->freecb(VAR_2->data);

 if (VAR_2->pid != -1)
  FUNC_4(VAR_2->pid, VAR_0);
 if (VAR_2->event != ((void*)0))
  FUNC_1(VAR_2->event);
 if (VAR_2->fd != -1)
  FUNC_2(VAR_2->fd);

 FUNC_3(VAR_2);
}
