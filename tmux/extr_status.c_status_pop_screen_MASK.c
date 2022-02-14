
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_line {scalar_t__ references; int screen; int * active; } ;
struct client {struct status_line status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct client *VAR_0)
{
 struct status_line *VAR_1 = &VAR_0->status;

 if (--VAR_1->references == 0) {
  FUNC_1(VAR_1->active);
  FUNC_0(VAR_1->active);
  VAR_1->active = &VAR_1->screen;
 }
}
