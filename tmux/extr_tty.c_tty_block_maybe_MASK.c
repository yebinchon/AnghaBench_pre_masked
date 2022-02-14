
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int flags; int timer; scalar_t__ discarded; int out; struct client* client; } ;
struct timeval {int tv_usec; } ;
struct client {size_t discarded; int name; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct tty*) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,struct timeval*) ;
 int FUNC_4 (char*,int ,size_t) ;

__attribute__((used)) static int
FUNC_5(struct tty *VAR_2)
{
 struct client *VAR_3 = VAR_2->client;
 size_t VAR_4 = FUNC_0(VAR_2->out);
 struct timeval VAR_5 = { .tv_usec = VAR_1 };

 if (VAR_4 < FUNC_1(VAR_2))
  return (0);

 if (VAR_2->flags & VAR_0)
  return (1);
 VAR_2->flags |= VAR_0;

 FUNC_4("%s: can't keep up, %zu discarded", VAR_3->name, VAR_4);

 FUNC_2(VAR_2->out, VAR_4);
 VAR_3->discarded += VAR_4;

 VAR_2->discarded = 0;
 FUNC_3(&VAR_2->timer, &VAR_5);
 return (1);
}
