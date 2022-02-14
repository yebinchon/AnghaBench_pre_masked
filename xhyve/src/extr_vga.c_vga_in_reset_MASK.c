
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int crtc_mode_ctrl; } ;
struct TYPE_3__ {int seq_clock_mode; int seq_reset; } ;
struct vga_softc {TYPE_2__ vga_crtc; TYPE_1__ vga_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_0(struct vga_softc *VAR_4)
{
 return (((VAR_4->vga_seq.seq_clock_mode & VAR_1) != 0) ||
     ((VAR_4->vga_seq.seq_reset & VAR_2) == 0) ||
     ((VAR_4->vga_seq.seq_reset & VAR_3) == 0) ||
     ((VAR_4->vga_crtc.crtc_mode_ctrl & VAR_0) == 0));
}
