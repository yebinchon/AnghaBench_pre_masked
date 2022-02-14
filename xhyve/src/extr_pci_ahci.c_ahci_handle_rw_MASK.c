
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct blockif_req {scalar_t__ br_offset; } ;
struct ahci_prdt_entry {int dummy; } ;
struct ahci_port {int pending; int bctx; int iobhd; int iofhd; scalar_t__ cmd_lst; } ;
struct ahci_ioreq {int* cfis; int slot; struct blockif_req io_req; scalar_t__ done; scalar_t__ len; } ;
struct ahci_cmd_hdr {int prdtl; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
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
 struct ahci_ioreq* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct ahci_ioreq*,int ) ;
 int FUNC_3 (struct ahci_port*,struct ahci_ioreq*,struct ahci_prdt_entry*,int ) ;
 int FUNC_4 (struct ahci_port*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct blockif_req*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,struct blockif_req*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_9(struct ahci_port *VAR_14, int VAR_15, uint8_t *VAR_16, uint32_t VAR_17)
{
 struct ahci_ioreq *VAR_18;
 struct blockif_req *VAR_19;
 struct ahci_prdt_entry *VAR_20;
 struct ahci_cmd_hdr *VAR_21;
 uint64_t VAR_22;
 uint32_t VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_20 = (struct ahci_prdt_entry *)((void *) (VAR_16 + 0x80));
 VAR_21 = (struct ahci_cmd_hdr *)((void *) (VAR_14->cmd_lst + VAR_15 * VAR_0));
 VAR_26 = 0;
 VAR_27 = 1;
 VAR_25 = (VAR_17 == 0);

 if (VAR_16[2] == VAR_5 || VAR_16[2] == VAR_6 ||
     VAR_16[2] == VAR_10 || VAR_16[2] == VAR_11 ||
     VAR_16[2] == VAR_7 || VAR_16[2] == VAR_8 ||
     VAR_16[2] == VAR_9)
  VAR_27 = 0;

 if (VAR_16[2] == VAR_9 ||
     VAR_16[2] == VAR_3) {
  VAR_22 = ((uint64_t)VAR_16[10] << 40) |
   ((uint64_t)VAR_16[9] << 32) |
   ((uint64_t)VAR_16[8] << 24) |
   ((uint64_t)VAR_16[6] << 16) |
   ((uint64_t)VAR_16[5] << 8) |
   VAR_16[4];
  VAR_23 = (uint32_t) (VAR_16[11] << 8 | VAR_16[3]);
  if (!VAR_23)
   VAR_23 = 65536;
  VAR_26 = 1;
 } else if (VAR_16[2] == VAR_1 || VAR_16[2] == VAR_6 ||
     VAR_16[2] == VAR_4 || VAR_16[2] == VAR_11 ||
     VAR_16[2] == VAR_2 || VAR_16[2] == VAR_8) {
  VAR_22 = ((uint64_t)VAR_16[10] << 40) |
   ((uint64_t)VAR_16[9] << 32) |
   ((uint64_t)VAR_16[8] << 24) |
   ((uint64_t)VAR_16[6] << 16) |
   ((uint64_t)VAR_16[5] << 8) |
   VAR_16[4];
  VAR_23 = (uint32_t) (VAR_16[13] << 8 | VAR_16[12]);
  if (!VAR_23)
   VAR_23 = 65536;
 } else {
  VAR_22 = (uint64_t) (((VAR_16[7] & 0xf) << 24) | (VAR_16[6] << 16) |
   (VAR_16[5] << 8) | VAR_16[4]);
  VAR_23 = VAR_16[12];
  if (!VAR_23)
   VAR_23 = 256;
 }
 VAR_22 *= (uint64_t) FUNC_7(VAR_14->bctx);
 VAR_23 *= (uint32_t) FUNC_7(VAR_14->bctx);


 VAR_18 = FUNC_0(&VAR_14->iofhd);
 FUNC_5(VAR_18 != ((void*)0));
 FUNC_1(&VAR_14->iofhd, VAR_13);

 VAR_18->cfis = VAR_16;
 VAR_18->slot = VAR_15;
 VAR_18->len = VAR_23;
 VAR_18->done = VAR_17;
 VAR_19 = &VAR_18->io_req;
 VAR_19->br_offset = (off_t) (VAR_22 + VAR_17);
 FUNC_3(VAR_14, VAR_18, VAR_20, VAR_21->prdtl);


 VAR_14->pending |= 1 << VAR_15;


 FUNC_2(&VAR_14->iobhd, VAR_18, VAR_12);

 if (VAR_26 && VAR_25)
  FUNC_4(VAR_14, VAR_15);

 if (VAR_27)
  VAR_24 = FUNC_6(VAR_14->bctx, VAR_19);
 else
  VAR_24 = FUNC_8(VAR_14->bctx, VAR_19);
 FUNC_5(VAR_24 == 0);
}
