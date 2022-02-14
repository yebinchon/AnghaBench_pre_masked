
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int last_wp; int flags; int mode; void* rright; void* rlower; void* rleft; void* rupper; void* cy; void* cx; int last_cell; int cell; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct tty*,int ,int ) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*,int ) ;
 int FUNC_4 (struct tty*,char*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int ,int *) ;
 scalar_t__ FUNC_7 (struct tty*) ;

__attribute__((used)) static void
FUNC_8(struct tty *VAR_6)
{
 FUNC_0(&VAR_6->cell, &VAR_5, sizeof VAR_6->cell);

 FUNC_0(&VAR_6->last_cell, &VAR_5, sizeof VAR_6->last_cell);
 VAR_6->last_wp = -1;

 VAR_6->cx = VAR_6->cy = VAR_4;

 VAR_6->rupper = VAR_6->rleft = VAR_4;
 VAR_6->rlower = VAR_6->rright = VAR_4;

 if (VAR_6->flags & VAR_3) {
  if (FUNC_7(VAR_6))
   FUNC_4(VAR_6, "\033[?69h");
  FUNC_3(VAR_6, VAR_2);

  VAR_6->mode = VAR_0;
  FUNC_6(VAR_6, VAR_1, ((void*)0));

  FUNC_1(VAR_6, 0, 0);
  FUNC_5(VAR_6);
  FUNC_2(VAR_6);
 } else
  VAR_6->mode = VAR_1;
}
