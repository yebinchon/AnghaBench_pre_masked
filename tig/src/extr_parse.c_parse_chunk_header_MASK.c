
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lines; int position; } ;
struct TYPE_3__ {int lines; int position; } ;
struct chunk_header {TYPE_2__ new; TYPE_1__ old; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct chunk_header*,int ,int) ;
 scalar_t__ FUNC_2 (char const**,int*,char,int) ;
 int FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,char) ;

bool
FUNC_5(struct chunk_header *VAR_0, const char *VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->new.lines = VAR_0->old.lines = 1;

 if (!FUNC_3(VAR_1, "@@ -"))
  VAR_1 += FUNC_0("@@ -") - 1;
 else if (!FUNC_3(VAR_1, "@@@") &&
   (VAR_1 = FUNC_4(VAR_1, '-')))
                          ;
 else
  return 0;

 return FUNC_2(&VAR_1, &VAR_0->old.position, '-', 0) &&
  FUNC_2(&VAR_1, &VAR_0->old.lines, ',', 1) &&
  FUNC_2(&VAR_1, &VAR_0->new.position, '+', 0) &&
  FUNC_2(&VAR_1, &VAR_0->new.lines, ',', 0);
}
