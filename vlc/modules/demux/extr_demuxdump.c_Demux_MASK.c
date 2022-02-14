
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sout_access_out_t ;
struct TYPE_8__ {int s; scalar_t__ p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {int i_buffer; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 size_t FUNC_3 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_1 )
{
    sout_access_out_t *VAR_2 = (void *)VAR_1->p_sys;

    block_t *VAR_3 = FUNC_0( VAR_0 );
    if( FUNC_4(VAR_3 == ((void*)0)) )
        return -1;

    int VAR_4 = FUNC_5( VAR_1->s, VAR_3->p_buffer, VAR_0 );
    if ( VAR_4 <= 0 )
    {
        FUNC_1( VAR_3 );
        return VAR_4;
    }
    VAR_3->i_buffer = VAR_4;

    size_t VAR_5 = FUNC_3( VAR_2, VAR_3 );
    if( VAR_5 != (size_t)VAR_4 )
    {
        FUNC_2( VAR_1, "cannot write data" );
        return -1;
    }
    return 1;
}
