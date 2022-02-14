
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gn_gbh; } ;
typedef TYPE_1__ zio_gang_node_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static zio_gang_node_t *
FUNC_3(zio_gang_node_t **VAR_2)
{
 zio_gang_node_t *VAR_3;

 FUNC_0(*VAR_2 == ((void*)0));

 VAR_3 = FUNC_1(sizeof (*VAR_3), VAR_0);
 VAR_3->gn_gbh = FUNC_2(VAR_1);
 *VAR_2 = VAR_3;

 return (VAR_3);
}
