
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


typedef void* uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_char ;
struct TYPE_13__ {int * vs_mtx; } ;
struct TYPE_11__ {scalar_t__ opt_io_size; scalar_t__ min_io_size; void* alignment_offset; void* physical_block_exp; } ;
struct TYPE_10__ {scalar_t__ sectors; scalar_t__ heads; scalar_t__ cylinders; } ;
struct TYPE_12__ {scalar_t__ vbc_writeback; TYPE_3__ vbc_topology; scalar_t__ vbc_blk_size; TYPE_2__ vbc_geometry; int vbc_seg_max; scalar_t__ vbc_size_max; scalar_t__ vbc_capacity; } ;
struct TYPE_14__ {int vq_qsize; } ;
struct pci_vtblk_softc {TYPE_5__ vbsc_vs; struct blockif_ctxt* bc; TYPE_4__ vbsc_cfg; int vbsc_ident; TYPE_6__ vbsc_vq; int vsc_mtx; struct pci_vtblk_ioreq* vbsc_ios; } ;
struct TYPE_9__ {struct pci_vtblk_ioreq* br_param; int br_callback; } ;
struct pci_vtblk_ioreq {scalar_t__ io_idx; struct pci_vtblk_softc* io_sc; TYPE_1__ io_req; } ;
struct pci_devinst {int pi_slot; int pi_func; } ;
struct blockif_ctxt {int dummy; } ;
typedef int off_t ;
typedef int bident ;
typedef int CC_LONG ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int FUNC_1 (struct blockif_ctxt*) ;
 struct blockif_ctxt* FUNC_2 (char*,char*) ;
 int FUNC_3 (struct blockif_ctxt*,int*,int*) ;
 int FUNC_4 (struct blockif_ctxt*) ;
 int FUNC_5 (struct blockif_ctxt*) ;
 struct pci_vtblk_softc* FUNC_6 (int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct pci_vtblk_softc*) ;
 int FUNC_10 (struct pci_devinst*,int ,int ) ;
 int FUNC_11 (struct pci_devinst*,int ,int ) ;
 int VAR_14 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (char*,int,char*,int,int,...) ;
 scalar_t__ FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (TYPE_5__*,int,int ) ;
 int FUNC_18 (TYPE_5__*,int ) ;
 int FUNC_19 (TYPE_5__*,int *,struct pci_vtblk_softc*,struct pci_devinst*,TYPE_6__*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_20(struct pci_devinst *VAR_16, char *VAR_17)
{
 char VAR_18[sizeof("XX:X:X")];
 struct blockif_ctxt *VAR_19;
 u_char VAR_20[VAR_1];
 struct pci_vtblk_softc *VAR_21;
 off_t VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;

 if (VAR_17 == ((void*)0)) {
  FUNC_13("virtio-block: backing device required\n");
  return (1);
 }




 FUNC_15(VAR_18, sizeof(VAR_18), "%d:%d", VAR_16->pi_slot, VAR_16->pi_func);
 VAR_19 = FUNC_2(VAR_17, VAR_18);
 if (VAR_19 == ((void*)0)) {
  FUNC_12("Could not open backing file");
  return (1);
 }

 VAR_22 = FUNC_5(VAR_19);
 VAR_24 = FUNC_4(VAR_19);
 FUNC_3(VAR_19, &VAR_25, &VAR_26);

 VAR_21 = FUNC_6(1, sizeof(struct pci_vtblk_softc));
 VAR_21->bc = VAR_19;
 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  struct pci_vtblk_ioreq *VAR_27 = &VAR_21->vbsc_ios[VAR_23];
  VAR_27->io_req.br_callback = VAR_14;
  VAR_27->io_req.br_param = VAR_27;
  VAR_27->io_sc = VAR_21;
  VAR_27->io_idx = (uint16_t) VAR_23;
 }

 FUNC_14(&VAR_21->vsc_mtx, ((void*)0));


 FUNC_19(&VAR_21->vbsc_vs, &VAR_15, VAR_21, VAR_16, &VAR_21->vbsc_vq);
 VAR_21->vbsc_vs.vs_mtx = &VAR_21->vsc_mtx;

 VAR_21->vbsc_vq.vq_qsize = VAR_13;






    FUNC_0(VAR_17, (CC_LONG)FUNC_16(VAR_17), VAR_20);
 FUNC_15(VAR_21->vbsc_ident, VAR_12, "BHYVE-%02X%02X-%02X%02X-%02X%02X",
     VAR_20[0], VAR_20[1], VAR_20[2], VAR_20[3], VAR_20[4], VAR_20[5]);


 VAR_21->vbsc_cfg.vbc_capacity =
  (uint64_t) (VAR_22 / VAR_2);
 VAR_21->vbsc_cfg.vbc_size_max = 0;
 VAR_21->vbsc_cfg.vbc_seg_max = VAR_0;
 VAR_21->vbsc_cfg.vbc_geometry.cylinders = 0;
 VAR_21->vbsc_cfg.vbc_geometry.heads = 0;
 VAR_21->vbsc_cfg.vbc_geometry.sectors = 0;
 VAR_21->vbsc_cfg.vbc_blk_size = (uint32_t) VAR_24;
 VAR_21->vbsc_cfg.vbc_topology.physical_block_exp =
     (uint8_t) ((VAR_25 > VAR_24) ? (FUNC_8(VAR_25 / VAR_24) - 1) : 0);
 VAR_21->vbsc_cfg.vbc_topology.alignment_offset =
     (uint8_t) ((VAR_26 != 0) ? ((VAR_25 - VAR_26) / VAR_24) : 0);
 VAR_21->vbsc_cfg.vbc_topology.min_io_size = 0;
 VAR_21->vbsc_cfg.vbc_topology.opt_io_size = 0;
 VAR_21->vbsc_cfg.vbc_writeback = 0;






 FUNC_10(VAR_16, VAR_5, VAR_9);
 FUNC_10(VAR_16, VAR_8, VAR_11);
 FUNC_11(VAR_16, VAR_4, VAR_3);
 FUNC_10(VAR_16, VAR_6, VAR_10);
 FUNC_10(VAR_16, VAR_7, VAR_11);

 if (FUNC_17(&VAR_21->vbsc_vs, 1, FUNC_7())) {
  FUNC_1(VAR_21->bc);
  FUNC_9(VAR_21);
  return (1);
 }
 FUNC_18(&VAR_21->vbsc_vs, 0);
 return (0);
}
