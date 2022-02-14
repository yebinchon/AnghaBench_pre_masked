
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct tgl_message* last; } ;
typedef TYPE_1__ tgl_peer_t ;
struct tgl_message {int flags; struct tgl_message* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct tgl_message*,int,char const*,int,char**) ;

int FUNC_1 (tgl_peer_t *VAR_1, int VAR_2, const char *VAR_3, int VAR_4, char **VAR_5) {
  struct tgl_message *VAR_6 = VAR_1->last;
  while (VAR_6 && (VAR_6->flags & VAR_0)) {
    VAR_6 = VAR_6->next;
  }


  return FUNC_0 (VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}
