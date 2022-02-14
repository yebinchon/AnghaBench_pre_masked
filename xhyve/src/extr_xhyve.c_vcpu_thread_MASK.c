
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mt_vmm_info {int mt_vcpu; } ;
struct TYPE_2__ {int rip; scalar_t__ inst_length; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void *
FUNC_8(void *VAR_2)
{
 struct mt_vmm_info *VAR_3;
 uint64_t VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = VAR_2;
 VAR_5 = VAR_3->mt_vcpu;
 VAR_4 = 0xfff0;

 VAR_6 = FUNC_6(VAR_5);
 FUNC_0(VAR_6 == 0);

 FUNC_5(VAR_5);

 VAR_6 = FUNC_7(VAR_5);
 FUNC_0(VAR_6 == 0);

 if (VAR_5 == VAR_0) {
        if (&FUNC_2 != ((void*)0)) {
            VAR_4 = FUNC_2();
        } else {
            VAR_4 = 0xFFF0;
        }
 } else {
  VAR_4 = VAR_1[VAR_5].rip;
  FUNC_3(VAR_5, &VAR_4);
 }

 VAR_1[VAR_5].rip = VAR_4;
 VAR_1[VAR_5].inst_length = 0;

 FUNC_4(VAR_5, VAR_1[VAR_5].rip);


 FUNC_1(1);
 return (((void*)0));
}
