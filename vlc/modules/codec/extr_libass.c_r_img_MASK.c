
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int rectangle_t ;
struct TYPE_3__ {scalar_t__ h; scalar_t__ dst_y; scalar_t__ w; scalar_t__ dst_x; } ;
typedef TYPE_1__ ASS_Image ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static rectangle_t FUNC_1( const ASS_Image *VAR_0 )
{
    return FUNC_0( VAR_0->dst_x, VAR_0->dst_y, VAR_0->dst_x+VAR_0->w, VAR_0->dst_y+VAR_0->h );
}
