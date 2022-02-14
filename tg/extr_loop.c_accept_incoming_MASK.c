
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct in_ev {int refcnt; int fd; scalar_t__ error; scalar_t__ in_buf_pos; struct bufferevent* bev; } ;
struct bufferevent {int dummy; } ;
typedef int socklen_t ;
typedef int evutil_socket_t ;
struct TYPE_2__ {int ev_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,struct sockaddr*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bufferevent*,int) ;
 int FUNC_3 (struct bufferevent*,int ,int ,int ,struct in_ev*) ;
 struct bufferevent* FUNC_4 (int ,int,int ) ;
 int VAR_4 ;
 struct in_ev* FUNC_5 (int) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7 (evutil_socket_t VAR_6, short VAR_7, void *VAR_8) {
  FUNC_6 (VAR_2, "Accepting incoming connection\n");
  socklen_t VAR_9 = 0;
  struct sockaddr_in VAR_10;
  int VAR_11 = FUNC_0 (VAR_6, (struct sockaddr *)&VAR_10, &VAR_9);

  FUNC_1 (VAR_11 >= 0);
  struct bufferevent *VAR_12 = FUNC_4 (VAR_3->ev_base, VAR_11, 0);
  struct in_ev *VAR_13 = FUNC_5 (sizeof (*VAR_13));
  VAR_13->bev = VAR_12;
  VAR_13->refcnt = 1;
  VAR_13->in_buf_pos = 0;
  VAR_13->error = 0;
  VAR_13->fd = VAR_11;
  FUNC_3 (VAR_12, VAR_5, 0, VAR_4, VAR_13);
  FUNC_2 (VAR_12, VAR_0 | VAR_1);
}
