
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int th_ycbcr_buffer ;
struct TYPE_13__ {int b_progressive; int date; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_14__ {int* packet; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_16__ {int b_decoded_first_keyframe; int i_pts; int tcx; } ;
typedef TYPE_4__ decoder_sys_t ;


 TYPE_1__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static picture_t *FUNC_5( decoder_t *VAR_0, ogg_packet *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    picture_t *VAR_3;
    th_ycbcr_buffer VAR_4;





    if (FUNC_2( VAR_2->tcx, VAR_1, ((void*)0) ) < 0)
        return ((void*)0);


    if( !(VAR_1->packet[0] & 0x80) &&
        !(VAR_1->packet[0] & 0x40) )
        VAR_2->b_decoded_first_keyframe = 1;






    if( !VAR_2->b_decoded_first_keyframe )
        return ((void*)0);

    if( FUNC_3( VAR_2->tcx, VAR_4 ) )
        return ((void*)0);


    if( FUNC_1( VAR_0 ) )
        return ((void*)0);
    VAR_3 = FUNC_0( VAR_0 );
    if( !VAR_3 ) return ((void*)0);

    FUNC_4( VAR_3, VAR_4 );

    VAR_3->date = VAR_2->i_pts;
    VAR_3->b_progressive = 1;

    return VAR_3;
}
