
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_4__ {int seq_map_mask; } ;
struct TYPE_3__ {int gc_misc_mm; int gc_set_reset; int gc_enb_set_reset; int gc_latch0; int gc_latch1; int gc_latch2; int gc_latch3; int gc_mode_wm; int gc_bit_mask; int gc_rotate; scalar_t__ gc_mode_oe; int gc_op; } ;
struct vga_softc {int* vga_ram; TYPE_2__ vga_seq; TYPE_1__ vga_gc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(uint64_t VAR_1, uint8_t VAR_2, void *VAR_3)
{
 struct vga_softc *VAR_4 = VAR_3;
 uint8_t VAR_5, VAR_6, VAR_7, VAR_8;
 uint8_t VAR_9, VAR_10, VAR_11, VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;
 uint64_t VAR_16;

 VAR_16 = VAR_1;
 switch (VAR_4->vga_gc.gc_misc_mm) {
 case 0x0:



  VAR_16 -=0xa0000;
  VAR_16 &= (128 * VAR_0 - 1);
  break;
 case 0x1:



  VAR_16 -=0xa0000;
  VAR_16 &= (64 * VAR_0 - 1);
  break;
 case 0x2:



  FUNC_0(0);
 case 0x3:



  VAR_16 -=0xb8000;
  VAR_16 &= (32 * VAR_0 - 1);
  break;
 }

 VAR_13 = VAR_4->vga_gc.gc_set_reset;
 VAR_14 = VAR_4->vga_gc.gc_enb_set_reset;

 VAR_5 = VAR_4->vga_gc.gc_latch0;
 VAR_6 = VAR_4->vga_gc.gc_latch1;
 VAR_7 = VAR_4->vga_gc.gc_latch2;
 VAR_8 = VAR_4->vga_gc.gc_latch3;

