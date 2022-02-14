
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msb; scalar_t__ lsb; } ;
struct TYPE_5__ {int prevRefPictureIsBottomField; int prevRefPictureHasMMCO5; scalar_t__ prevFrameNumOffset; scalar_t__ prevFrameNum; TYPE_1__ prevPicOrderCnt; } ;
typedef TYPE_2__ h264_poc_context_t ;



__attribute__((used)) static inline void FUNC_0( h264_poc_context_t *VAR_0 )
{
    VAR_0->prevPicOrderCnt.lsb = 0;
    VAR_0->prevPicOrderCnt.msb = 0;
    VAR_0->prevFrameNum = 0;
    VAR_0->prevFrameNumOffset = 0;
    VAR_0->prevRefPictureIsBottomField = 0;
    VAR_0->prevRefPictureHasMMCO5 = 0;
}
