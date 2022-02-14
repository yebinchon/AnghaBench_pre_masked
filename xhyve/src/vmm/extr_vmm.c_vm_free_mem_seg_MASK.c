
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_seg {int * object; int len; int gpa; } ;


 int FUNC_0 (struct mem_seg*,int) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct mem_seg *VAR_0)
{
 if (VAR_0->object != ((void*)0)) {
  FUNC_1(VAR_0->gpa, VAR_0->len, VAR_0->object);
 }

 FUNC_0(VAR_0, sizeof(*VAR_0));
}
