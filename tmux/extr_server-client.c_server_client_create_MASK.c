
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int sx; int sy; } ;
struct client {int references; int fd; int click_timer; int repeat_timer; TYPE_2__* keytable; int flags; scalar_t__ prompt_index; int * prompt_buffer; int * prompt_string; int message_log; int * message_string; TYPE_1__ tty; int * last_session; int * session; int * title; int * stderr_data; int * stdout_data; int * stdin_data; int queue; int * cwd; int environ; int creation_time; int activity_time; int peer; } ;
struct TYPE_4__ {int references; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct client*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 (int *,int ,struct client*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 TYPE_2__* FUNC_8 (char*,int) ;
 int FUNC_9 (char*,struct client*) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int ,int,int ,struct client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct client*) ;
 struct client* FUNC_14 (int,int) ;

struct client *
FUNC_15(int VAR_7)
{
 struct client *VAR_8;

 FUNC_12(VAR_7, 0);

 VAR_8 = FUNC_14(1, sizeof *VAR_8);
 VAR_8->references = 1;
 VAR_8->peer = FUNC_11(VAR_6, VAR_7, VAR_4, VAR_8);

 if (FUNC_7(&VAR_8->creation_time, ((void*)0)) != 0)
  FUNC_5("gettimeofday failed");
 FUNC_10(&VAR_8->activity_time, &VAR_8->creation_time, sizeof VAR_8->activity_time);

 VAR_8->environ = FUNC_2();

 VAR_8->fd = -1;
 VAR_8->cwd = ((void*)0);

 FUNC_0(&VAR_8->queue);

 VAR_8->stdin_data = FUNC_3();
 if (VAR_8->stdin_data == ((void*)0))
  FUNC_6("out of memory");
 VAR_8->stdout_data = FUNC_3();
 if (VAR_8->stdout_data == ((void*)0))
  FUNC_6("out of memory");
 VAR_8->stderr_data = FUNC_3();
 if (VAR_8->stderr_data == ((void*)0))
  FUNC_6("out of memory");

 VAR_8->tty.fd = -1;
 VAR_8->title = ((void*)0);

 VAR_8->session = ((void*)0);
 VAR_8->last_session = ((void*)0);

 VAR_8->tty.sx = 80;
 VAR_8->tty.sy = 24;

 FUNC_13(VAR_8);

 VAR_8->message_string = ((void*)0);
 FUNC_0(&VAR_8->message_log);

 VAR_8->prompt_string = ((void*)0);
 VAR_8->prompt_buffer = ((void*)0);
 VAR_8->prompt_index = 0;

 VAR_8->flags |= VAR_0;

 VAR_8->keytable = FUNC_8("root", 1);
 VAR_8->keytable->references++;

 FUNC_4(&VAR_8->repeat_timer, VAR_5, VAR_8);
 FUNC_4(&VAR_8->click_timer, VAR_3, VAR_8);

 FUNC_1(&VAR_1, VAR_8, VAR_2);
 FUNC_9("new client %p", VAR_8);
 return (VAR_8);
}
