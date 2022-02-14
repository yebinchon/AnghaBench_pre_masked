
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct tmuxpeer {TYPE_1__ ibuf; int event; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tmuxpeer*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,struct tmuxpeer*) ;

void
FUNC_5(struct tmuxpeer *VAR_0)
{
 FUNC_4("remove peer %p", VAR_0);

 FUNC_1(&VAR_0->event);
 FUNC_3(&VAR_0->ibuf);

 FUNC_0(VAR_0->ibuf.fd);
 FUNC_2(VAR_0);
}
