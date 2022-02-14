
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int dummy; } ;
struct line {int dummy; } ;
struct commit {int id; } ;


 struct ref* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct line const*) ;
 int FUNC_2 (struct line const*) ;

__attribute__((used)) static inline const struct ref *
FUNC_3(const struct line *VAR_0, struct commit *VAR_1)
{
 const struct ref *VAR_2 = ((void*)0);

 if (FUNC_1(VAR_0) && !(VAR_2 = FUNC_0(VAR_1->id)))
  FUNC_2(VAR_0);

 return VAR_2;
}
