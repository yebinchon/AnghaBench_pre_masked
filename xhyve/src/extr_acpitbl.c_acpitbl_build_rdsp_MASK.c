
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,int,int ) ;
 int FUNC_3 (void*,int,int ) ;
 int FUNC_4 (void*,int const*,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(void) {
 void *VAR_4;
 static const uint8_t VAR_5[36] = {
  0x52, 0x53, 0x44, 0x20, 0x50, 0x54, 0x52, 0x20,
  0x00, 0x42, 0x48, 0x59, 0x56, 0x45, 0x20, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
 };

 VAR_4 = (void *) (((uintptr_t) VAR_3) + 0);

 FUNC_4(VAR_4, VAR_5, 36);

 FUNC_1(VAR_4, 0x10, ((uint32_t) (VAR_1 + VAR_0)));
 FUNC_2(VAR_4, 0x18, ((uint64_t) (VAR_1 + VAR_2)));

 FUNC_3(VAR_4, 0x8, FUNC_0(VAR_4, 20));

 FUNC_3(VAR_4, 0x20, FUNC_0(VAR_4, 36));
}
