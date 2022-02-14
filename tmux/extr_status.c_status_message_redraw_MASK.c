
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct status_line {TYPE_2__* active; int screen; } ;
struct session {int options; } ;
struct screen_write_ctx {int dummy; } ;
struct screen {int grid; } ;
struct grid_cell {int dummy; } ;
struct TYPE_5__ {size_t sx; scalar_t__ sy; } ;
struct client {int message_string; TYPE_1__ tty; struct session* session; struct status_line status; } ;
struct TYPE_6__ {int grid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct screen*,TYPE_2__*,int) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (TYPE_2__*,size_t,int,int ) ;
 int FUNC_4 (struct screen_write_ctx*,int ,int,int ) ;
 int FUNC_5 (struct screen_write_ctx*,int *,int ,int ,size_t,int) ;
 int FUNC_6 (struct screen_write_ctx*,size_t,struct grid_cell*,char*,int ) ;
 int FUNC_7 (struct screen_write_ctx*,struct grid_cell*,char) ;
 int FUNC_8 (struct screen_write_ctx*,int *,TYPE_2__*) ;
 int FUNC_9 (struct screen_write_ctx*) ;
 size_t FUNC_10 (char*,int ) ;
 int FUNC_11 (struct client*) ;
 int FUNC_12 (struct grid_cell*,int ,char*) ;

int
FUNC_13(struct client *VAR_0)
{
 struct status_line *VAR_1 = &VAR_0->status;
 struct screen_write_ctx VAR_2;
 struct session *VAR_3 = VAR_0->session;
 struct screen VAR_4;
 size_t VAR_5;
 u_int VAR_6, VAR_7;
 struct grid_cell VAR_8;

 if (VAR_0->tty.sx == 0 || VAR_0->tty.sy == 0)
  return (0);
 FUNC_1(&VAR_4, VAR_1->active, sizeof VAR_4);

 VAR_6 = FUNC_11(VAR_0);
 if (VAR_6 <= 1)
  VAR_6 = 1;
 FUNC_3(VAR_1->active, VAR_0->tty.sx, VAR_6, 0);

 VAR_5 = FUNC_10("%s", VAR_0->message_string);
 if (VAR_5 > VAR_0->tty.sx)
  VAR_5 = VAR_0->tty.sx;

 FUNC_12(&VAR_8, VAR_3->options, "message-style");

 FUNC_8(&VAR_2, ((void*)0), VAR_1->active);
 FUNC_5(&VAR_2, &VAR_1->screen, 0, 0, VAR_0->tty.sx, VAR_6 - 1);
 FUNC_4(&VAR_2, 0, VAR_6 - 1, 0);
 for (VAR_7 = 0; VAR_7 < VAR_0->tty.sx; VAR_7++)
  FUNC_7(&VAR_2, &VAR_8, ' ');
 FUNC_4(&VAR_2, 0, VAR_6 - 1, 0);
 FUNC_6(&VAR_2, VAR_5, &VAR_8, "%s", VAR_0->message_string);
 FUNC_9(&VAR_2);

 if (FUNC_0(VAR_1->active->grid, VAR_4.grid) == 0) {
  FUNC_2(&VAR_4);
  return (0);
 }
 FUNC_2(&VAR_4);
 return (1);
}
