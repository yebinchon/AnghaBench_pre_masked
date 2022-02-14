
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io {int dummy; } ;
struct buffer {scalar_t__ size; char* data; int member_0; } ;
struct TYPE_2__ {int exec_dir; } ;


 int VAR_0 ;
 int FUNC_0 (struct io*) ;
 int FUNC_1 (struct io*) ;
 scalar_t__ FUNC_2 (struct io*,struct buffer*,char,int) ;
 int FUNC_3 (struct io*,int ,int ,int *,char const**) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (char*,size_t,int *,char*,char const*,...) ;

__attribute__((used)) static bool
FUNC_5(char *VAR_2, size_t VAR_3, const char *VAR_4,
       const char *VAR_5)
{
 if (!FUNC_4(VAR_2, VAR_3, ((void*)0), "%s...%s",
       VAR_4, VAR_5)) {
  return 0;
 }

 const char *VAR_6[] = {
  "git", "rev-list", "--left-right", VAR_2, ((void*)0)
 };

 struct io VAR_7;

 if (!FUNC_3(&VAR_7, VAR_0, VAR_1.exec_dir, ((void*)0), VAR_6)) {
  return 0;
 }

 struct buffer VAR_8 = { 0 };
 int VAR_9 = 0;
 int VAR_10 = 0;

 while (FUNC_2(&VAR_7, &VAR_8, '\n', 1)) {
  if (VAR_8.size > 0 && VAR_8.data) {
   if (VAR_8.data[0] == '<') {
    VAR_9++;
   } else if (VAR_8.data[0] == '>') {
    VAR_10++;
   }
  }
 }

 bool VAR_11 = FUNC_1(&VAR_7);
 FUNC_0(&VAR_7);

 if (VAR_11) {
  return 0;
 }

 if (VAR_9 == 0 && VAR_10 == 0) {
  return FUNC_4(VAR_2, VAR_3, ((void*)0),
          "Your branch is up-to-date with '%s'.",
          VAR_5);
 } else if (VAR_9 > 0 && VAR_10 > 0) {
  return FUNC_4(VAR_2, VAR_3, ((void*)0),
          "Your branch and '%s' have diverged, "
          "and have %d and %d different commits "
          "each, respectively",
          VAR_5, VAR_9, VAR_10);
 } else if (VAR_9 > 0) {
  return FUNC_4(VAR_2, VAR_3, ((void*)0),
          "Your branch is ahead of '%s' by "
          "%d commit%s.", VAR_5, VAR_9,
          VAR_9 > 1 ? "s" : "");
 } else if (VAR_10 > 0) {
  return FUNC_4(VAR_2, VAR_3, ((void*)0),
          "Your branch is behind '%s' by "
          "%d commit%s.", VAR_5, VAR_10,
          VAR_10 > 1 ? "s" : "");
 }

 return 0;
}
