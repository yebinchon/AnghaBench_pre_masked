
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n; char* buff; char c; int f; } ;
typedef TYPE_1__ RN ;


 scalar_t__ VAR_0 ;
 char FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (RN *VAR_1) {
  if (VAR_1->n >= VAR_0) {
    VAR_1->buff[0] = '\0';
    return 0;
  }
  else {
    VAR_1->buff[VAR_1->n++] = VAR_1->c;
    VAR_1->c = FUNC_0(VAR_1->f);
    return 1;
  }
}
