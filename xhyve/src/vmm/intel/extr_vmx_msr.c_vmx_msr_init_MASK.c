
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int*,size_t*,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void) {
 uint64_t VAR_3, VAR_4, VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_6 = sizeof(uint64_t);

 if (FUNC_0("machdep.tsc.frequency", &VAR_4, &VAR_6, ((void*)0), 0)) {
   FUNC_1("machdep.tsc.frequency\n");
 }

 if (FUNC_0("hw.busfrequency", &VAR_3, &VAR_6, ((void*)0), 0)) {
   FUNC_1("hw.busfrequency\n");
 }



 VAR_0 = 1;
 VAR_0 |= (1u << 12) | (1u << 11);
 VAR_0 &= ~((1u << 18) | (1u << 16));






 VAR_5 = (VAR_4 / VAR_3) & 0xff;
 VAR_1 = (VAR_5 << 8) | (VAR_5 << 40);
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
   VAR_2 = (VAR_2 << 8) | VAR_5;
 }
}
