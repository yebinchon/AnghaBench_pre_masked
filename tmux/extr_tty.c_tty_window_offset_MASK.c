
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct tty {int oflag; int osy; int osx; int ooy; int oox; } ;



int
FUNC_0(struct tty *VAR_0, u_int *VAR_1, u_int *VAR_2, u_int *VAR_3, u_int *VAR_4)
{
 *VAR_1 = VAR_0->oox;
 *VAR_2 = VAR_0->ooy;
 *VAR_3 = VAR_0->osx;
 *VAR_4 = VAR_0->osy;

 return (VAR_0->oflag);
}
