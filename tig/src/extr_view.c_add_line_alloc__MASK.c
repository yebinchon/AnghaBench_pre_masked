
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {void* data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 struct line* FUNC_0 (struct view*,int *,int,size_t,int) ;

struct line *
FUNC_1(struct view *VAR_0, void **VAR_1, enum line_type VAR_2, size_t VAR_3, bool VAR_4)
{
 struct line *VAR_5 = FUNC_0(VAR_0, ((void*)0), VAR_2, VAR_3, VAR_4);

 if (VAR_5)
  *VAR_1 = VAR_5->data;
 return VAR_5;
}
