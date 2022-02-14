
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct pci_fbuf_softc {int rfb_wait; char* rfb_host; int vga_enabled; int vga_full; char* rfb_password; TYPE_1__ memregs; void* rfb_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (char**,char*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct pci_fbuf_softc *VAR_3, char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 VAR_5 = FUNC_5(VAR_4);
 for (VAR_6 = FUNC_7(VAR_5, ",");
      VAR_6 != ((void*)0);
      VAR_6 = FUNC_7(((void*)0), ",")) {
  if (FUNC_4(VAR_6, "wait") == 0) {
   VAR_3->rfb_wait = 1;
   continue;
  }

  if ((VAR_7 = FUNC_3(VAR_6, '=')) == ((void*)0)) {
   FUNC_2(VAR_6);
   VAR_9 = -1;
   goto done;
  }

  *VAR_7++ = '\0';

  FUNC_0(VAR_1, ("pci_fbuf option %s = %s\r\n",
     VAR_6, VAR_7));

  if (!FUNC_4(VAR_6, "tcp") || !FUNC_4(VAR_6, "rfb")) {

          VAR_8 = FUNC_6(&VAR_7, ":");
   if (!VAR_7)
    VAR_3->rfb_port = FUNC_1(VAR_8);
   else {
    VAR_3->rfb_port = FUNC_1(VAR_7);
    VAR_3->rfb_host = VAR_8;
   }
         } else if (!FUNC_4(VAR_6, "vga")) {
   if (!FUNC_4(VAR_7, "off")) {
    VAR_3->vga_enabled = 0;
   } else if (!FUNC_4(VAR_7, "io")) {
    VAR_3->vga_enabled = 1;
    VAR_3->vga_full = 0;
   } else if (!FUNC_4(VAR_7, "on")) {
    VAR_3->vga_enabled = 1;
    VAR_3->vga_full = 1;
   } else {
    FUNC_2(VAR_4);
    VAR_9 = -1;
    goto done;
   }
         } else if (!FUNC_4(VAR_6, "w")) {
          VAR_3->memregs.width = (uint16_t)FUNC_1(VAR_7);
   if (VAR_3->memregs.width > VAR_0) {
    FUNC_2(VAR_6);
    VAR_9 = -1;
    goto done;
   } else if (VAR_3->memregs.width == 0)
    VAR_3->memregs.width = 1920;
  } else if (!FUNC_4(VAR_6, "h")) {
   VAR_3->memregs.height = (uint16_t)FUNC_1(VAR_7);
   if (VAR_3->memregs.height > VAR_2) {
    FUNC_2(VAR_6);
    VAR_9 = -1;
    goto done;
   } else if (VAR_3->memregs.height == 0)
    VAR_3->memregs.height = 1080;
  } else if (!FUNC_4(VAR_6, "password")) {
   VAR_3->rfb_password = VAR_7;
  } else {
   FUNC_2(VAR_6);
   VAR_9 = -1;
   goto done;
  }
 }

done:
 return (VAR_9);
}
