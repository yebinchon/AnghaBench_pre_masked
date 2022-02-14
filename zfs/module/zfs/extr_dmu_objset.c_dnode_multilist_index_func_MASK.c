
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int multilist_t ;
struct TYPE_2__ {int dn_object; int dn_objset; } ;
typedef TYPE_1__ dnode_t ;


 unsigned int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *) ;

unsigned int
FUNC_2(multilist_t *VAR_0, void *VAR_1)
{
 dnode_t *VAR_2 = VAR_1;
 return (FUNC_0(VAR_2->dn_objset, VAR_2->dn_object) %
     FUNC_1(VAR_0));
}
