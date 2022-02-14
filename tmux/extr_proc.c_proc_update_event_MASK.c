
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ queued; } ;
struct TYPE_4__ {int fd; TYPE_1__ w; } ;
struct tmuxpeer {int event; TYPE_2__ ibuf; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,short,int ,struct tmuxpeer*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct tmuxpeer *VAR_3)
{
 short VAR_4;

 FUNC_1(&VAR_3->event);

 VAR_4 = VAR_0;
 if (VAR_3->ibuf.w.queued > 0)
  VAR_4 |= VAR_1;
 FUNC_2(&VAR_3->event, VAR_3->ibuf.fd, VAR_4, VAR_2, VAR_3);

 FUNC_0(&VAR_3->event, ((void*)0));
}
