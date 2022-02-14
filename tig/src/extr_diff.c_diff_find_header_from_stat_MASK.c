
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct line* line; } ;
struct line {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct view*,struct line*,int ) ;
 struct line* FUNC_1 (struct view*,struct line*,int ) ;
 scalar_t__ FUNC_2 (struct view*,struct line*) ;

__attribute__((used)) static struct line *
FUNC_3(struct view *VAR_4, struct line *VAR_5)
{
 if (VAR_5->type == VAR_3) {
  int VAR_6 = 0;

  while (FUNC_2(VAR_4, VAR_5) && VAR_5->type == VAR_3) {
   VAR_6++;
   VAR_5--;
  }

  for (VAR_5 = VAR_4->line; FUNC_2(VAR_4, VAR_5); VAR_5++) {
   VAR_5 = FUNC_1(VAR_4, VAR_5, VAR_0);
   if (!VAR_5)
    break;

   if (FUNC_0(VAR_4, VAR_5, VAR_1)
       || FUNC_0(VAR_4, VAR_5, VAR_2)) {
    if (VAR_6 == 1) {
     break;
    }
    VAR_6--;
   }
  }

  return VAR_5;
 }

 return ((void*)0);
}
