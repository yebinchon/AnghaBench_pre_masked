
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmm_stat_type {char* desc; scalar_t__ nelems; scalar_t__ index; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct vmm_stat_type** VAR_3 ;

void
FUNC_1(void *VAR_4)
{
 struct vmm_stat_type *VAR_5 = VAR_4;


 if (VAR_5->desc == ((void*)0))
  return;

 if (VAR_1 + VAR_5->nelems >= VAR_0) {
  FUNC_0("Cannot accomodate vmm stat type \"%s\"!\n", VAR_5->desc);
  return;
 }

 VAR_5->index = VAR_1;
 VAR_1 += VAR_5->nelems;

 VAR_3[VAR_2++] = VAR_5;
}
