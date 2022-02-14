
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_12__ {int i_id; int i_ancillary_id; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int bs_t ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void FUNC_9( decoder_t *VAR_0, bs_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    int VAR_3;
    int VAR_4;
    int VAR_5;





    VAR_3 = FUNC_0( VAR_1, 8 );


    VAR_4 = FUNC_0( VAR_1, 16 );


    VAR_5 = FUNC_0( VAR_1, 16 );

    if( ( VAR_4 != VAR_2->i_id ) &&
        ( VAR_4 != VAR_2->i_ancillary_id ) )
    {




        FUNC_1( VAR_1, 8 * VAR_5 );
        return;
    }

    if( ( VAR_2->i_ancillary_id != VAR_2->i_id ) &&
        ( VAR_3 == 130 ) &&
        ( VAR_4 == VAR_2->i_ancillary_id ) )
    {



        FUNC_1( VAR_1, 8 * VAR_5 );
        return;
    }
    switch( VAR_3 )
    {
    case 130:



        FUNC_5( VAR_0, VAR_1, VAR_5 );
        break;

    case 129:



        FUNC_6( VAR_0, VAR_1, VAR_5 );
        break;

    case 134:



        FUNC_2( VAR_0, VAR_1, VAR_5 );
        break;

    case 131:



        FUNC_4( VAR_0, VAR_1, VAR_5 );
        break;

    case 133:



        FUNC_3( VAR_0, VAR_1, VAR_5 );
        break;

    case 132:



        FUNC_1( VAR_1, 8 * VAR_5 );
        break;

    case 128:



        FUNC_1( VAR_1, 8 * VAR_5 );
        break;

    default:
        FUNC_8( VAR_0, "unsupported segment type: (%04x)", VAR_3 );
        FUNC_1( VAR_1, 8 * VAR_5 );
        break;
    }
}
