
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_desc_bytes; scalar_t__ i_bytes; scalar_t__ i_samples; scalar_t__ i_frames; } ;
typedef TYPE_1__ frame_span_t ;



__attribute__((used)) static inline void FUNC_0( frame_span_t *VAR_0, frame_span_t *VAR_1 )
{
    VAR_0->i_frames += VAR_1->i_frames;
    VAR_0->i_samples += VAR_1->i_samples;
    VAR_0->i_bytes += VAR_1->i_bytes;
    VAR_0->i_desc_bytes += VAR_1->i_desc_bytes;
}
