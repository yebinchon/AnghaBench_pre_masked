
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int ref; } ;
struct line {int dummy; } ;


 char* FUNC_0 (struct line*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*) ;

__attribute__((used)) static inline void
FUNC_3(struct view *VAR_0, struct line *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_1);
 size_t VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_0->ref, VAR_2 + VAR_3);
}
