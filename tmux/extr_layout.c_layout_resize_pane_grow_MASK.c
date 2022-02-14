
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window {int dummy; } ;
struct layout_cell {int dummy; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;


 struct layout_cell* FUNC_0 (struct layout_cell*,int ) ;
 struct layout_cell* FUNC_1 (struct layout_cell*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct window*,struct layout_cell*,int,int) ;
 int FUNC_3 (struct window*,struct layout_cell*,int) ;

__attribute__((used)) static int
FUNC_4(struct window *VAR_2, struct layout_cell *VAR_3,
    enum layout_type VAR_4, int VAR_5, int VAR_6)
{
 struct layout_cell *VAR_7, *VAR_8;
 u_int VAR_9 = 0;


 VAR_7 = VAR_3;


 VAR_8 = FUNC_0(VAR_3, VAR_0);
 while (VAR_8 != ((void*)0)) {
  VAR_9 = FUNC_3(VAR_2, VAR_8, VAR_4);
  if (VAR_9 > 0)
   break;
  VAR_8 = FUNC_0(VAR_8, VAR_0);
 }


 if (VAR_6 && VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_1(VAR_3, VAR_1, VAR_0);
  while (VAR_8 != ((void*)0)) {
   VAR_9 = FUNC_3(VAR_2, VAR_8, VAR_4);
   if (VAR_9 > 0)
    break;
   VAR_8 = FUNC_1(VAR_8, VAR_1, VAR_0);
  }
 }
 if (VAR_8 == ((void*)0))
  return (0);


 if (VAR_9 > (u_int) VAR_5)
  VAR_9 = VAR_5;
 FUNC_2(VAR_2, VAR_7, VAR_4, VAR_9);
 FUNC_2(VAR_2, VAR_8, VAR_4, -VAR_9);
 return (VAR_9);
}
