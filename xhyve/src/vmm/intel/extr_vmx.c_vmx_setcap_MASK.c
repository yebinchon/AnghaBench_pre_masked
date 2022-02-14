
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct vmx {TYPE_1__* cap; } ;
struct TYPE_2__ {int set; scalar_t__ proc_ctls; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(void *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct vmx *VAR_12 = VAR_8;
 uint32_t VAR_13;
 uint32_t *VAR_14;
 uint32_t VAR_15;
 uint32_t VAR_16;
 int VAR_17;

 VAR_17 = VAR_0;
 VAR_14 = ((void*)0);
 VAR_13 = 0;
 VAR_15 = 0;
 VAR_16 = 0;

 switch (VAR_10) {
 case 130:
  if (VAR_5) {
   VAR_17 = 0;
   VAR_14 = &VAR_12->cap[VAR_9].proc_ctls;
   VAR_13 = *VAR_14;
   VAR_16 = VAR_1;
   VAR_15 = VAR_4;
  }
  break;
 case 129:
  if (VAR_6) {
   VAR_17 = 0;
   VAR_14 = &VAR_12->cap[VAR_9].proc_ctls;
   VAR_13 = *VAR_14;
   VAR_16 = VAR_2;
   VAR_15 = VAR_4;
  }
  break;
 case 128:
  if (VAR_7) {
   VAR_17 = 0;
   VAR_14 = &VAR_12->cap[VAR_9].proc_ctls;
   VAR_13 = *VAR_14;
   VAR_16 = VAR_3;
   VAR_15 = VAR_4;
  }
  break;
 default:
  FUNC_1("vmx_setcap\n");
 }

 if (VAR_17 == 0) {
  if (VAR_11) {
   VAR_13 |= VAR_16;
  } else {
   VAR_13 &= ~VAR_16;
  }

  FUNC_0(VAR_9, VAR_15, VAR_13);





  if (VAR_14 != ((void*)0)) {
   *VAR_14 = VAR_13;
  }

  if (VAR_11) {
   VAR_12->cap[VAR_9].set |= (1 << VAR_10);
  } else {
   VAR_12->cap[VAR_9].set &= ~(1 << VAR_10);
  }

 }

 return (VAR_17);
}
