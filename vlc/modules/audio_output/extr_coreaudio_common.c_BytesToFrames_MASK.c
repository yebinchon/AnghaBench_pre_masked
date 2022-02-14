
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct aout_sys_common {size_t i_frame_length; size_t i_bytes_per_frame; } ;



__attribute__((used)) static inline uint64_t
FUNC_0(struct aout_sys_common *VAR_0, size_t VAR_1)
{
    return VAR_1 * VAR_0->i_frame_length / VAR_0->i_bytes_per_frame;
}
