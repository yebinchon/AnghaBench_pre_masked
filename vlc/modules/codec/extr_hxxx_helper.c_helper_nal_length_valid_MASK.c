
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hxxx_helper {int i_nal_length_size; } ;



__attribute__((used)) static inline bool
FUNC_0(struct hxxx_helper *VAR_0)
{
    return VAR_0->i_nal_length_size == 1 || VAR_0->i_nal_length_size == 2
        || VAR_0->i_nal_length_size == 4;
}
