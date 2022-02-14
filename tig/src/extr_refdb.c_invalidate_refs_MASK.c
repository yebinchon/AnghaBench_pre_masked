
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int * next; scalar_t__ valid; } ;



__attribute__((used)) static bool
FUNC_0(void *VAR_0, void *VAR_1)
{
 struct ref *VAR_2 = VAR_1;

 VAR_2->valid = 0;
 VAR_2->next = ((void*)0);
 return 1;
}
