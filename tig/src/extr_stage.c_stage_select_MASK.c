
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct view*,struct line*,char const*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct view *VAR_3, struct line *VAR_4)
{
 const char *VAR_5 = VAR_2 == VAR_0 ? "Staged changes"
    : VAR_2 == VAR_1 ? "Unstaged changes"
    : ((void*)0);

 FUNC_0(VAR_3, VAR_4, VAR_5);
}
