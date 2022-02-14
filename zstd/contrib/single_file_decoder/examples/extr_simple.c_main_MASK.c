
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,int,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3() {
 size_t VAR_5 = FUNC_0(VAR_2, sizeof VAR_2, VAR_4, sizeof VAR_4);
 int VAR_6 = FUNC_1(VAR_3, VAR_2, sizeof VAR_2);
 FUNC_2("Decompressed size: %s\n", (VAR_5 == sizeof VAR_2) ? "PASSED" : "FAILED");
 FUNC_2("Byte comparison: %s\n", (VAR_6 == 0) ? "PASSED" : "FAILED");
 if (VAR_5 == sizeof VAR_2 && VAR_6 == 0) {
  return VAR_1;
 }
 return VAR_0;
}
