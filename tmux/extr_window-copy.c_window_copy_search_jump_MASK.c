
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window_mode_entry {int dummy; } ;
struct grid {scalar_t__ sx; int hsize; int sy; } ;


 int FUNC_0 (struct window_mode_entry*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct grid*,struct grid*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (struct grid*,struct grid*,scalar_t__*,scalar_t__,int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(struct window_mode_entry *VAR_0, struct grid *VAR_1,
    struct grid *VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5, int VAR_6, int VAR_7,
    int VAR_8)
{
 u_int VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = 0;
 if (VAR_8) {
  for (VAR_9 = VAR_4; VAR_9 <= VAR_5; VAR_9++) {
   VAR_11 = FUNC_1(VAR_1, VAR_2, &VAR_10, VAR_9, VAR_3,
       VAR_1->sx, VAR_6);
   if (VAR_11)
    break;
   VAR_3 = 0;
  }
 } else {
  for (VAR_9 = VAR_4 + 1; VAR_5 < VAR_9; VAR_9--) {
   VAR_11 = FUNC_2(VAR_1, VAR_2, &VAR_10, VAR_9 - 1, 0,
       VAR_3, VAR_6);
   if (VAR_11) {
    VAR_9--;
    break;
   }
   VAR_3 = VAR_1->sx;
  }
 }

 if (VAR_11) {
  FUNC_0(VAR_0, VAR_10, VAR_9);
  return (1);
 }
 if (VAR_7) {
  return (FUNC_3(VAR_0, VAR_1, VAR_2,
      VAR_8 ? 0 : VAR_1->sx - 1,
      VAR_8 ? 0 : VAR_1->hsize + VAR_1->sy - 1, VAR_4, VAR_6, 0,
      VAR_8));
 }
 return (0);
}
