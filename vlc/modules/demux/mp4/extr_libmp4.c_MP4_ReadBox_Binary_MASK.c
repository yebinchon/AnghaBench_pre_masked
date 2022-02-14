
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_6__ {TYPE_1__* p_binary; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_5__ {scalar_t__ i_blob; scalar_t__ p_blob; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_5, MP4_Box_t *VAR_6 )
{
    FUNC_0( VAR_0, VAR_1 );
    VAR_3 = FUNC_2( VAR_3, VAR_2 );
    if ( VAR_3 > 0 )
    {
        VAR_6->data.p_binary->p_blob = FUNC_3( VAR_3 );
        if ( VAR_6->data.p_binary->p_blob )
        {
            FUNC_4( VAR_6->data.p_binary->p_blob, VAR_4, VAR_3 );
            VAR_6->data.p_binary->i_blob = VAR_3;
        }
    }
    FUNC_1( 1 );
}
