
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct vie {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct mmio_rb_range {scalar_t__ mr_base; scalar_t__ mr_end; TYPE_1__ mr_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct mmio_rb_range** VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,scalar_t__,struct mmio_rb_range**) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__,struct vie*,struct vm_guest_paging*,int ,int ,TYPE_1__*) ;

int
FUNC_5(int VAR_8, uint64_t VAR_9, struct vie *VAR_10,
 struct vm_guest_paging *VAR_11)

{
 struct mmio_rb_range *VAR_12;
 int VAR_13, VAR_14;

 FUNC_2(&VAR_7);



 if (VAR_4[VAR_8] &&
     VAR_9 >= VAR_4[VAR_8]->mr_base &&
     VAR_9 <= VAR_4[VAR_8]->mr_end) {
  VAR_12 = VAR_4[VAR_8];
 } else
  VAR_12 = ((void*)0);

 if (VAR_12 == ((void*)0)) {
  if (FUNC_1(&VAR_6, VAR_9, &VAR_12) == 0) {

   VAR_4[VAR_8] = VAR_12;
  } else if (FUNC_1(&VAR_5, VAR_9, &VAR_12)) {
   FUNC_3(&VAR_7);
   return (VAR_0);
  }
 }

 FUNC_0(VAR_12 != ((void*)0));
 VAR_14 = (VAR_12->mr_param.flags & VAR_1);
 if (VAR_14)
  FUNC_3(&VAR_7);

 VAR_13 = FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11, VAR_2,
  VAR_3, &VAR_12->mr_param);

 if (!VAR_14)
  FUNC_3(&VAR_7);

 return (VAR_13);
}
