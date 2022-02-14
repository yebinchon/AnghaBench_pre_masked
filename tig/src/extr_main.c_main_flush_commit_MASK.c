
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct commit {scalar_t__* id; } ;


 int VAR_0 ;
 int FUNC_0 (struct view*,int ,struct commit*,char*,int) ;

__attribute__((used)) static inline void
FUNC_1(struct view *VAR_1, struct commit *VAR_2)
{
 if (*VAR_2->id)
  FUNC_0(VAR_1, VAR_0, VAR_2, "", 0);
}
