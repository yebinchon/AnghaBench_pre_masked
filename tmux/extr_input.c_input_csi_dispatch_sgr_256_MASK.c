
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct input_ctx {int dummy; } ;


 scalar_t__ FUNC_0 (struct input_ctx*,int,int) ;
 int FUNC_1 (struct input_ctx*,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct input_ctx *VAR_0, int VAR_1, u_int *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, (*VAR_2) + 1, 0, -1);
 if (FUNC_0(VAR_0, VAR_1, VAR_3))
  (*VAR_2)++;
}
