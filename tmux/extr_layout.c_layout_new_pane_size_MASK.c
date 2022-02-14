
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window {int dummy; } ;
struct layout_cell {int sx; int sy; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct window*,struct layout_cell*,int) ;

__attribute__((used)) static u_int
FUNC_1(struct window *VAR_2, u_int VAR_3, struct layout_cell *VAR_4,
    enum layout_type VAR_5, u_int VAR_6, u_int VAR_7, u_int VAR_8)
{
 u_int VAR_9, VAR_10, VAR_11, VAR_12;


 if (VAR_7 == 1)
  return (VAR_8);


 VAR_12 = FUNC_0(VAR_2, VAR_4, VAR_5);





 VAR_10 = (VAR_1 + 1) * (VAR_7 - 1);
 if (VAR_5 == VAR_0) {
  if (VAR_4->sx - VAR_12 > VAR_10)
   VAR_10 = VAR_4->sx - VAR_12;
  VAR_9 = (VAR_4->sx * VAR_6) / VAR_3;
 } else {
  if (VAR_4->sy - VAR_12 > VAR_10)
   VAR_10 = VAR_4->sy - VAR_12;
  VAR_9 = (VAR_4->sy * VAR_6) / VAR_3;
 }


 VAR_11 = VAR_8 - VAR_10;
 if (VAR_9 > VAR_11)
  VAR_9 = VAR_11;
 if (VAR_9 < VAR_1)
  VAR_9 = VAR_1;
 return (VAR_9);
}
