
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct utf8_data {scalar_t__ size; scalar_t__ have; } ;
struct paste_buffer {int dummy; } ;
struct client {size_t prompt_index; struct utf8_data* prompt_saved; struct utf8_data* prompt_buffer; } ;
typedef enum utf8_state { ____Placeholder_utf8_state } utf8_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct utf8_data*) ;
 int FUNC_1 (struct utf8_data*,struct utf8_data*,size_t) ;
 int FUNC_2 (struct utf8_data*,struct utf8_data*,size_t) ;
 char* FUNC_3 (struct paste_buffer*,size_t*) ;
 struct paste_buffer* FUNC_4 (int *) ;
 int FUNC_5 (struct utf8_data*,char const) ;
 int FUNC_6 (struct utf8_data*,char const) ;
 int FUNC_7 (struct utf8_data*,char const) ;
 size_t FUNC_8 (struct utf8_data*) ;
 void* FUNC_9 (struct utf8_data*,size_t,int) ;

__attribute__((used)) static int
FUNC_10(struct client *VAR_2)
{
 struct paste_buffer *VAR_3;
 const char *VAR_4;
 size_t VAR_5, VAR_6, VAR_7;
 u_int VAR_8;
 struct utf8_data *VAR_9, *VAR_10;
 enum utf8_state VAR_11;

 VAR_5 = FUNC_8(VAR_2->prompt_buffer);
 if (VAR_2->prompt_saved != ((void*)0)) {
  VAR_9 = VAR_2->prompt_saved;
  VAR_6 = FUNC_8(VAR_2->prompt_saved);
 } else {
  if ((VAR_3 = FUNC_4(((void*)0))) == ((void*)0))
   return (0);
  VAR_4 = FUNC_3(VAR_3, &VAR_7);
  VAR_9 = FUNC_9(((void*)0), VAR_7 + 1, sizeof *VAR_9);
  VAR_10 = VAR_9;
  for (VAR_8 = 0; VAR_8 != VAR_7; ) {
   VAR_11 = FUNC_6(VAR_10, VAR_4[VAR_8]);
   if (VAR_11 == VAR_1) {
    while (++VAR_8 != VAR_7 && VAR_11 == VAR_1)
     VAR_11 = FUNC_5(VAR_10, VAR_4[VAR_8]);
    if (VAR_11 == VAR_0) {
     VAR_10++;
     continue;
    }
    VAR_8 -= VAR_10->have;
   }
   if (VAR_4[VAR_8] <= 31 || VAR_4[VAR_8] >= 127)
    break;
   FUNC_7(VAR_10, VAR_4[VAR_8]);
   VAR_10++;
   VAR_8++;
  }
  VAR_10->size = 0;
  VAR_6 = VAR_10 - VAR_9;
 }
 if (VAR_6 == 0)
  return (0);

 VAR_2->prompt_buffer = FUNC_9(VAR_2->prompt_buffer, VAR_5 + VAR_6 + 1,
     sizeof *VAR_2->prompt_buffer);
 if (VAR_2->prompt_index == VAR_5) {
  FUNC_1(VAR_2->prompt_buffer + VAR_2->prompt_index, VAR_9,
      VAR_6 * sizeof *VAR_2->prompt_buffer);
  VAR_2->prompt_index += VAR_6;
  VAR_2->prompt_buffer[VAR_2->prompt_index].size = 0;
 } else {
  FUNC_2(VAR_2->prompt_buffer + VAR_2->prompt_index + VAR_6,
      VAR_2->prompt_buffer + VAR_2->prompt_index,
      (VAR_5 + 1 - VAR_2->prompt_index) * sizeof *VAR_2->prompt_buffer);
  FUNC_1(VAR_2->prompt_buffer + VAR_2->prompt_index, VAR_9,
      VAR_6 * sizeof *VAR_2->prompt_buffer);
  VAR_2->prompt_index += VAR_6;
 }

 if (VAR_9 != VAR_2->prompt_saved)
  FUNC_0(VAR_9);
 return (1);
}
