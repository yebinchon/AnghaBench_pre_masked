
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io {int dummy; } ;
struct index_diff {scalar_t__ untracked; scalar_t__ unstaged; scalar_t__ staged; } ;
struct buffer {int size; char* data; } ;
struct TYPE_2__ {int exec_dir; } ;


 int VAR_0 ;
 int FUNC_0 (struct io*) ;
 scalar_t__ FUNC_1 (struct io*) ;
 scalar_t__ FUNC_2 (struct io*,struct buffer*,int ,int) ;
 int FUNC_3 (struct io*,int ,int ,int *,char const**) ;
 int FUNC_4 (struct index_diff*,int ,int) ;
 TYPE_1__ VAR_1 ;

bool
FUNC_5(struct index_diff *VAR_2, bool VAR_3, bool VAR_4)
{
 const char *VAR_5 = !VAR_3 ? "--untracked-files=no" :
         VAR_4 ? "--untracked-files=all" :
       "--untracked-files=normal";
 const char *VAR_6[] = {
  "git", "status", "--porcelain", "-z", VAR_5, ((void*)0)
 };
 struct io VAR_7;
 struct buffer VAR_8;
 bool VAR_9 = 1;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));

 if (!FUNC_3(&VAR_7, VAR_0, VAR_1.exec_dir, ((void*)0), VAR_6))
  return 0;

 while (FUNC_2(&VAR_7, &VAR_8, 0, 1) && (VAR_9 = VAR_8.size > 3)) {
  if (VAR_8.data[0] == '?')
   VAR_2->untracked++;

  else if (VAR_8.data[0] != ' ' && VAR_8.data[0] != 'U')
   VAR_2->staged++;
  if (VAR_8.data[1] != ' ' && VAR_8.data[1] != '?')
   VAR_2->unstaged++;
  if (!VAR_4 && VAR_2->staged && VAR_2->unstaged &&
      (!VAR_3 || VAR_2->untracked))
   break;


  if (VAR_8.data[0] == 'R') {
   FUNC_2(&VAR_7, &VAR_8, 0, 1);
  }
 }

 if (FUNC_1(&VAR_7))
  VAR_9 = 0;

 FUNC_0(&VAR_7);
 return VAR_9;
}
