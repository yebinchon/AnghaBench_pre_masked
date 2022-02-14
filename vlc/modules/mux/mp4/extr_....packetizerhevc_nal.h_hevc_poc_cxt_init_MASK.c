
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msb; scalar_t__ lsb; } ;
struct TYPE_5__ {int first_picture; TYPE_1__ prevTid0PicOrderCnt; } ;
typedef TYPE_2__ hevc_poc_ctx_t ;



__attribute__((used)) static inline void FUNC_0( hevc_poc_ctx_t *VAR_0 )
{
    VAR_0->prevTid0PicOrderCnt.lsb = 0;
    VAR_0->prevTid0PicOrderCnt.msb = 0;
    VAR_0->first_picture = 1;
}
