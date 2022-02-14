
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int identifier; int source; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_extractor_t ;
struct TYPE_8__ {int b_dead; int b_eof; scalar_t__ i_offset; } ;
typedef TYPE_2__ private_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4( stream_extractor_t* VAR_2 )
{
    private_sys_t* VAR_3 = VAR_2->p_sys;

    if( FUNC_3( VAR_2->source, 0 )
        || FUNC_0( VAR_3 )
        || FUNC_1( VAR_3, VAR_2->source )
        || FUNC_2( VAR_3, VAR_2->identifier ) )
    {
        VAR_3->b_dead = 1;
        return VAR_0;
    }

    VAR_3->i_offset = 0;
    VAR_3->b_eof = 0;
    VAR_3->b_dead = 0;
    return VAR_1;
}
