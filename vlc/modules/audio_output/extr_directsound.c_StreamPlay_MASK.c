
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int block_t ;
struct TYPE_4__ {int sys; } ;
typedef TYPE_1__ aout_stream_t ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_2( aout_stream_t *VAR_0, block_t *VAR_1, vlc_tick_t VAR_2 )
{
    (void) VAR_2;
    return FUNC_0( FUNC_1(VAR_0), VAR_0->sys, VAR_1 );
}
