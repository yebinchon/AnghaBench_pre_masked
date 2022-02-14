
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct grid {int sx; int * linedata; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct grid*,size_t,int ,size_t) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct grid *VAR_0, u_int VAR_1, u_int VAR_2)
{
 FUNC_2(&VAR_0->linedata[VAR_1], 0, sizeof VAR_0->linedata[VAR_1]);
 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_0, VAR_1, VAR_0->sx, VAR_2);
}
