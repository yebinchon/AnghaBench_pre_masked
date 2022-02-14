
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {unsigned int i_channels; } ;
struct TYPE_7__ {TYPE_2__ audio; } ;
struct TYPE_9__ {TYPE_1__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ encoder_t ;
struct TYPE_10__ {unsigned int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_4__ encoder_sys_t ;


 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int *,unsigned int) ;
 int FUNC_2 (TYPE_3__*,char*) ;

__attribute__((used)) static void FUNC_3( encoder_t *VAR_0, int16_t *VAR_1, int VAR_2 )
{
    encoder_sys_t *VAR_3 = VAR_0->p_sys;
    const unsigned VAR_4 = VAR_3->i_nb_samples * VAR_0->fmt_in.audio.i_channels;
    const unsigned VAR_5 = FUNC_0(VAR_3->p_buffer);

    if( VAR_4 >= VAR_5 )
    {
        FUNC_2( VAR_0, "buffer full" );
        return;
    }

    unsigned VAR_6 = VAR_2 * VAR_0->fmt_in.audio.i_channels;
    if( VAR_6 + VAR_4 > VAR_5)
    {
        FUNC_2( VAR_0, "dropping samples" );
        VAR_6 = VAR_5 - VAR_4;
    }

    FUNC_1( VAR_3->p_buffer + VAR_4, VAR_1, VAR_6 * sizeof(int16_t) );
}
