
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct tty {int flags; } ;
struct TYPE_2__ {int size; int* data; scalar_t__ width; } ;
typedef struct grid_cell {TYPE_1__ data; } const grid_cell ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct grid_cell const*,struct grid_cell const*,int) ;
 int FUNC_1 (int*,char,scalar_t__) ;

__attribute__((used)) static const struct grid_cell *
FUNC_2(struct tty *VAR_2, const struct grid_cell *VAR_3)
{
 static struct grid_cell VAR_4;
 u_int VAR_5;


 if (VAR_3->data.size == 1 && *VAR_3->data.data < 0x7f)
  return (VAR_3);


 if (VAR_2->flags & VAR_0)
  return (VAR_3);


 VAR_5 = VAR_3->data.width;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 FUNC_0(&VAR_4, VAR_3, sizeof VAR_4);
 VAR_4.data.size = VAR_5;
 FUNC_1(VAR_4.data.data, '_', VAR_5);
 return (&VAR_4);
}
