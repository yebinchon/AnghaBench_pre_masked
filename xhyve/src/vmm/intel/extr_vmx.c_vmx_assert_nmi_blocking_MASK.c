
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = (uint32_t) FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_3 & VAR_1,
     ("NMI blocking is not in effect %#x", VAR_3));
}
