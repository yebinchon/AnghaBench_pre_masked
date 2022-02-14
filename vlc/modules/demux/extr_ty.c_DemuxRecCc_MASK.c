
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rec_type; int * ex; } ;
typedef TYPE_1__ ty_rec_hdr_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {scalar_t__ i_data; } ;
struct TYPE_10__ {TYPE_4__ cc; } ;
typedef TYPE_3__ demux_sys_t ;
typedef int block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ,int *) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_1, ty_rec_hdr_t *VAR_2, block_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_1->p_sys;
    int VAR_5;

    if( VAR_3 )
        FUNC_2(VAR_3);

    if( VAR_2->rec_type == 0x01 )
        VAR_5 = 0;
    else if( VAR_2->rec_type == 0x02 )
        VAR_5 = 1;
    else
        return 0;


    if( VAR_5 == 1 )
        FUNC_1( VAR_1, VAR_2->ex[0], VAR_2->ex[1] );

    if( VAR_4->cc.i_data + 3 > VAR_0 )
        return 0;

    FUNC_3( &VAR_4->cc, FUNC_0(VAR_5), VAR_2->ex );
    return 0;
}
