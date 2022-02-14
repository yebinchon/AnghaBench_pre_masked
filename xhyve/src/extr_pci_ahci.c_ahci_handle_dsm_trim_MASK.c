
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct blockif_req {int br_resid; scalar_t__ br_offset; } ;
struct ahci_port {int pending; int bctx; int iobhd; int iofhd; } ;
struct ahci_ioreq {int* cfis; int slot; int len; int done; int more; struct blockif_req io_req; } ;
typedef scalar_t__ off_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ahci_ioreq* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct ahci_ioreq*,int ) ;
 int FUNC_3 (struct ahci_port*) ;
 int FUNC_4 (struct ahci_port*) ;
 int FUNC_5 (struct ahci_port*,int,int*,int) ;
 int FUNC_6 (struct ahci_port*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,struct blockif_req*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct ahci_port*,int,int*,int*,int) ;

__attribute__((used)) static void
FUNC_11(struct ahci_port *VAR_5, int VAR_6, uint8_t *VAR_7, uint32_t VAR_8)
{
 struct ahci_ioreq *VAR_9;
 struct blockif_req *VAR_10;
 uint8_t *VAR_11;
 uint64_t VAR_12;
 uint32_t VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint8_t VAR_18[512];

 VAR_16 = (VAR_8 == 0);
 if (VAR_7[2] == VAR_0) {
  VAR_13 = (uint32_t) ((((uint16_t) VAR_7[13]) << 8) | VAR_7[12]);
  VAR_13 *= 512;
  VAR_17 = 0;
 } else {
  VAR_13 = (uint32_t) ((((uint16_t) VAR_7[11]) << 8) | VAR_7[3]);
  VAR_13 *= 512;
  VAR_17 = 1;
 }
 FUNC_10(VAR_5, VAR_6, VAR_7, VAR_18, sizeof(VAR_18));

next:
 VAR_11 = &VAR_18[VAR_8];
 VAR_12 = ((uint64_t)VAR_11[5] << 40) |
  ((uint64_t)VAR_11[4] << 32) |
  ((uint64_t)VAR_11[3] << 24) |
  ((uint64_t)VAR_11[2] << 16) |
  ((uint64_t)VAR_11[1] << 8) |
  VAR_11[0];
 VAR_14 = (uint32_t) ((((uint16_t) VAR_11[7]) << 8) | VAR_11[6]);
 VAR_8 += 8;
 if (VAR_14 == 0) {
  if (VAR_8 >= VAR_13) {
   FUNC_5(VAR_5, VAR_6, VAR_7, VAR_2 | VAR_1);
   VAR_5->pending &= ~(1 << VAR_6);
   FUNC_3(VAR_5);
   if (!VAR_16)
    FUNC_4(VAR_5);
   return;
  }
  goto next;
 }




 VAR_9 = FUNC_0(&VAR_5->iofhd);
 FUNC_7(VAR_9 != ((void*)0));
 FUNC_1(&VAR_5->iofhd, VAR_4);
 VAR_9->cfis = VAR_7;
 VAR_9->slot = VAR_6;
 VAR_9->len = VAR_13;
 VAR_9->done = VAR_8;
 VAR_9->more = (VAR_13 != VAR_8);

 VAR_10 = &VAR_9->io_req;
 VAR_10->br_offset = (off_t) (VAR_12 * ((uint64_t) FUNC_9(VAR_5->bctx)));
 VAR_10->br_resid = VAR_14 * ((unsigned) FUNC_9(VAR_5->bctx));




 VAR_5->pending |= 1 << VAR_6;




 FUNC_2(&VAR_5->iobhd, VAR_9, VAR_3);

 if (VAR_17 && VAR_16)
  FUNC_6(VAR_5, VAR_6);

 VAR_15 = FUNC_8(VAR_5->bctx, VAR_10);
 FUNC_7(VAR_15 == 0);
}
