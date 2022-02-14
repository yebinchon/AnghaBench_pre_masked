
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_3__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_4__ {int p_cea708; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (int ,int ,int const*,size_t) ;

__attribute__((used)) static void FUNC_1( void *VAR_0, uint8_t VAR_1, vlc_tick_t VAR_2,
                                       const uint8_t *VAR_3, size_t VAR_4 )
{
    decoder_t *VAR_5 = VAR_0;
    decoder_sys_t *VAR_6 = VAR_5->p_sys;

    if( VAR_1 == 1 )
        FUNC_0( VAR_6->p_cea708, VAR_2, VAR_3, VAR_4 );
}
