
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int attr; } ;
struct TYPE_7__ {scalar_t__ tok; int str; } ;
typedef int CTSize ;
typedef TYPE_1__ CPState ;
typedef TYPE_2__ CPDecl ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(CPState *VAR_3, CPDecl *VAR_4)
{
  FUNC_1(VAR_3, '(');
  if (VAR_3->tok == VAR_0) {
    const char *VAR_5 = FUNC_4(VAR_3->str);
    CTSize VAR_6 = 0, VAR_7 = 0;
    if (VAR_5[0] == '_' && VAR_5[1] == '_') VAR_5 += 2;
    if (*VAR_5 == 'V') {
      VAR_5++;
      VAR_7 = *VAR_5++ - '0';
      if (*VAR_5 >= '0' && *VAR_5 <= '9')
 VAR_7 = VAR_7*10 + (*VAR_5++ - '0');
    }
    switch (*VAR_5++) {
    case 'Q': VAR_6 = 1; break;
    case 'H': VAR_6 = 2; break;
    case 'S': VAR_6 = 4; break;
    case 'D': VAR_6 = 8; break;
    case 'T': VAR_6 = 16; break;
    case 'O': VAR_6 = 32; break;
    default: goto bad_size;
    }
    if (*VAR_5 == 'I' || *VAR_5 == 'F') {
      FUNC_0(VAR_4->attr, VAR_1, VAR_6);
      if (VAR_7) FUNC_0(VAR_4->attr, VAR_2, FUNC_3(VAR_7*VAR_6));
    }
  bad_size:
    FUNC_2(VAR_3);
  }
  FUNC_1(VAR_3, ')');
}