 switch (VAR_4->vga_gc.gc_mode_wm) {
 case 0:

  VAR_15 = VAR_4->vga_gc.gc_bit_mask;

  VAR_2 = (uint8_t)(VAR_2 >> VAR_4->vga_gc.gc_rotate) |
      (uint8_t)(VAR_2 << (8 - VAR_4->vga_gc.gc_rotate));

  switch (VAR_4->vga_gc.gc_op) {
  case 0x00:
   VAR_9 = (VAR_13 & 1) ? VAR_15 : 0x00;
   VAR_10 = (VAR_13 & 2) ? VAR_15 : 0x00;
   VAR_11 = (VAR_13 & 4) ? VAR_15 : 0x00;
   VAR_12 = (VAR_13 & 8) ? VAR_15 : 0x00;

   VAR_5 = (VAR_14 & 1) ? (VAR_5 & ~VAR_15) : (VAR_2 & VAR_15);
   VAR_6 = (VAR_14 & 2) ? (VAR_6 & ~VAR_15) : (VAR_2 & VAR_15);
   VAR_7 = (VAR_14 & 4) ? (VAR_7 & ~VAR_15) : (VAR_2 & VAR_15);
   VAR_8 = (VAR_14 & 8) ? (VAR_8 & ~VAR_15) : (VAR_2 & VAR_15);

   VAR_5 |= VAR_9;
   VAR_6 |= VAR_10;
   VAR_7 |= VAR_11;
   VAR_8 |= VAR_12;
   break;
  case 0x08:
   VAR_9 = VAR_13 & 1 ? 0xff : ~VAR_15;
   VAR_10 = VAR_13 & 2 ? 0xff : ~VAR_15;
   VAR_11 = VAR_13 & 4 ? 0xff : ~VAR_15;
   VAR_12 = VAR_13 & 8 ? 0xff : ~VAR_15;

   VAR_5 = VAR_14 & 1 ? VAR_5 & VAR_9 : VAR_2 & VAR_9;
   VAR_6 = VAR_14 & 2 ? VAR_6 & VAR_10 : VAR_2 & VAR_10;
   VAR_7 = VAR_14 & 4 ? VAR_7 & VAR_11 : VAR_2 & VAR_11;
   VAR_8 = VAR_14 & 8 ? VAR_8 & VAR_12 : VAR_2 & VAR_12;
   break;
  case 0x10:
   VAR_9 = VAR_13 & 1 ? VAR_15 : 0x00;
   VAR_10 = VAR_13 & 2 ? VAR_15 : 0x00;
   VAR_11 = VAR_13 & 4 ? VAR_15 : 0x00;
   VAR_12 = VAR_13 & 8 ? VAR_15 : 0x00;

   VAR_5 = VAR_14 & 1 ? VAR_5 | VAR_9 : VAR_2 | VAR_9;
   VAR_6 = VAR_14 & 2 ? VAR_6 | VAR_10 : VAR_2 | VAR_10;
   VAR_7 = VAR_14 & 4 ? VAR_7 | VAR_11 : VAR_2 | VAR_11;
   VAR_8 = VAR_14 & 8 ? VAR_8 | VAR_12 : VAR_2 | VAR_12;
   break;
  case 0x18:
   VAR_9 = VAR_13 & 1 ? VAR_15 : 0x00;
   VAR_10 = VAR_13 & 2 ? VAR_15 : 0x00;
   VAR_11 = VAR_13 & 4 ? VAR_15 : 0x00;
   VAR_12 = VAR_13 & 8 ? VAR_15 : 0x00;

   VAR_5 = VAR_14 & 1 ? VAR_5 ^ VAR_9 : VAR_2 ^ VAR_9;
   VAR_6 = VAR_14 & 2 ? VAR_6 ^ VAR_10 : VAR_2 ^ VAR_10;
   VAR_7 = VAR_14 & 4 ? VAR_7 ^ VAR_11 : VAR_2 ^ VAR_11;
   VAR_8 = VAR_14 & 8 ? VAR_8 ^ VAR_12 : VAR_2 ^ VAR_12;
   break;
  }
  break;
 case 1:

  break;
 case 2:

  VAR_15 = VAR_4->vga_gc.gc_bit_mask;

  switch (VAR_4->vga_gc.gc_op) {
  case 0x00:
   VAR_9 = (VAR_2 & 1 ? 0xff : 0x00) & VAR_15;
   VAR_10 = (VAR_2 & 2 ? 0xff : 0x00) & VAR_15;
   VAR_11 = (VAR_2 & 4 ? 0xff : 0x00) & VAR_15;
   VAR_12 = (VAR_2 & 8 ? 0xff : 0x00) & VAR_15;

   VAR_5 &= ~VAR_15;
   VAR_6 &= ~VAR_15;
   VAR_7 &= ~VAR_15;
   VAR_8 &= ~VAR_15;

   VAR_5 |= VAR_9;
   VAR_6 |= VAR_10;
   VAR_7 |= VAR_11;
   VAR_8 |= VAR_12;
   break;
  case 0x08:
   VAR_9 = (VAR_2 & 1 ? 0xff : 0x00) | ~VAR_15;
   VAR_10 = (VAR_2 & 2 ? 0xff : 0x00) | ~VAR_15;
   VAR_11 = (VAR_2 & 4 ? 0xff : 0x00) | ~VAR_15;
   VAR_12 = (VAR_2 & 8 ? 0xff : 0x00) | ~VAR_15;

   VAR_5 &= VAR_9;
   VAR_6 &= VAR_10;
   VAR_7 &= VAR_11;
   VAR_8 &= VAR_12;
   break;
  case 0x10:
   VAR_9 = (VAR_2 & 1 ? 0xff : 0x00) & VAR_15;
   VAR_10 = (VAR_2 & 2 ? 0xff : 0x00) & VAR_15;
   VAR_11 = (VAR_2 & 4 ? 0xff : 0x00) & VAR_15;
   VAR_12 = (VAR_2 & 8 ? 0xff : 0x00) & VAR_15;

   VAR_5 |= VAR_9;
   VAR_6 |= VAR_10;
   VAR_7 |= VAR_11;
   VAR_8 |= VAR_12;
   break;
  case 0x18:
   VAR_9 = (VAR_2 & 1 ? 0xff : 0x00) & VAR_15;
   VAR_10 = (VAR_2 & 2 ? 0xff : 0x00) & VAR_15;
   VAR_11 = (VAR_2 & 4 ? 0xff : 0x00) & VAR_15;
   VAR_12 = (VAR_2 & 8 ? 0xff : 0x00) & VAR_15;

   VAR_5 ^= VAR_9;
   VAR_6 ^= VAR_10;
   VAR_7 ^= VAR_11;
   VAR_8 ^= VAR_12;
   break;
  }
  break;
 case 3:

  VAR_15 = VAR_4->vga_gc.gc_bit_mask & VAR_2;

  VAR_2 = (uint8_t)(VAR_2 >> VAR_4->vga_gc.gc_rotate) |
      (uint8_t)(VAR_2 << (8 - VAR_4->vga_gc.gc_rotate));

  switch (VAR_4->vga_gc.gc_op) {
  case 0x00:
   VAR_9 = (VAR_13 & 1 ? 0xff : 0x00) & VAR_15;
   VAR_10 = (VAR_13 & 2 ? 0xff : 0x00) & VAR_15;
   VAR_11 = (VAR_13 & 4 ? 0xff : 0x00) & VAR_15;
   VAR_12 = (VAR_13 & 8 ? 0xff : 0x00) & VAR_15;

   VAR_5 &= ~VAR_15;
   VAR_6 &= ~VAR_15;
   VAR_7 &= ~VAR_15;
   VAR_8 &= ~VAR_15;

   VAR_5 |= VAR_9;
   VAR_6 |= VAR_10;
   VAR_7 |= VAR_11;
   VAR_8 |= VAR_12;
   break;
  case 0x08:
   VAR_9 = (VAR_13 & 1 ? 0xff : 0x00) | ~VAR_15;
   VAR_10 = (VAR_13 & 2 ? 0xff : 0x00) | ~VAR_15;
   VAR_11 = (VAR_13 & 4 ? 0xff : 0x00) | ~VAR_15;
   VAR_12 = (VAR_13 & 8 ? 0xff : 0x00) | ~VAR_15;

   VAR_5 &= VAR_9;
   VAR_6 &= VAR_10;
   VAR_7 &= VAR_11;
   VAR_8 &= VAR_12;
   break;
  case 0x10:
   VAR_9 = (VAR_13 & 1 ? 0xff : 0x00) & VAR_15;
   VAR_10 = (VAR_13 & 2 ? 0xff : 0x00) & VAR_15;
   VAR_11 = (VAR_13 & 4 ? 0xff : 0x00) & VAR_15;
   VAR_12 = (VAR_13 & 8 ? 0xff : 0x00) & VAR_15;

   VAR_5 |= VAR_9;
   VAR_6 |= VAR_10;
   VAR_7 |= VAR_11;
   VAR_8 |= VAR_12;
   break;
  case 0x18:
   VAR_9 = (VAR_13 & 1 ? 0xff : 0x00) & VAR_15;
   VAR_10 = (VAR_13 & 2 ? 0xff : 0x00) & VAR_15;
   VAR_11 = (VAR_13 & 4 ? 0xff : 0x00) & VAR_15;
   VAR_12 = (VAR_13 & 8 ? 0xff : 0x00) & VAR_15;

   VAR_5 ^= VAR_9;
   VAR_6 ^= VAR_10;
   VAR_7 ^= VAR_11;
   VAR_8 ^= VAR_12;
   break;
  }
  break;
 }

