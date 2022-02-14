
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (int ,int,scalar_t__) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (int ,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;

void FUNC_5(int VAR_2, uint16_t VAR_3, uint16_t VAR_4, uint32_t VAR_5,
 uint32_t VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 if (VAR_2 != 0) {
  FUNC_4(VAR_1, "DSDT, unsupported PCI bus (%d)\n", VAR_2);
  FUNC_3(-1);
 }

 FUNC_0(VAR_0, 0xb6, VAR_3);
 FUNC_0(VAR_0, 0xb8, (VAR_4 - 1));
 FUNC_0(VAR_0, 0xbc, (VAR_4 - VAR_3));
 FUNC_1(VAR_0, 0xc8, VAR_5);
 FUNC_1(VAR_0, 0xcc, (VAR_6 - 1));
 FUNC_1(VAR_0, 0xd4, (VAR_6 - VAR_5));
 FUNC_2(VAR_0, 0xe6, VAR_7);
 FUNC_2(VAR_0, 0xee, (VAR_8 - 1));
 FUNC_2(VAR_0, 0xfe, (VAR_8 - VAR_7));
}
