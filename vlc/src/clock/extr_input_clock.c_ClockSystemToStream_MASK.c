
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int system; int stream; } ;
struct TYPE_5__ {int rate; TYPE_1__ ref; int b_has_reference; } ;
typedef TYPE_2__ input_clock_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static vlc_tick_t FUNC_1( input_clock_t *VAR_0, vlc_tick_t VAR_1 )
{
    FUNC_0( VAR_0->b_has_reference );
    return (vlc_tick_t) (( VAR_1 - VAR_0->ref.system ) * VAR_0->rate) + VAR_0->ref.stream;
}
