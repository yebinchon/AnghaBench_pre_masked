
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option_info {void* value; } ;


 int FUNC_0 (struct option_info*) ;
 struct option_info* VAR_0 ;

__attribute__((used)) static struct option_info *
FUNC_1(void *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].value == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
