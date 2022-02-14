
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int flags; TYPE_1__* window; struct session* session; } ;
struct session {int lastw; struct winlink* curw; } ;
struct TYPE_4__ {struct winlink* wl; } ;
struct TYPE_3__ {int flags; } ;


 struct winlink* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_1 () ;

const char *
FUNC_2(struct winlink *VAR_5)
{
 struct session *VAR_6 = VAR_5->session;
 static char VAR_7[32];
 int VAR_8;

 VAR_8 = 0;
 if (VAR_5->flags & VAR_1)
  VAR_7[VAR_8++] = '#';
 if (VAR_5->flags & VAR_2)
  VAR_7[VAR_8++] = '!';
 if (VAR_5->flags & VAR_3)
  VAR_7[VAR_8++] = '~';
 if (VAR_5 == VAR_6->curw)
  VAR_7[VAR_8++] = '*';
 if (VAR_5 == FUNC_0(&VAR_6->lastw))
  VAR_7[VAR_8++] = '-';
 if (FUNC_1() && VAR_5 == VAR_4.wl)
  VAR_7[VAR_8++] = 'M';
 if (VAR_5->window->flags & VAR_0)
  VAR_7[VAR_8++] = 'Z';
 VAR_7[VAR_8] = '\0';
 return (VAR_7);
}
