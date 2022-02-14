
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf {int fd; int bufs; scalar_t__ queued; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct msgbuf *VAR_0)
{
 VAR_0->queued = 0;
 VAR_0->fd = -1;
 FUNC_0(&VAR_0->bufs);
}
