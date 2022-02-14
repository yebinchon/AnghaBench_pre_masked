
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_pixel_pitch; int i_pitch; } ;
typedef TYPE_1__ plane_t ;
typedef int int32_t ;



__attribute__((used)) static inline int32_t FUNC_0(int32_t VAR_0, int32_t VAR_1, plane_t *VAR_2) {
    return VAR_0 * VAR_2->i_pixel_pitch + VAR_1 * VAR_2->i_pitch; }
