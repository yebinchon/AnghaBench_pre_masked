
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int * dac_palette_rgb; } ;
struct TYPE_7__ {int* atc_palette; } ;
struct TYPE_6__ {scalar_t__ seq_cm_dots; int seq_mm; scalar_t__ seq_cmap_pri_off; scalar_t__ seq_cmap_sec_off; } ;
struct TYPE_5__ {int crtc_start_addr; int crtc_cursor_loc; int crtc_cursor_start; int crtc_cursor_end; scalar_t__ crtc_cursor_on; } ;
struct vga_softc {int gc_width; int* vga_ram; TYPE_4__ vga_dac; TYPE_3__ vga_atc; TYPE_2__ vga_seq; TYPE_1__ vga_crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vga_softc *VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
 int VAR_7;
    unsigned int VAR_8, VAR_9, VAR_10;
 uint8_t VAR_11, VAR_12, VAR_13;
 uint8_t VAR_14;

    FUNC_0(VAR_4->vga_seq.seq_cm_dots >= 0);
 VAR_8 = (unsigned int)VAR_4->vga_seq.seq_cm_dots;

 VAR_9 = 2 * VAR_4->vga_crtc.crtc_start_addr;
 VAR_9 += (VAR_6 / 16 * VAR_4->gc_width / VAR_8) * 2 + (VAR_5 / VAR_8) * 2;

 VAR_7 = 7 - (VAR_5 % VAR_8 > 7 ? 7 : VAR_5 % VAR_8);

 VAR_11 = VAR_4->vga_ram[VAR_9 + 0 * 64*VAR_2];
 VAR_12 = VAR_4->vga_ram[VAR_9 + 1 * 64*VAR_2];

 if (VAR_4->vga_crtc.crtc_cursor_on &&
     (VAR_9 == (VAR_4->vga_crtc.crtc_cursor_loc * 2)) &&
     ((VAR_6 % 16) >= (VAR_4->vga_crtc.crtc_cursor_start & VAR_1)) &&
     ((VAR_6 % 16) <= (VAR_4->vga_crtc.crtc_cursor_end & VAR_0))) {
  VAR_14 = VAR_4->vga_atc.atc_palette[VAR_12 & 0xf];
  return (VAR_4->vga_dac.dac_palette_rgb[VAR_14]);
 }

 if ((VAR_4->vga_seq.seq_mm & VAR_3) &&
     VAR_4->vga_seq.seq_cmap_pri_off != VAR_4->vga_seq.seq_cmap_sec_off) {
  if (VAR_12 & 0x8)
   VAR_10 = (unsigned int)VAR_4->vga_seq.seq_cmap_pri_off +
    (unsigned int)(VAR_11 << 5) + VAR_6 % 16;
  else
   VAR_10 = (unsigned int)VAR_4->vga_seq.seq_cmap_sec_off +
    (unsigned int)(VAR_11 << 5) + VAR_6 % 16;
  VAR_12 &= ~0x8;
 } else {
  VAR_10 = (unsigned int)(VAR_11 << 5) + VAR_6 % 16;
 }

 VAR_13 = VAR_4->vga_ram[VAR_10 + 2 * 64*VAR_2];

 if (VAR_13 & (1 << VAR_7))
  VAR_14 = VAR_4->vga_atc.atc_palette[VAR_12 & 0xf];
 else
  VAR_14 = VAR_4->vga_atc.atc_palette[VAR_12 >> 4];

 return (VAR_4->vga_dac.dac_palette_rgb[VAR_14]);
}
