
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_range {scalar_t__ base; scalar_t__ name; scalar_t__ size; int flags; } ;
struct mmio_rb_range {struct mem_range mr_param; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct mmio_rb_range*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mmio_rb_range*) ;
 struct mmio_rb_range** VAR_2 ;
 int FUNC_3 (int *,scalar_t__,struct mmio_rb_range**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct mem_range *VAR_6)
{
 struct mem_range *VAR_7;
 struct mmio_rb_range *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 FUNC_5(&VAR_5);
 VAR_9 = FUNC_3(&VAR_3, VAR_6->base, &VAR_8);
 if (VAR_9 == 0) {
  VAR_7 = &VAR_8->mr_param;
  FUNC_1(VAR_7->name == VAR_6->name);
  FUNC_1(VAR_7->base == VAR_6->base && VAR_7->size == VAR_6->size);
  FUNC_1((VAR_7->flags & VAR_0) == 0);
  FUNC_0(VAR_4, &VAR_3, VAR_8);


  for (VAR_10=0; VAR_10 < VAR_1; VAR_10++) {
   if (VAR_2[VAR_10] == VAR_8)
    VAR_2[VAR_10] = ((void*)0);
  }
 }
 FUNC_4(&VAR_5);

 if (VAR_8)
  FUNC_2(VAR_8);

 return (VAR_9);
}
