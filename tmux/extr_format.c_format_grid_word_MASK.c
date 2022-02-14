
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utf8_data {scalar_t__ size; } ;
struct grid_line {int flags; } ;
struct grid_cell {int flags; int data; } ;
struct grid {scalar_t__ hsize; int sy; struct grid_line* linedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utf8_data*) ;
 int VAR_2 ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_2 (struct grid*,scalar_t__) ;
 int FUNC_3 (struct utf8_data*,int *,int) ;
 char* FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 char* FUNC_6 (struct utf8_data*) ;
 struct utf8_data* FUNC_7 (struct utf8_data*,size_t,int) ;

char *
FUNC_8(struct grid *VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct grid_line *VAR_6;
 struct grid_cell VAR_7;
 const char *VAR_8;
 struct utf8_data *VAR_9 = ((void*)0);
 u_int VAR_10;
 size_t VAR_11 = 0;
 int VAR_12 = 0;
 char *VAR_13 = ((void*)0);

 VAR_8 = FUNC_4(VAR_2, "word-separators");

 VAR_5 = VAR_3->hsize + VAR_5;
 for (;;) {
  FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_7);
  if (VAR_7.flags & VAR_0)
   break;
  if (FUNC_5(VAR_8, &VAR_7.data)) {
   VAR_12 = 1;
   break;
  }

  if (VAR_4 == 0) {
   if (VAR_5 == 0)
    break;
   VAR_6 = &VAR_3->linedata[VAR_5 - 1];
   if (~VAR_6->flags & VAR_1)
    break;
   VAR_5--;
   VAR_4 = FUNC_2(VAR_3, VAR_5);
   if (VAR_4 == 0)
    break;
  }
  VAR_4--;
 }
 for (;;) {
  if (VAR_12) {
   VAR_10 = FUNC_2(VAR_3, VAR_5);
   if (VAR_10 == 0 || VAR_4 == VAR_10 - 1) {
    if (VAR_5 == VAR_3->hsize + VAR_3->sy - 1)
     break;
    VAR_6 = &VAR_3->linedata[VAR_5];
    if (~VAR_6->flags & VAR_1)
     break;
    VAR_5++;
    VAR_4 = 0;
   } else
    VAR_4++;
  }
  VAR_12 = 1;

  FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_7);
  if (VAR_7.flags & VAR_0)
   break;
  if (FUNC_5(VAR_8, &VAR_7.data))
   break;

  VAR_9 = FUNC_7(VAR_9, VAR_11 + 2, sizeof *VAR_9);
  FUNC_3(&VAR_9[VAR_11++], &VAR_7.data, sizeof *VAR_9);
 }
 if (VAR_11 != 0) {
  VAR_9[VAR_11].size = 0;
  VAR_13 = FUNC_6(VAR_9);
  FUNC_0(VAR_9);
 }
 return (VAR_13);
}
