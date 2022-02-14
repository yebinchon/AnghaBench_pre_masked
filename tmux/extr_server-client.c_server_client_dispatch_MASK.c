
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct session {int dummy; } ;
struct msg_stdin_data {int size; int data; } ;
struct TYPE_5__ {int len; int type; } ;
struct imsg {char* data; TYPE_1__ hdr; } ;
struct TYPE_6__ {int fd; } ;
struct client {int flags; int stdin_closed; int activity_time; TYPE_2__ tty; struct session* session; int peer; int stdin_callback_data; int (* stdin_callback ) (struct client*,int,int ) ;int stdin_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct msg_stdin_data*,char const*,int) ;
 int FUNC_5 (char*,struct client*) ;
 int FUNC_6 (int ,int ,int,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct client*) ;
 int FUNC_9 (struct client*,struct imsg*) ;
 int FUNC_10 (struct client*,struct imsg*) ;
 int FUNC_11 (struct client*) ;
 int FUNC_12 (struct client*) ;
 int FUNC_13 (struct client*) ;
 int FUNC_14 (struct client*) ;
 int FUNC_15 (struct session*,int *) ;
 int FUNC_16 (struct client*,int,int ) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_20(struct imsg *VAR_5, void *VAR_6)
{
 struct client *VAR_7 = VAR_6;
 struct msg_stdin_data VAR_8;
 const char *VAR_9;
 ssize_t VAR_10;
 struct session *VAR_11;

 if (VAR_7->flags & VAR_1)
  return;

 if (VAR_5 == ((void*)0)) {
  FUNC_12(VAR_7);
  return;
 }

 VAR_9 = VAR_5->data;
 VAR_10 = VAR_5->hdr.len - VAR_3;

 switch (VAR_5->hdr.type) {
 case 136:
 case 134:
 case 133:
 case 139:
 case 135:
 case 137:
 case 140:
 case 138:
  FUNC_10(VAR_7, VAR_5);
  break;
 case 142:
  FUNC_9(VAR_7, VAR_5);
  break;
 case 130:
  if (VAR_10 != sizeof VAR_8)
   FUNC_2("bad MSG_STDIN size");
  FUNC_4(&VAR_8, VAR_9, sizeof VAR_8);

  if (VAR_7->stdin_callback == ((void*)0))
   break;
  if (VAR_8.size <= 0)
   VAR_7->stdin_closed = 1;
  else {
   FUNC_0(VAR_7->stdin_data, VAR_8.data,
       VAR_8.size);
  }
  VAR_7->stdin_callback(VAR_7, VAR_7->stdin_closed, VAR_7->stdin_callback_data);
  break;
 case 132:
  if (VAR_10 != 0)
   FUNC_2("bad MSG_RESIZE size");

  if (VAR_7->flags & VAR_0)
   break;
  FUNC_13(VAR_7);
  FUNC_8(VAR_7);
  FUNC_18(&VAR_7->tty);
  FUNC_7();
  FUNC_14(VAR_7);
  if (VAR_7->session != ((void*)0))
   FUNC_5("client-resized", VAR_7);
  break;
 case 141:
  if (VAR_10 != 0)
   FUNC_2("bad MSG_EXITING size");

  VAR_7->session = ((void*)0);
  FUNC_17(&VAR_7->tty);
  FUNC_6(VAR_7->peer, VAR_4, -1, ((void*)0), 0);
  break;
 case 128:
 case 129:
  if (VAR_10 != 0)
   FUNC_2("bad MSG_WAKEUP size");

  if (!(VAR_7->flags & VAR_2))
   break;
  VAR_7->flags &= ~VAR_2;

  if (VAR_7->tty.fd == -1)
   break;
  VAR_11 = VAR_7->session;

  if (FUNC_3(&VAR_7->activity_time, ((void*)0)) != 0)
   FUNC_1("gettimeofday failed");

  FUNC_19(&VAR_7->tty);
  FUNC_14(VAR_7);
  FUNC_7();

  if (VAR_11 != ((void*)0))
   FUNC_15(VAR_11, &VAR_7->activity_time);
  break;
 case 131:
  if (VAR_10 != 0)
   FUNC_2("bad MSG_SHELL size");

  FUNC_11(VAR_7);
  break;
 }
}
