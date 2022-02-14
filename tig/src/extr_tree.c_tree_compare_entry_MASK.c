
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct line const*) ;

__attribute__((used)) static int
FUNC_2(const struct line *VAR_1, const struct line *VAR_2)
{
 if (VAR_1->type != VAR_2->type)
  return VAR_1->type == VAR_0 ? -1 : 1;
 return FUNC_0(FUNC_1(VAR_1), FUNC_1(VAR_2));
}
