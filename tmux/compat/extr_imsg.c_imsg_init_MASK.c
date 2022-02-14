
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct imsgbuf {int fd; int fds; int pid; TYPE_1__ w; int r; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(struct imsgbuf *VAR_0, int VAR_1)
{
 FUNC_3(&VAR_0->w);
 FUNC_2(&VAR_0->r, 0, sizeof(VAR_0->r));
 VAR_0->fd = VAR_1;
 VAR_0->w.fd = VAR_1;
 VAR_0->pid = FUNC_1();
 FUNC_0(&VAR_0->fds);
}
