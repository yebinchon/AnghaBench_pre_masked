
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_meta_id; } ;
typedef TYPE_1__ es_out_id_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,int ,int ) ;

__attribute__((used)) static char *FUNC_2( es_out_id_t* VAR_0 )
{
    char *VAR_1;

    if( FUNC_1( &VAR_1, FUNC_0("Stream %d"), VAR_0->i_meta_id ) == -1 )
        return ((void*)0);

    return VAR_1;
}
