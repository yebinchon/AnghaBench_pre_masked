
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_tsel; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {scalar_t__ i_switch_group; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    FUNC_1( VAR_0, ((void*)0) );
    uint32_t VAR_4;
    FUNC_0( VAR_4 );
    if ( VAR_4 != 0 || VAR_1 < 4 )
        FUNC_2( 0 );
    FUNC_0( VAR_3->data.p_tsel->i_switch_group );

    FUNC_2( 1 );
}