 if (VAR_4->vga_gc.gc_mode_oe) {
  if (VAR_16 & 1) {
   VAR_16 &= (uint64_t)~1;
   if (VAR_4->vga_seq.seq_map_mask & 2)
    VAR_4->vga_ram[VAR_16 + 1*64*VAR_0] = VAR_6;
   if (VAR_4->vga_seq.seq_map_mask & 8)
    VAR_4->vga_ram[VAR_16 + 3*64*VAR_0] = VAR_8;
  } else {
   if (VAR_4->vga_seq.seq_map_mask & 1)
    VAR_4->vga_ram[VAR_16 + 0*64*VAR_0] = VAR_5;
   if (VAR_4->vga_seq.seq_map_mask & 4)
    VAR_4->vga_ram[VAR_16 + 2*64*VAR_0] = VAR_7;
  }
 } else {
  if (VAR_4->vga_seq.seq_map_mask & 1)
   VAR_4->vga_ram[VAR_16 + 0*64*VAR_0] = VAR_5;
  if (VAR_4->vga_seq.seq_map_mask & 2)
   VAR_4->vga_ram[VAR_16 + 1*64*VAR_0] = VAR_6;
  if (VAR_4->vga_seq.seq_map_mask & 4)
   VAR_4->vga_ram[VAR_16 + 2*64*VAR_0] = VAR_7;
  if (VAR_4->vga_seq.seq_map_mask & 8)
   VAR_4->vga_ram[VAR_16 + 3*64*VAR_0] = VAR_8;
 }
}
