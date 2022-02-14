
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf_server {scalar_t__ valid; int addrstr; int name; int pname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct conf_server*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct conf_server *VAR_1)
{
    FUNC_1(&VAR_1->pname);
    FUNC_1(&VAR_1->name);
    FUNC_1(&VAR_1->addrstr);
    VAR_1->valid = 0;
    FUNC_0(VAR_0, "deinit conf server %p", VAR_1);
}
