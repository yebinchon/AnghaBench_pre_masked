
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conf_server {scalar_t__ valid; int info; scalar_t__ weight; scalar_t__ port; int addrstr; int name; int pname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct conf_server*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct conf_server *VAR_1)
{
    FUNC_2(&VAR_1->pname);
    FUNC_2(&VAR_1->name);
    FUNC_2(&VAR_1->addrstr);
    VAR_1->port = 0;
    VAR_1->weight = 0;

    FUNC_1(&VAR_1->info, 0, sizeof(VAR_1->info));

    VAR_1->valid = 0;

    FUNC_0(VAR_0, "init conf server %p", VAR_1);
}
