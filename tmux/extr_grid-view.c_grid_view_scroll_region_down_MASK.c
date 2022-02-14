
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid {int dummy; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct grid*,scalar_t__) ;

void
FUNC_2(struct grid *VAR_0, u_int VAR_1, u_int VAR_2,
    u_int VAR_3)
{
 VAR_1 = FUNC_1(VAR_0, VAR_1);
 VAR_2 = FUNC_1(VAR_0, VAR_2);

 FUNC_0(VAR_0, VAR_1 + 1, VAR_1, VAR_2 - VAR_1, VAR_3);
}
