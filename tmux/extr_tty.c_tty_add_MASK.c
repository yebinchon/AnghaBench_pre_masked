
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int flags; size_t discarded; int event_out; int out; struct client* client; } ;
struct client {size_t written; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int ,int,char const*) ;
 int VAR_2 ;
 int FUNC_3 (int,char const*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct tty *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct client *VAR_6 = VAR_3->client;

 if (VAR_3->flags & VAR_0) {
  VAR_3->discarded += VAR_5;
  return;
 }

 FUNC_0(VAR_3->out, VAR_4, VAR_5);
 FUNC_2("%s: %.*s", VAR_6->name, (int)VAR_5, VAR_4);
 VAR_6->written += VAR_5;

 if (VAR_2 != -1)
  FUNC_3(VAR_2, VAR_4, VAR_5);
 if (VAR_3->flags & VAR_1)
  FUNC_1(&VAR_3->event_out, ((void*)0));
}
