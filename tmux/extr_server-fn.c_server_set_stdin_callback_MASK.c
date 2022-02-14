
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client {int flags; void (* stdin_callback ) (struct client*,int,void*) ;void* stdin_callback_data; int peer; scalar_t__ stdin_closed; int references; int * session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *,int ) ;
 void FUNC_1 (struct client*,int,void*) ;
 char* FUNC_2 (char*) ;

int
FUNC_3(struct client *VAR_2, void (*VAR_3)(struct client *, int,
    void *), void *VAR_4, char **VAR_5)
{
 if (VAR_2 == ((void*)0) || VAR_2->session != ((void*)0)) {
  *VAR_5 = FUNC_2("no client with stdin");
  return (-1);
 }
 if (VAR_2->flags & VAR_0) {
  *VAR_5 = FUNC_2("stdin is a tty");
  return (-1);
 }
 if (VAR_2->stdin_callback != ((void*)0)) {
  *VAR_5 = FUNC_2("stdin is in use");
  return (-1);
 }

 VAR_2->stdin_callback_data = VAR_4;
 VAR_2->stdin_callback = VAR_3;

 VAR_2->references++;

 if (VAR_2->stdin_closed)
  VAR_2->stdin_callback(VAR_2, 1, VAR_2->stdin_callback_data);

 FUNC_0(VAR_2->peer, VAR_1, -1, ((void*)0), 0);

 return (0);
}
