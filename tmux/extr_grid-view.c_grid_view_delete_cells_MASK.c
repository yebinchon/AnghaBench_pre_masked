
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid {scalar_t__ sx; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct grid*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct grid*,scalar_t__) ;

void
FUNC_4(struct grid *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4)
{
 u_int VAR_5;

 VAR_1 = FUNC_2(VAR_0, VAR_1);
 VAR_2 = FUNC_3(VAR_0, VAR_2);

 VAR_5 = FUNC_2(VAR_0, VAR_0->sx);

 FUNC_1(VAR_0, VAR_1, VAR_1 + VAR_3, VAR_2, VAR_5 - VAR_1 - VAR_3, VAR_4);
 FUNC_0(VAR_0, VAR_5 - VAR_3, VAR_2, VAR_1 + VAR_3 - (VAR_5 - VAR_3), 1, VAR_4);
}
