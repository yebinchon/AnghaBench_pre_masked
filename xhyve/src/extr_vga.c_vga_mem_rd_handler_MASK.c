
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_2__ {int gc_misc_mm; int gc_latch0; int gc_latch1; int gc_latch2; int gc_latch3; int gc_read_map_sel; scalar_t__ gc_mode_oe; scalar_t__ gc_mode_rm; } ;
struct vga_softc {int* vga_ram; TYPE_1__ vga_gc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static uint64_t
FUNC_1(uint64_t VAR_1, void *VAR_2)
{
 struct vga_softc *VAR_3 = VAR_2;
 uint8_t VAR_4;
 uint64_t VAR_5;

 VAR_5 = VAR_1;
 switch (VAR_3->vga_gc.gc_misc_mm) {
 case 0x0:



  VAR_5 -=0xa0000;
  VAR_5 &= (128 * VAR_0 - 1);
  break;
 case 0x1:



  VAR_5 -=0xa0000;
  VAR_5 &= (64 * VAR_0 - 1);
  break;
 case 0x2:



  FUNC_0(0);
 case 0x3:



  VAR_5 -=0xb8000;
  VAR_5 &= (32 * VAR_0 - 1);
  break;
 }


 VAR_3->vga_gc.gc_latch0 = VAR_3->vga_ram[VAR_5 + 0*64*VAR_0];
 VAR_3->vga_gc.gc_latch1 = VAR_3->vga_ram[VAR_5 + 1*64*VAR_0];
 VAR_3->vga_gc.gc_latch2 = VAR_3->vga_ram[VAR_5 + 2*64*VAR_0];
 VAR_3->vga_gc.gc_latch3 = VAR_3->vga_ram[VAR_5 + 3*64*VAR_0];

 if (VAR_3->vga_gc.gc_mode_rm) {

  FUNC_0(0);
 }

 VAR_4 = VAR_3->vga_gc.gc_read_map_sel;
 if (VAR_3->vga_gc.gc_mode_oe) {
  VAR_4 |= (VAR_5 & 1);
  VAR_5 &= (uint64_t)~1;
 }


 VAR_5 += VAR_4 * 64*VAR_0;

 return (VAR_3->vga_ram[VAR_5]);
}
