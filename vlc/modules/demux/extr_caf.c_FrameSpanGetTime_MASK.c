
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint32_t ;
struct TYPE_3__ {int i_samples; } ;
typedef TYPE_1__ frame_span_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline vlc_tick_t FUNC_1( frame_span_t *VAR_2, uint32_t VAR_3 )
{
    if( !VAR_3 )
        return VAR_1;

    return FUNC_0( VAR_2->i_samples, VAR_3) + VAR_0;
}
