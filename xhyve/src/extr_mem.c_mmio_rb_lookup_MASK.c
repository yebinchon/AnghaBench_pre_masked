
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mmio_rb_tree {int dummy; } ;
struct mmio_rb_range {int mr_end; int mr_base; } ;


 int VAR_0 ;
 struct mmio_rb_range* FUNC_0 (int ,struct mmio_rb_tree*,struct mmio_rb_range*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct mmio_rb_tree *VAR_2, uint64_t VAR_3,
    struct mmio_rb_range **VAR_4)
{
 struct mmio_rb_range VAR_5, *VAR_6;

 VAR_5.mr_base = VAR_5.mr_end = VAR_3;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5);

 if (VAR_6 != ((void*)0)) {
  *VAR_4 = VAR_6;
  return (0);
 }

 return (VAR_0);
}
