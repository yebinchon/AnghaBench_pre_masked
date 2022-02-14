
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {char const* dir; int io; int name; int argv; scalar_t__ pipe; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 int FUNC_0 (int *,char const**) ;
 int FUNC_1 (struct view*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct view*,struct view*,int) ;
 int FUNC_4 (char*,int ,int ) ;

void
FUNC_5(struct view *VAR_1, struct view *VAR_2, const char *VAR_3[], const char *VAR_4, enum open_flags VAR_5)
{
 if (VAR_2->pipe)
  FUNC_1(VAR_2, 1);
 VAR_2->dir = VAR_4;

 if (!FUNC_0(&VAR_2->argv, VAR_3)) {
  FUNC_4("Failed to open %s view: %s", VAR_2->name, FUNC_2(&VAR_2->io));
 } else {
  FUNC_3(VAR_1, VAR_2, VAR_5 | VAR_0);
 }
}
