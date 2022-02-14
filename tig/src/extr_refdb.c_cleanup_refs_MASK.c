
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_opt {int changed; } ;
struct ref {scalar_t__* id; int valid; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(void *VAR_1, void *VAR_2)
{
 struct ref_opt *VAR_3 = VAR_1;
 struct ref *VAR_4 = VAR_2;

 if (!VAR_4->valid) {
  VAR_4->id[0] = 0;
  VAR_3->changed |= VAR_0;
 }

 return 1;
}
