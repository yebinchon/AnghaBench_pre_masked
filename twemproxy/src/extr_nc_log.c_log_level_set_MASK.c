
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 struct logger VAR_2 ;

void
FUNC_3(int VAR_3)
{
    struct logger *VAR_4 = &VAR_2;

    VAR_4->level = FUNC_0(VAR_0, FUNC_1(VAR_3, VAR_1));
    FUNC_2("set log level to %d", VAR_4->level);
}
