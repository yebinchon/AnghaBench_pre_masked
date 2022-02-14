
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_id; scalar_t__ p_meta; } ;
typedef TYPE_1__ es_out_pgrm_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,int ,int ,...) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_3( es_out_pgrm_t *VAR_1 )
{
    char *VAR_2 = ((void*)0);
    if( VAR_1->p_meta && FUNC_2( VAR_1->p_meta, VAR_0 ) )
    {
        if( FUNC_1( &VAR_2, FUNC_0("%s [%s %d]"), FUNC_2( VAR_1->p_meta, VAR_0 ),
                      FUNC_0("Program"), VAR_1->i_id ) == -1 )
            return ((void*)0);
    }
    else
    {
        if( FUNC_1( &VAR_2, "%d %d", FUNC_0("Program"), VAR_1->i_id ) == -1 )
            return ((void*)0);
    }
    return VAR_2;
}
