
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {scalar_t__ type; struct grep_line* data; } ;
struct grep_line {char* file; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct line const*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static struct grep_line *
FUNC_2(const struct line *VAR_2)
{
 static struct grep_line VAR_3;

 if (VAR_2->type == VAR_0)
  return VAR_2->data;

 VAR_3.file = VAR_2->type == VAR_1 ? "" : FUNC_1(FUNC_0(VAR_2));
 return &VAR_3;
}
