
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_8__ {TYPE_2__* p_colr; } ;
struct TYPE_9__ {TYPE_3__ data; } ;
struct TYPE_6__ {int i_full_range; int i_matrix_idx; int i_transfer_function_idx; int i_primary_idx; } ;
struct TYPE_7__ {scalar_t__ i_type; TYPE_1__ nclc; } ;
typedef TYPE_4__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char,char,char,char) ;
 int FUNC_6 (int *,char*,char*) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    FUNC_3( VAR_0, ((void*)0) );
    FUNC_2( VAR_2->data.p_colr->i_type );
    if ( VAR_2->data.p_colr->i_type == FUNC_5( 'n', 'c', 'l', 'c' ) ||
         VAR_2->data.p_colr->i_type == FUNC_5( 'n', 'c', 'l', 'x' ) )
    {
        FUNC_1( VAR_2->data.p_colr->nclc.i_primary_idx );
        FUNC_1( VAR_2->data.p_colr->nclc.i_transfer_function_idx );
        FUNC_1( VAR_2->data.p_colr->nclc.i_matrix_idx );
        if ( VAR_2->data.p_colr->i_type == FUNC_5( 'n', 'c', 'l', 'x' ) )
            FUNC_0( VAR_2->data.p_colr->nclc.i_full_range );
    }
    else
    {



    }
    FUNC_4( 1 );
}
