
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct grid {scalar_t__ sy; int * linedata; void* hlimit; scalar_t__ hsize; scalar_t__ hscrolled; int flags; void* sx; } ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__,int) ;
 struct grid* FUNC_1 (int) ;

struct grid *
FUNC_2(u_int VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct grid *VAR_4;

 VAR_4 = FUNC_1(sizeof *VAR_4);
 VAR_4->sx = VAR_1;
 VAR_4->sy = VAR_2;

 VAR_4->flags = VAR_0;

 VAR_4->hscrolled = 0;
 VAR_4->hsize = 0;
 VAR_4->hlimit = VAR_3;

 if (VAR_4->sy != 0)
  VAR_4->linedata = FUNC_0(VAR_4->sy, sizeof *VAR_4->linedata);
 else
  VAR_4->linedata = ((void*)0);

 return (VAR_4);
}
