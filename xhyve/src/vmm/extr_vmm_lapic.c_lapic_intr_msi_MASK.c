
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vm*,char*,int) ;
 int FUNC_1 (struct vm*,char*,int,int) ;
 int FUNC_2 (struct vm*,char*,char*,int,int) ;
 int FUNC_3 (struct vm*,int ,int,int,int,int) ;

int
FUNC_4(struct vm *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 int VAR_9, VAR_10;
 uint32_t VAR_11;
 bool VAR_12;

 FUNC_1(VAR_6, "lapic MSI addr: %#llx msg: %#llx", VAR_7, VAR_8);

 if ((VAR_7 & VAR_4) != VAR_2) {
  FUNC_0(VAR_6, "lapic MSI invalid addr %#llx", VAR_7);
  return (-1);
 }
 VAR_11 = (VAR_7 >> 12) & 0xff;
 VAR_12 = ((VAR_7 & (VAR_5 | VAR_3)) !=
     (VAR_5 | VAR_3));
 VAR_9 = VAR_8 & VAR_0;
 VAR_10 = VAR_8 & 0xff;

 FUNC_2(VAR_6, "lapic MSI %s dest %#x, vec %d",
     VAR_12 ? "physical" : "logical", VAR_11, VAR_10);

 FUNC_3(VAR_6, VAR_1, VAR_11, VAR_12, VAR_9, VAR_10);
 return (0);
}
