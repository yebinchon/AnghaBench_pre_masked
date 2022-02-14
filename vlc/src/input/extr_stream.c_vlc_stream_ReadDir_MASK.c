
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pf_readdir ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ stream_t ;
typedef int input_item_node_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

int FUNC_2( stream_t *VAR_0, input_item_node_t *VAR_1 )
{
    FUNC_0(VAR_0->pf_readdir != ((void*)0));
    return VAR_0->pf_readdir( VAR_0, VAR_1 );
}
