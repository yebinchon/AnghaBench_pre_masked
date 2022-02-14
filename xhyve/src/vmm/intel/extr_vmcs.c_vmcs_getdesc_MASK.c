
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct seg_desc {scalar_t__ access; scalar_t__ limit; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (char*,int) ;

int
FUNC_3(int VAR_1, int VAR_2, struct seg_desc *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_2, &VAR_5, &VAR_6, &VAR_7);
 if (VAR_4 != 0)
  FUNC_2("vmcs_setdesc: invalid segment register %d\n", VAR_2);

 VAR_3->base = FUNC_0(VAR_1, VAR_5);
 VAR_3->limit = (uint32_t) FUNC_0(VAR_1, VAR_6);
 if (VAR_7 != VAR_0) {
  VAR_3->access = (uint32_t) FUNC_0(VAR_1, VAR_7);
 }

 return (0);
}
