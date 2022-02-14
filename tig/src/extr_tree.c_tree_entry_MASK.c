
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct tree_entry {unsigned long size; int id; int mode; int name; } ;
struct line {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 struct line* FUNC_0 (struct view*,struct tree_entry**,int,int ,int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (char const*,int *,int) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static struct line *
FUNC_6(struct view *VAR_1, enum line_type VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, unsigned long VAR_6)
{
 bool VAR_7 = VAR_2 == VAR_0 || FUNC_5(VAR_3);
 struct tree_entry *VAR_8;
 struct line *VAR_9 = FUNC_0(VAR_1, &VAR_8, VAR_2, FUNC_2(VAR_3), VAR_7);

 if (!VAR_9)
  return ((void*)0);

 FUNC_3(VAR_8->name, VAR_3, FUNC_2(VAR_3));
 if (VAR_4)
  VAR_8->mode = FUNC_4(VAR_4, ((void*)0), 8);
 if (VAR_5)
  FUNC_1(VAR_8->id, VAR_5);
 VAR_8->size = VAR_6;

 return VAR_9;
}
