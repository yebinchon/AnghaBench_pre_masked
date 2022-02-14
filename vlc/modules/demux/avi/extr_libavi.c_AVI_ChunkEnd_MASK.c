
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ i_chunk_pos; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
typedef TYPE_2__ avi_chunk_t ;


 scalar_t__ FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static uint64_t FUNC_1( const avi_chunk_t *VAR_0 )
{
    return VAR_0->common.i_chunk_pos + FUNC_0( VAR_0 );
}
