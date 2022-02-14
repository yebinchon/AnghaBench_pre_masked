
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int data; } ;


 scalar_t__ FUNC_0 (struct view*,struct line*) ;

__attribute__((used)) static inline bool
FUNC_1(struct view *VAR_0, struct line *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) && !VAR_1[1].data;
}
