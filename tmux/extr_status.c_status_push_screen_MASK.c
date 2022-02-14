
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct status_line {int references; int * active; int screen; } ;
struct TYPE_2__ {int sx; } ;
struct client {TYPE_1__ tty; struct status_line status; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct client*) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct client *VAR_0)
{
 struct status_line *VAR_1 = &VAR_0->status;

 if (VAR_1->active == &VAR_1->screen) {
  VAR_1->active = FUNC_2(sizeof *VAR_1->active);
  FUNC_0(VAR_1->active, VAR_0->tty.sx, FUNC_1(VAR_0), 0);
 }
 VAR_1->references++;
}
