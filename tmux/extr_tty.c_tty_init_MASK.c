
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int fd; int term_type; scalar_t__ term_flags; scalar_t__ flags; void* ccolour; scalar_t__ cstyle; struct client* client; void* term_name; } ;
struct client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty*,int ,int) ;
 void* FUNC_2 (char*) ;

int
FUNC_3(struct tty *VAR_1, struct client *VAR_2, int VAR_3, char *VAR_4)
{
 if (!FUNC_0(VAR_3))
  return (-1);

 FUNC_1(VAR_1, 0, sizeof *VAR_1);

 if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
  VAR_1->term_name = FUNC_2("unknown");
 else
  VAR_1->term_name = FUNC_2(VAR_4);

 VAR_1->fd = VAR_3;
 VAR_1->client = VAR_2;

 VAR_1->cstyle = 0;
 VAR_1->ccolour = FUNC_2("");

 VAR_1->flags = 0;

 VAR_1->term_flags = 0;
 VAR_1->term_type = VAR_0;

 return (0);
}
