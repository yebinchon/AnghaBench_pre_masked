
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct grid_cell {int us; } ;
struct tty {struct grid_cell cell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int*,int*) ;
 int FUNC_1 (struct tty*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_2, const struct grid_cell *VAR_3)
{
 struct grid_cell *VAR_4 = &VAR_2->cell;
 u_int VAR_5;
 u_char VAR_6, VAR_7, VAR_8;


 if (~VAR_3->us & VAR_0)
  return;





 FUNC_0(VAR_3->us, &VAR_6, &VAR_7, &VAR_8);
 VAR_5 = (65536 * VAR_6) + (256 * VAR_7) + VAR_8;


 FUNC_1(VAR_2, VAR_1, VAR_5);


 VAR_4->us = VAR_3->us;
}
