
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {scalar_t__ fd; int refcnt; scalar_t__ bev; } ;
struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5 (struct bufferevent *VAR_3, short VAR_4, void *VAR_5) {
  struct in_ev *VAR_6 = VAR_5;
  if (VAR_4 & (VAR_0 | VAR_1)) {
    FUNC_4 (VAR_2, "Closing incoming connection\n");
    FUNC_0 (VAR_6->fd >= 0);
    FUNC_2 (VAR_6->fd);
    FUNC_1 (VAR_3);
    VAR_6->bev = 0;
    if (!--VAR_6->refcnt) { FUNC_3 (VAR_6); }
  }
}
