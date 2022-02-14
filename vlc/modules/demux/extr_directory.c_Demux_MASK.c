
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_item_node_t ;
struct TYPE_4__ {int out; int s; int p_input_item; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3 )
{
    input_item_node_t *VAR_4 = FUNC_1( VAR_3->p_input_item );

    if( FUNC_4( VAR_3->s, VAR_4 ) )
    {
        FUNC_3( VAR_3, "unable to read directory" );
        FUNC_2( VAR_4 );
        return VAR_1;
    }

    if (FUNC_0(VAR_3->out, VAR_0, VAR_4))
        FUNC_2(VAR_4);

    return VAR_2;
}
