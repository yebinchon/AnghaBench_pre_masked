
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg_desc {int access; int limit; int base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, int VAR_1, struct seg_desc *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2->base, VAR_2->limit, VAR_2->access);
 FUNC_0(VAR_3 == 0);
}
