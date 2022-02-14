
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int depth; int height; int width; int fbsize; } ;
struct pci_fbuf_softc {int vga_enabled; scalar_t__ vga_full; int rfb_password; int rfb_wait; int rfb_port; int rfb_host; scalar_t__ fb_base; int gc_image; int vgasc; TYPE_2__ memregs; int fbaddr; struct pci_devinst* fsc_pi; } ;
struct pci_devinst {TYPE_1__* pi_bar; struct pci_fbuf_softc* pi_arg; } ;
struct TYPE_3__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 struct pci_fbuf_softc* FUNC_2 (int,int) ;
 int FUNC_3 (int ,struct pci_fbuf_softc*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct pci_fbuf_softc* VAR_13 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct pci_fbuf_softc*) ;
 int FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (struct pci_devinst*,int ) ;
 int FUNC_10 (struct pci_devinst*,int,int ,int ) ;
 int FUNC_11 (struct pci_fbuf_softc*,char*) ;
 int VAR_14 ;
 int FUNC_12 (struct pci_devinst*,int ,int) ;
 int FUNC_13 (struct pci_devinst*,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int VAR_15 ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int ,int ,void**) ;

__attribute__((used)) static int
FUNC_17(struct pci_devinst *VAR_16, char *VAR_17)
{
 int VAR_18;
 struct pci_fbuf_softc *VAR_19;

 if (VAR_13 != ((void*)0)) {
  FUNC_6(VAR_15, "Only one frame buffer device is allowed.\n");
  return (-1);
 }

 VAR_19 = FUNC_2(1, sizeof(struct pci_fbuf_softc));

 VAR_16->pi_arg = VAR_19;


 FUNC_12(VAR_16, VAR_7, 0x40FB);
 FUNC_12(VAR_16, VAR_9, 0xFB5D);
 FUNC_13(VAR_16, VAR_6, VAR_5);
 FUNC_13(VAR_16, VAR_8, VAR_10);

 VAR_18 = FUNC_10(VAR_16, 0, VAR_4, VAR_2);
 FUNC_1(VAR_18 == 0);

 VAR_18 = FUNC_10(VAR_16, 1, VAR_4, VAR_3);
 FUNC_1(VAR_18 == 0);

 VAR_18 = FUNC_9(VAR_16, VAR_11);
 FUNC_1(VAR_18 == 0);

 VAR_19->fbaddr = VAR_16->pi_bar[1].addr;
 VAR_19->memregs.fbsize = VAR_3;
 VAR_19->memregs.width = VAR_0;
 VAR_19->memregs.height = VAR_12;
 VAR_19->memregs.depth = 32;

 VAR_19->vga_enabled = 1;
 VAR_19->vga_full = 0;

 VAR_19->fsc_pi = VAR_16;

 VAR_18 = FUNC_11(VAR_19, VAR_17);
 if (VAR_18 != 0)
  goto done;


 if (VAR_19->vga_full != 0) {
  FUNC_6(VAR_15, "pci_fbuf: VGA rendering not enabled");
  goto done;
 }

 FUNC_0(VAR_1, ("fbuf frame buffer base: %p [sz %lu]\r\n",
         (void )VAR_19->fb_base, VAR_3));







 if (FUNC_16(VAR_19->fbaddr, VAR_3, (void **)&VAR_19->fb_base) != 0) {
  FUNC_6(VAR_15, "pci_fbuf: mapseg failed - try deleting VM and restarting\n");
  VAR_18 = -1;
  goto done;
 }

 FUNC_5(VAR_19->memregs.width, VAR_19->memregs.height, VAR_19->fb_base);
 FUNC_3(VAR_14, VAR_19);

 if (VAR_19->vga_enabled)
  VAR_19->vgasc = FUNC_15(!VAR_19->vga_full);
 VAR_19->gc_image = FUNC_4();

 VAR_13 = VAR_19;

 FUNC_8((void *)VAR_19->fb_base, 0, VAR_3);

 VAR_18 = FUNC_14(VAR_19->rfb_host, VAR_19->rfb_port, VAR_19->rfb_wait, VAR_19->rfb_password);
done:
 if (VAR_18)
  FUNC_7(VAR_19);

 return (VAR_18);
}
