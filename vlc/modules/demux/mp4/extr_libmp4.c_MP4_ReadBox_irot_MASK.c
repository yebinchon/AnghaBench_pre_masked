
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_irot; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {int i_ccw_degrees; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    FUNC_1( VAR_0, ((void*)0) );
    FUNC_0( VAR_2->data.p_irot->i_ccw_degrees );
    VAR_2->data.p_irot->i_ccw_degrees &= 0x03;
    VAR_2->data.p_irot->i_ccw_degrees *= 90;
    FUNC_2( 1 );
}
