
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct tty {scalar_t__ rlower; scalar_t__ rupper; scalar_t__ cx; scalar_t__ sx; scalar_t__ cy; int term; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tty*,int ,scalar_t__) ;
 int FUNC_1 (struct tty*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct tty *VAR_2, u_int VAR_3, u_int VAR_4)
{
 if (VAR_2->rlower == VAR_4 && VAR_2->rupper == VAR_3)
  return;
 if (!FUNC_2(VAR_2->term, VAR_0))
  return;

 VAR_2->rupper = VAR_3;
 VAR_2->rlower = VAR_4;







 if (VAR_2->cx >= VAR_2->sx)
  FUNC_0(VAR_2, 0, VAR_2->cy);

 FUNC_1(VAR_2, VAR_0, VAR_2->rupper, VAR_2->rlower);
 VAR_2->cx = VAR_2->cy = VAR_1;
}
