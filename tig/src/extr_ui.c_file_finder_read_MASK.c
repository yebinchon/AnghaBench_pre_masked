
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct io {int dummy; } ;
struct file_finder_line {int dummy; } ;
struct file_finder {TYPE_2__** line; TYPE_2__** file; } ;
struct buffer {scalar_t__ size; int data; } ;
struct TYPE_5__ {int text; } ;
struct TYPE_4__ {int exec_dir; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct io*) ;
 scalar_t__ FUNC_2 (struct io*) ;
 scalar_t__ FUNC_3 (struct io*,struct buffer*,int ,int) ;
 int FUNC_4 (struct io*,int ,int ,int *,char const**) ;
 int FUNC_5 (TYPE_2__***,size_t,size_t) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int ,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_8(struct file_finder *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = FUNC_6(VAR_3) ? "HEAD" : VAR_3;
 const char *VAR_5[] = {
  "git", "ls-tree", "-z", "-r", "--name-only", "--full-name",
   VAR_4, ((void*)0)
 };
 struct buffer VAR_6;
 struct io VAR_7;
 size_t VAR_8;
 bool VAR_9 = 1;

 if (!FUNC_4(&VAR_7, VAR_0, VAR_1.exec_dir, ((void*)0), VAR_5))
  return 0;

 for (VAR_8 = 0; FUNC_3(&VAR_7, &VAR_6, 0, 1); VAR_8++) {

  if (!FUNC_5(&VAR_2->file, VAR_8, 2)) {
   VAR_9 = 0;
   break;
  }

  VAR_2->file[VAR_8] = FUNC_0(1, sizeof(struct file_finder_line) + VAR_6.size);
  if (!VAR_2->file[VAR_8]) {
   VAR_9 = 0;
   break;
  }

  FUNC_7(VAR_2->file[VAR_8]->text, VAR_6.data, VAR_6.size);
 }

 if (FUNC_2(&VAR_7) || !FUNC_5(&VAR_2->line, 0, VAR_8 + 1))
  VAR_9 = 0;
 FUNC_1(&VAR_7);
 return VAR_9;
}
