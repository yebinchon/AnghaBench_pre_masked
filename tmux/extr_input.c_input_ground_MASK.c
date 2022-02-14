
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {scalar_t__ input_space; int input_buf; int since_ground; int timer; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct input_ctx *VAR_1)
{
 FUNC_2(&VAR_1->timer);
 FUNC_1(VAR_1->since_ground, FUNC_0(VAR_1->since_ground));

 if (VAR_1->input_space > VAR_0) {
  VAR_1->input_space = VAR_0;
  VAR_1->input_buf = FUNC_3(VAR_1->input_buf, VAR_0);
 }
}
