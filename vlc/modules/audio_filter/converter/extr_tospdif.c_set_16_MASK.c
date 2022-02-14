
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ i_format; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;
struct TYPE_7__ {TYPE_2__ fmt_out; } ;
typedef TYPE_3__ filter_t ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2( filter_t *VAR_1, void *VAR_2, uint16_t VAR_3 )
{
    if( VAR_1->fmt_out.audio.i_format == VAR_0 )
        FUNC_0( VAR_2, VAR_3 );
    else
        FUNC_1( VAR_2, VAR_3 );
}
