
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * (* pf_push ) (TYPE_1__*,int ,int *) ;} ;
typedef TYPE_1__ ts_stream_processor_t ;
typedef int block_t ;


 int * FUNC_0 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static inline block_t * FUNC_1( ts_stream_processor_t *VAR_0, uint8_t VAR_1, block_t *VAR_2 )
{
    return (VAR_0) ? VAR_0->pf_push( VAR_0, VAR_1, VAR_2 ) : VAR_2;
}
