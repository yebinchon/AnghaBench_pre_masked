
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int i_chunk_size; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
typedef TYPE_2__ avi_chunk_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static uint64_t FUNC_1( const avi_chunk_t *VAR_0 )
{
    return FUNC_0(VAR_0->common.i_chunk_size) + 8;
}
