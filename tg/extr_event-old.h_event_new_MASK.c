
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {int dummy; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event_base*,struct event*) ;
 int FUNC_1 (struct event*,int,int,void (*) (int,short,void*),void*) ;
 struct event* FUNC_2 (int) ;

__attribute__((used)) static inline struct event *FUNC_3 (struct event_base *VAR_0, int VAR_1, int VAR_2, void(*VAR_3)(int, short, void *), void *VAR_4) {
  struct event *VAR_5 = FUNC_2 (sizeof (*VAR_5));
  FUNC_1 (VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_0 (VAR_0, VAR_5);
  return VAR_5;
}
