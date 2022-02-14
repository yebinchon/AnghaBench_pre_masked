
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct status_line {int screen; int * active; TYPE_2__* entries; } ;
struct TYPE_3__ {int sx; } ;
struct client {TYPE_1__ tty; struct status_line status; } ;
struct TYPE_4__ {int ranges; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int,int ) ;

void
FUNC_3(struct client *VAR_0)
{
 struct status_line *VAR_1 = &VAR_0->status;
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1->entries); VAR_2++)
  FUNC_0(&VAR_1->entries[VAR_2].ranges);

 FUNC_2(&VAR_1->screen, VAR_0->tty.sx, 1, 0);
 VAR_1->active = &VAR_1->screen;
}
