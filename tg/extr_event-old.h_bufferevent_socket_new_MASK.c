
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct bufferevent {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct event_base*,struct bufferevent*) ;
 struct bufferevent* FUNC_2 (int,int ,int ,int ,int ) ;

__attribute__((used)) static struct bufferevent *FUNC_3 (struct event_base *VAR_0, int VAR_1, int VAR_2) {
  FUNC_0 (!VAR_2);
  struct bufferevent *VAR_3 = FUNC_2(VAR_1, 0, 0, 0, 0);
  FUNC_1 (VAR_0, VAR_3);
  return VAR_3;
}
