
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty_ctx {scalar_t__ xoff; scalar_t__ yoff; scalar_t__ ox; scalar_t__ sx; scalar_t__ oy; scalar_t__ sy; int bigger; } ;
struct tty {int client; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_0, const struct tty_ctx *VAR_1, u_int VAR_2, u_int VAR_3,
    u_int VAR_4, u_int VAR_5)
{
 u_int VAR_6 = VAR_1->xoff + VAR_2, VAR_7 = VAR_1->yoff + VAR_3, VAR_8;

 if (!VAR_1->bigger)
  return (1);

 if (FUNC_0(VAR_0->client) == 0)
  VAR_8 = FUNC_1(VAR_0->client);
 else
  VAR_8 = 0;

 if (VAR_6 + VAR_4 <= VAR_1->ox || VAR_6 >= VAR_1->ox + VAR_1->sx ||
     VAR_7 + VAR_5 <= VAR_1->oy || VAR_7 >= VAR_8 + VAR_1->oy + VAR_1->sy)
  return (0);
 return (1);
}
