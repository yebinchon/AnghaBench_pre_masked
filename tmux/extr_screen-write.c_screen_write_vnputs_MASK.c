
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef char u_char ;
struct utf8_data {size_t width; scalar_t__ size; } ;
struct screen_write_ctx {int dummy; } ;
struct grid_cell {int attr; struct utf8_data data; } ;
typedef scalar_t__ ssize_t ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct grid_cell*,struct grid_cell const*,int) ;
 int FUNC_2 (struct screen_write_ctx*,struct grid_cell*) ;
 int FUNC_3 (struct screen_write_ctx*,struct grid_cell*,char) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (struct utf8_data*,char) ;
 scalar_t__ FUNC_6 (struct utf8_data*,char) ;
 int FUNC_7 (char**,char const*,int ) ;

void
FUNC_8(struct screen_write_ctx *VAR_3, ssize_t VAR_4,
    const struct grid_cell *VAR_5, const char *VAR_6, va_list VAR_7)
{
 struct grid_cell VAR_8;
 struct utf8_data *VAR_9 = &VAR_8.data;
 char *VAR_10;
 u_char *VAR_11;
 size_t VAR_12, VAR_13 = 0;
 enum utf8_state VAR_14;

 FUNC_1(&VAR_8, VAR_5, sizeof VAR_8);
 FUNC_7(&VAR_10, VAR_6, VAR_7);

 VAR_11 = VAR_10;
 while (*VAR_11 != '\0') {
  if (*VAR_11 > 0x7f && FUNC_6(VAR_9, *VAR_11) == VAR_2) {
   VAR_11++;

   VAR_12 = FUNC_4(VAR_11);
   if (VAR_12 < (size_t)VAR_9->size - 1)
    break;
   while ((VAR_14 = FUNC_5(VAR_9, *VAR_11)) == VAR_2)
    VAR_11++;
   VAR_11++;

   if (VAR_14 != VAR_1)
    continue;
   if (VAR_4 > 0 && VAR_13 + VAR_9->width > (size_t)VAR_4) {
    while (VAR_13 < (size_t)VAR_4) {
     FUNC_3(VAR_3, &VAR_8, ' ');
     VAR_13++;
    }
    break;
   }
   VAR_13 += VAR_9->width;
   FUNC_2(VAR_3, &VAR_8);
  } else {
   if (VAR_4 > 0 && VAR_13 + 1 > (size_t)VAR_4)
    break;

   if (*VAR_11 == '\001')
    VAR_8.attr ^= VAR_0;
   else if (*VAR_11 > 0x1f && *VAR_11 < 0x7f) {
    VAR_13++;
    FUNC_3(VAR_3, &VAR_8, *VAR_11);
   }
   VAR_11++;
  }
 }

 FUNC_0(VAR_10);
}
