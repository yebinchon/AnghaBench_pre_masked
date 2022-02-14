
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmm_stat_type {int (* func ) (struct vm*,int,struct vmm_stat_type*) ;} ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm*,int,struct vmm_stat_type*) ;
 int * FUNC_1 (struct vm*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct vmm_stat_type** VAR_4 ;

int
FUNC_2(struct vm *VAR_5, int VAR_6, int *VAR_7, uint64_t *VAR_8)
{
 struct vmm_stat_type *VAR_9;
 uint64_t *VAR_10;
 int VAR_11;

 if (VAR_6 < 0 || VAR_6 >= VAR_1)
  return (VAR_0);


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_9 = VAR_4[VAR_11];
  if (VAR_9->func != ((void*)0))
   (*VAR_9->func)(VAR_5, VAR_6, VAR_9);
 }


 VAR_10 = FUNC_1(VAR_5, VAR_6);
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_8[VAR_11] = VAR_10[VAR_11];
 *VAR_7 = VAR_2;
 return (0);
}
