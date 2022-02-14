
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmuxproc {int dummy; } ;
struct tmuxpeer {void (* dispatchcb ) (struct imsg*,void*) ;int event; int ibuf; void* arg; struct tmuxproc* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ,struct tmuxpeer*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,struct tmuxpeer*,int,void*) ;
 int VAR_1 ;
 int FUNC_3 (struct tmuxpeer*) ;
 struct tmuxpeer* FUNC_4 (int,int) ;

struct tmuxpeer *
FUNC_5(struct tmuxproc *VAR_2, int VAR_3,
    void (*VAR_4)(struct imsg *, void *), void *VAR_5)
{
 struct tmuxpeer *VAR_6;

 VAR_6 = FUNC_4(1, sizeof *VAR_6);
 VAR_6->parent = VAR_2;

 VAR_6->dispatchcb = VAR_4;
 VAR_6->arg = VAR_5;

 FUNC_1(&VAR_6->ibuf, VAR_3);
 FUNC_0(&VAR_6->event, VAR_3, VAR_0, VAR_1, VAR_6);

 FUNC_2("add peer %p: %d (%p)", VAR_6, VAR_3, VAR_5);

 FUNC_3(VAR_6);
 return (VAR_6);
}
