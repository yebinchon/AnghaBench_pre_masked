
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_2__* ops; } ;
struct line {struct box* data; } ;
struct box {size_t cells; TYPE_1__* cell; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;
struct TYPE_4__ {scalar_t__ column_bits; } ;
struct TYPE_3__ {size_t length; int type; } ;


 struct line* FUNC_0 (struct view*,unsigned long,int *,int,int ,int) ;
 int FUNC_1 (int *,size_t,size_t) ;
 int FUNC_2 (struct box*,size_t,char const*,size_t) ;
 int FUNC_3 (struct view*,struct line*) ;

struct line *
FUNC_4(struct view *VAR_0, unsigned long VAR_1, const char *VAR_2, size_t VAR_3, enum line_type VAR_4, size_t VAR_5, bool VAR_6)
{
 struct box *VAR_7;
 struct line *VAR_8 = FUNC_0(VAR_0, VAR_1, ((void*)0), VAR_4, FUNC_1(((void*)0), VAR_5, VAR_3), VAR_6);

 if (!VAR_8)
  return ((void*)0);

 VAR_7 = VAR_8->data;
 VAR_7->cell[VAR_7->cells].length = VAR_3;
 VAR_7->cell[VAR_7->cells++].type = VAR_4;
 FUNC_2(VAR_7, VAR_5, VAR_2, VAR_3);

 if (VAR_0->ops->column_bits)
  FUNC_3(VAR_0, VAR_8);
 return VAR_8;
}
