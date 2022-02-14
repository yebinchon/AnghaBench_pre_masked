
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int stream; int system; } ;
struct TYPE_5__ {int rate; TYPE_1__ ref; int b_has_reference; } ;
typedef TYPE_2__ input_clock_t ;


 int VAR_0 ;

__attribute__((used)) static vlc_tick_t FUNC_0( input_clock_t *VAR_1, vlc_tick_t VAR_2 )
{
    if( !VAR_1->b_has_reference )
        return VAR_0;

    return (vlc_tick_t) (( VAR_2 - VAR_1->ref.stream ) / VAR_1->rate) + VAR_1->ref.system;
}
