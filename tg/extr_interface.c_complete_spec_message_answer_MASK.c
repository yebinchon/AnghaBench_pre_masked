
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tgl_message {TYPE_1__* reply_markup; } ;
struct TYPE_2__ {size_t rows; int* row_start; int * buttons; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int) ;

int FUNC_3 (struct tgl_message *VAR_0, int VAR_1, const char *VAR_2, int VAR_3, char **VAR_4) {
  if (!VAR_0 || !VAR_0->reply_markup || !VAR_0->reply_markup->rows) {
    *VAR_4 = ((void*)0);
    return -1;
  }
  VAR_1 ++;

  int VAR_5 = VAR_0->reply_markup->row_start[VAR_0->reply_markup->rows];
  while (VAR_1 < VAR_5 && FUNC_2 (VAR_0->reply_markup->buttons[VAR_1], VAR_2, VAR_3)) {
    VAR_1 ++;
  }

  if (VAR_1 < VAR_5) {
    *VAR_4 = FUNC_1 (VAR_0->reply_markup->buttons[VAR_1]);
    FUNC_0 (*VAR_4);
    return VAR_1;
  } else {
    *VAR_4 = ((void*)0);
    return -1;
  }
}
