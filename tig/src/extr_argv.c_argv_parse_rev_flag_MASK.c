
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_flags {size_t search_offset; int with_graph; int with_reflog; } ;


 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char const**,int ,char const*,size_t,size_t*,int*,int*) ;
 size_t FUNC_2 (char const*) ;

bool
FUNC_3(const char *VAR_0, struct rev_flags *VAR_1)
{
 static const char *VAR_2[] = {
  "--after=",
  "--all",
  "--all-match",
  "--ancestry-path",
  "--author-date-order",
  "--basic-regexp",
  "--before=",
  "--boundary",
  "--branches",
  "--branches=",
  "--cherry",
  "--cherry-mark",
  "--cherry-pick",
  "--committer=",
  "--date-order",
  "--dense",
  "--exclude=",
  "--extended-regexp",
  "--first-parent",
  "--fixed-strings",
  "--full-history",
  "--graph",
  "--glob=",
  "--left-only",
  "--max-parents=",
  "--max-age=",
  "--merge",
  "--merges",
  "--min-parents=",
  "--no-max-parents",
  "--no-min-parents",
  "--no-walk",
  "--perl-regexp",
  "--pickaxe-all",
  "--pickaxe-regex",
  "--regexp-ignore-case",
  "--remotes",
  "--remotes=",
  "--remove-empty",
  "--reverse",
  "--right-only",
  "--simplify-by-decoration",
  "--simplify-merges",
  "--since=",
  "--skip=",
  "--sparse",
  "--stdin",
  "--tags",
  "--tags=",
  "--topo-order",
  "--until=",
  "-E",
  "-F",
  "-i",
 };
 static const char *VAR_3[] = {
  "--no-merges",
  "--follow",
  "--author=",
 };
 static const char *VAR_4[] = {
  "--walk-reflogs",
  "-g",
 };
 static const char *VAR_5[] = {
  "--grep-reflog=",
  "--grep=",
  "-G",
  "-S",
 };
 size_t VAR_6 = FUNC_2(VAR_0);
 bool VAR_7 = 1;
 bool VAR_8 = 0;
 size_t VAR_9 = 0;

 if (FUNC_1(VAR_2, FUNC_0(VAR_2), VAR_0, VAR_6, ((void*)0), ((void*)0), ((void*)0)) ||
     FUNC_1(VAR_3, FUNC_0(VAR_3), VAR_0, VAR_6, ((void*)0), &VAR_7, ((void*)0)) ||
     FUNC_1(VAR_4, FUNC_0(VAR_4), VAR_0, VAR_6, ((void*)0), ((void*)0), &VAR_8) ||
     FUNC_1(VAR_5, FUNC_0(VAR_5), VAR_0, VAR_6, &VAR_9, &VAR_7, ((void*)0))) {
  if (VAR_1) {
   VAR_1->search_offset = VAR_9 ? VAR_9 : VAR_6;
   VAR_1->with_graph = VAR_7;
   VAR_1->with_reflog = VAR_8;
  }
  return 1;
 }

 return 0;
}
