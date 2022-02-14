
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inout_port {char* name; int size; struct atkbdc_softc* arg; int handler; void* flags; int port; } ;
struct TYPE_4__ {void* irq; } ;
struct TYPE_3__ {void* irq; } ;
struct atkbdc_softc {int ps2mouse_sc; int ps2kbd_sc; TYPE_2__ aux; TYPE_1__ kbd; int mtx; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct inout_port*,int) ;
 struct atkbdc_softc* FUNC_2 (int,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct atkbdc_softc*) ;
 int FUNC_5 (struct atkbdc_softc*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct inout_port*) ;

void
FUNC_8()
{
 struct inout_port VAR_7;
 struct atkbdc_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(1, sizeof(struct atkbdc_softc));

 FUNC_6(&VAR_8->mtx, ((void*)0));

 FUNC_1(&VAR_7, sizeof(struct inout_port));
 VAR_7.name = "atkdbc";
 VAR_7.port = VAR_4;
 VAR_7.size = 1;
 VAR_7.flags = VAR_1;
 VAR_7.handler = VAR_6;
 VAR_7.arg = VAR_8;

 VAR_9 = FUNC_7(&VAR_7);
 FUNC_0(VAR_9 == 0);

 FUNC_1(&VAR_7, sizeof(struct inout_port));
 VAR_7.name = "atkdbc";
 VAR_7.port = VAR_2;
 VAR_7.size = 1;
 VAR_7.flags = VAR_1;
 VAR_7.handler = VAR_5;
 VAR_7.arg = VAR_8;

 VAR_9 = FUNC_7(&VAR_7);
 FUNC_0(VAR_9 == 0);

 FUNC_3(VAR_3);
 VAR_8->kbd.irq = VAR_3;

 FUNC_3(VAR_0);
 VAR_8->aux.irq = VAR_0;

 VAR_8->ps2kbd_sc = FUNC_4(VAR_8);
 VAR_8->ps2mouse_sc = FUNC_5(VAR_8);
}
