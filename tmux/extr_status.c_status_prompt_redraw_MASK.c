
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct status_line {struct screen* active; int screen; } ;
struct session {int options; } ;
struct screen_write_ctx {int dummy; } ;
struct screen {scalar_t__ cx; int grid; int data; int attr; } ;
struct grid_cell {scalar_t__ cx; int grid; int data; int attr; } ;
struct TYPE_4__ {scalar_t__ sx; scalar_t__ sy; } ;
struct client {scalar_t__ prompt_mode; int prompt_index; TYPE_2__* prompt_buffer; TYPE_1__ tty; int prompt_string; struct session* session; struct status_line status; } ;
struct TYPE_5__ {scalar_t__ size; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct screen*,struct screen*,int) ;
 int FUNC_2 (struct screen*) ;
 int FUNC_3 (struct screen*,scalar_t__,int,int ) ;
 scalar_t__ FUNC_4 (struct screen*) ;
 int FUNC_5 (struct screen_write_ctx*,struct screen*) ;
 int FUNC_6 (struct screen_write_ctx*,int,int,int ) ;
 int FUNC_7 (struct screen_write_ctx*,int *,int ,int ,int,int) ;
 int FUNC_8 (struct screen_write_ctx*,int,struct screen*,char*,int ) ;
 int FUNC_9 (struct screen_write_ctx*,struct screen*,char) ;
 int FUNC_10 (struct screen_write_ctx*,int *,struct screen*) ;
 int FUNC_11 (struct screen_write_ctx*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct client*) ;
 int FUNC_14 (struct screen*,int ,char*) ;
 int FUNC_15 (int *,TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int) ;

int
FUNC_17(struct client *VAR_2)
{
 struct status_line *VAR_3 = &VAR_2->status;
 struct screen_write_ctx VAR_4;
 struct session *VAR_5 = VAR_2->session;
 struct screen VAR_6;
 u_int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u_int VAR_13, VAR_14;
 struct grid_cell VAR_15, VAR_16;

 if (VAR_2->tty.sx == 0 || VAR_2->tty.sy == 0)
  return (0);
 FUNC_1(&VAR_6, VAR_3->active, sizeof VAR_6);

 VAR_8 = FUNC_13(VAR_2);
 if (VAR_8 <= 1)
  VAR_8 = 1;
 FUNC_3(VAR_3->active, VAR_2->tty.sx, VAR_8, 0);

 if (VAR_2->prompt_mode == VAR_1)
  FUNC_14(&VAR_15, VAR_5->options, "message-command-style");
 else
  FUNC_14(&VAR_15, VAR_5->options, "message-style");

 FUNC_1(&VAR_16, &VAR_15, sizeof VAR_16);
 VAR_16.attr ^= VAR_0;

 VAR_11 = FUNC_12("%s", VAR_2->prompt_string);
 if (VAR_11 > VAR_2->tty.sx)
  VAR_11 = VAR_2->tty.sx;

 FUNC_10(&VAR_4, ((void*)0), VAR_3->active);
 FUNC_7(&VAR_4, &VAR_3->screen, 0, 0, VAR_2->tty.sx, VAR_8 - 1);
 FUNC_6(&VAR_4, 0, VAR_8 - 1, 0);
 for (VAR_9 = 0; VAR_9 < VAR_2->tty.sx; VAR_9++)
  FUNC_9(&VAR_4, &VAR_15, ' ');
 FUNC_6(&VAR_4, 0, VAR_8 - 1, 0);
 FUNC_8(&VAR_4, VAR_11, &VAR_15, "%s", VAR_2->prompt_string);
 FUNC_6(&VAR_4, VAR_11, VAR_8 - 1, 0);

 VAR_10 = VAR_2->tty.sx - VAR_11;
 if (VAR_10 == 0)
  goto finished;

 VAR_13 = FUNC_16(VAR_2->prompt_buffer, VAR_2->prompt_index);
 VAR_14 = FUNC_16(VAR_2->prompt_buffer, -1);
 if (VAR_13 >= VAR_10) {




  VAR_9 = (VAR_13 - VAR_10) + 1;
  VAR_14 = VAR_10;
 } else
  VAR_9 = 0;
 if (VAR_14 > VAR_10)
  VAR_14 = VAR_10;

 VAR_12 = 0;
 for (VAR_7 = 0; VAR_2->prompt_buffer[VAR_7].size != 0; VAR_7++) {
  if (VAR_12 < VAR_9) {
   VAR_12 += VAR_2->prompt_buffer[VAR_7].width;
   continue;
  }
  if (VAR_12 >= VAR_9 + VAR_14)
   break;
  VAR_12 += VAR_2->prompt_buffer[VAR_7].width;
  if (VAR_12 > VAR_9 + VAR_14)
   break;

  if (VAR_7 != VAR_2->prompt_index) {
   FUNC_15(&VAR_15.data, &VAR_2->prompt_buffer[VAR_7]);
   FUNC_5(&VAR_4, &VAR_15);
  } else {
   FUNC_15(&VAR_16.data, &VAR_2->prompt_buffer[VAR_7]);
   FUNC_5(&VAR_4, &VAR_16);
  }
 }
 if (VAR_3->active->cx < FUNC_4(VAR_3->active) && VAR_2->prompt_index >= VAR_7)
  FUNC_9(&VAR_4, &VAR_16, ' ');

finished:
 FUNC_11(&VAR_4);

 if (FUNC_0(VAR_3->active->grid, VAR_6.grid) == 0) {
  FUNC_2(&VAR_6);
  return (0);
 }
 FUNC_2(&VAR_6);
 return (1);
}
