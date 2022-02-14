
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_6__ {int crtc_horiz_disp_end; int crtc_vert_disp_end; int crtc_overflow; } ;
struct TYPE_5__ {int seq_cm_dots; } ;
struct vga_softc {int gc_width; int gc_height; TYPE_3__ vga_crtc; TYPE_2__ vga_seq; TYPE_1__* gc_image; } ;
struct bhyvegc {int dummy; } ;
struct TYPE_4__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhyvegc*,int,int) ;
 scalar_t__ FUNC_1 (struct vga_softc*) ;

__attribute__((used)) static void
FUNC_2(struct bhyvegc *VAR_4, struct vga_softc *VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_1(VAR_5))
  return;



 VAR_6 = VAR_5->gc_image->width;
 VAR_7 = VAR_5->gc_image->height;







 VAR_5->gc_width = (uint16_t)((VAR_5->vga_crtc.crtc_horiz_disp_end + 1) *
     VAR_5->vga_seq.seq_cm_dots);

 VAR_5->gc_height = (uint16_t)((VAR_5->vga_crtc.crtc_vert_disp_end |
     (((VAR_5->vga_crtc.crtc_overflow & VAR_0) >> VAR_1) << 8) |
     (((VAR_5->vga_crtc.crtc_overflow & VAR_2) >> VAR_3) << 9)) + 1);

 if (VAR_6 != VAR_5->gc_width || VAR_7 != VAR_5->gc_height)
  FUNC_0(VAR_4, VAR_5->gc_width, VAR_5->gc_height);
}
