
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_12__ {void* vertical; void* horizontal; } ;
struct TYPE_11__ {unsigned int num; unsigned int den; } ;
struct TYPE_9__ {unsigned int num; unsigned int den; } ;
struct TYPE_10__ {int width; int height; TYPE_1__ sar; } ;
struct TYPE_13__ {TYPE_4__ align; TYPE_3__ zoom; TYPE_2__ display; int is_display_filled; int viewpoint; } ;
typedef TYPE_5__ vout_display_cfg_t ;
struct TYPE_14__ {int pose; } ;
typedef TYPE_6__ video_format_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,unsigned int*,unsigned int*,char*) ;
 int FUNC_4 (unsigned int*,unsigned int*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static void FUNC_5(vout_thread_t *VAR_9, const video_format_t *VAR_10, vout_display_cfg_t *VAR_11)
{

    VAR_11->viewpoint = VAR_10->pose;

    const int VAR_12 = FUNC_2(VAR_9, "width");
    const int VAR_13 = FUNC_2(VAR_9, "height");
    VAR_11->display.width = VAR_12 > 0 ? VAR_12 : 0;
    VAR_11->display.height = VAR_13 > 0 ? VAR_13 : 0;
    VAR_11->is_display_filled = FUNC_0(VAR_9, "autoscale");
    unsigned VAR_14, VAR_15;
    if (FUNC_3(VAR_9, &VAR_14, &VAR_15, "monitor-par") ||
        VAR_14 <= 0 || VAR_15 <= 0) {
        VAR_14 = 1;
        VAR_15 = 1;
    }
    VAR_11->display.sar.num = VAR_14;
    VAR_11->display.sar.den = VAR_15;
    unsigned VAR_16 = 1000;
    unsigned VAR_17 = VAR_16 * FUNC_1(VAR_9, "zoom");
    FUNC_4(&VAR_17, &VAR_16, VAR_17, VAR_16, 0);
    VAR_11->zoom.num = VAR_17;
    VAR_11->zoom.den = VAR_16;
    VAR_11->align.vertical = VAR_1;
    VAR_11->align.horizontal = VAR_1;
    const int VAR_18 = FUNC_2(VAR_9, "align");
    if (VAR_18 & VAR_6)
        VAR_11->align.horizontal = VAR_2;
    else if (VAR_18 & VAR_7)
        VAR_11->align.horizontal = VAR_3;
    if (VAR_18 & VAR_8)
        VAR_11->align.vertical = VAR_4;
    else if (VAR_18 & VAR_5)
        VAR_11->align.vertical = VAR_0;
}
