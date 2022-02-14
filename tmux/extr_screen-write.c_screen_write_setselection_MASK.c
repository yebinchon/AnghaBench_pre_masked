
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct tty_ctx {int num; int * ptr; } ;
struct screen_write_ctx {int dummy; } ;


 int FUNC_0 (struct screen_write_ctx*,struct tty_ctx*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct tty_ctx*) ;

void
FUNC_2(struct screen_write_ctx *VAR_1, u_char *VAR_2, u_int VAR_3)
{
 struct tty_ctx VAR_4;

 FUNC_0(VAR_1, &VAR_4);
 VAR_4.ptr = VAR_2;
 VAR_4.num = VAR_3;

 FUNC_1(VAR_0, &VAR_4);
}
