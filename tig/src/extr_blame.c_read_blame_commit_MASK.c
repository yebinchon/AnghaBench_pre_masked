
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct line* line; int lines; } ;
struct line {int dirty; struct blame* data; } ;
struct blame_state {int blamed; } ;
struct blame_header {int group; int lineno; scalar_t__ orig_lineno; } ;
struct blame_commit {int dummy; } ;
struct blame {scalar_t__ lineno; struct blame_commit* commit; } ;


 struct blame_commit* FUNC_0 (struct view*,char const*) ;
 int FUNC_1 (struct blame_header*,char const*,int ) ;

__attribute__((used)) static struct blame_commit *
FUNC_2(struct view *VAR_0, const char *VAR_1, struct blame_state *VAR_2)
{
 struct blame_header VAR_3;
 struct blame_commit *VAR_4;
 struct blame *VAR_5;

 if (!FUNC_1(&VAR_3, VAR_1, VAR_0->lines))
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_2->blamed += VAR_3.group;
 while (VAR_3.group--) {
  struct line *VAR_6 = &VAR_0->line[VAR_3.lineno + VAR_3.group - 1];

  VAR_5 = VAR_6->data;
  VAR_5->commit = VAR_4;
  VAR_5->lineno = VAR_3.orig_lineno + VAR_3.group - 1;
  VAR_6->dirty = 1;
 }

 return VAR_4;
}
