
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 (struct vm*,int,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct vm *VAR_4, int VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = (uint32_t) FUNC_0(VAR_5, VAR_0);
 VAR_7 = (uint32_t) FUNC_0(VAR_5, VAR_1);
 VAR_8 = (uint32_t) FUNC_0(VAR_5, VAR_2);
 VAR_9 = (uint32_t) FUNC_0(VAR_5, VAR_3);

 VAR_10 = FUNC_2(VAR_4, VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9);

 FUNC_1(VAR_5, VAR_0, VAR_6);
 FUNC_1(VAR_5, VAR_1, VAR_7);
 FUNC_1(VAR_5, VAR_2, VAR_8);
 FUNC_1(VAR_5, VAR_3, VAR_9);

 return (VAR_10);
}
