
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_4__ {size_t i_bytes_per_frame; size_t i_frame_length; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ aout_sys_t ;



__attribute__((used)) static inline size_t
FUNC_0( aout_sys_t *VAR_0, uint64_t VAR_1 )
{
    return VAR_1 * VAR_0->fmt.i_bytes_per_frame / VAR_0->fmt.i_frame_length;
}
