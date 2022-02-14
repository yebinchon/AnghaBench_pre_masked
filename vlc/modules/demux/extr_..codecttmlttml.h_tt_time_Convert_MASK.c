
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_4__ {int frames; scalar_t__ base; } ;
typedef TYPE_1__ tt_time_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline vlc_tick_t FUNC_2( const tt_time_t *VAR_2 )
{
    if( !FUNC_0( VAR_2 ) )
        return VAR_1;
    else
        return VAR_2->base + FUNC_1( VAR_2->frames, VAR_0);
}
