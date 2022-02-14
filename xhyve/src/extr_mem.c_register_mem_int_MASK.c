
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmio_rb_tree {int dummy; } ;
struct mem_range {scalar_t__ base; scalar_t__ size; } ;
struct mmio_rb_range {scalar_t__ mr_end; scalar_t__ mr_base; struct mem_range mr_param; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmio_rb_range*) ;
 struct mmio_rb_range* FUNC_1 (int) ;
 int FUNC_2 (struct mmio_rb_tree*,struct mmio_rb_range*) ;
 scalar_t__ FUNC_3 (struct mmio_rb_tree*,scalar_t__,struct mmio_rb_range**) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct mmio_rb_tree *VAR_2, struct mem_range *VAR_3)
{
 struct mmio_rb_range *VAR_4, *VAR_5;
 int VAR_6;

 VAR_6 = 0;

 VAR_5 = FUNC_1(sizeof(struct mmio_rb_range));

 if (VAR_5 != ((void*)0)) {
  VAR_5->mr_param = *VAR_3;
  VAR_5->mr_base = VAR_3->base;
  VAR_5->mr_end = VAR_3->base + VAR_3->size - 1;
  FUNC_5(&VAR_1);
  if (FUNC_3(VAR_2, VAR_3->base, &VAR_4) != 0)
   VAR_6 = FUNC_2(VAR_2, VAR_5);
  FUNC_4(&VAR_1);
  if (VAR_6)
   FUNC_0(VAR_5);
 } else
  VAR_6 = VAR_0;

 return (VAR_6);
}
