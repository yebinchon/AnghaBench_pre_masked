
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid {int sx; scalar_t__ sy; } ;


 int FUNC_0 (struct grid*,int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct grid*,scalar_t__) ;

void
FUNC_3(struct grid *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 VAR_1 = FUNC_2(VAR_0, VAR_1);

 VAR_4 = FUNC_2(VAR_0, VAR_0->sy);

 FUNC_1(VAR_0, VAR_1, VAR_1 + VAR_2, VAR_4 - VAR_1 - VAR_2, VAR_3);
 FUNC_0(VAR_0, 0, VAR_4 - VAR_2, VAR_0->sx, VAR_1 + VAR_2 - (VAR_4 - VAR_2), VAR_3);
}
