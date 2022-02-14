
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ahci_prdt_entry {int dbc; int dba; } ;
struct ahci_port {scalar_t__ cmd_lst; } ;
struct ahci_cmd_hdr {int prdtl; int prdbc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int) ;
 int * FUNC_1 (int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct ahci_port *VAR_2, int VAR_3, uint8_t *VAR_4,
  void *VAR_5, int VAR_6)
{
 struct ahci_cmd_hdr *VAR_7;
 struct ahci_prdt_entry *VAR_8;
 void *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = (struct ahci_cmd_hdr *)((void *) (VAR_2->cmd_lst + VAR_3 * VAR_0));
 VAR_11 = VAR_6;
 VAR_9 = VAR_5;
 VAR_8 = (struct ahci_prdt_entry *)((void *) (VAR_4 + 0x80));
 for (VAR_10 = 0; VAR_10 < VAR_7->prdtl && VAR_11; VAR_10++) {
  uint8_t *VAR_12;
  uint32_t VAR_13;
  int VAR_14;

  VAR_13 = (VAR_8->dbc & VAR_1) + 1;
  VAR_12 = FUNC_1(VAR_8->dba, VAR_13);
  VAR_14 = (VAR_11 < ((int) VAR_13)) ? VAR_11 : ((int) VAR_13);
  FUNC_0(VAR_12, VAR_9, VAR_14);
  VAR_11 -= VAR_14;
  VAR_9 = (void *) (((uintptr_t) VAR_9) + ((uintptr_t) VAR_14));
  VAR_8++;
 }
 VAR_7->prdbc = (uint32_t) (VAR_6 - VAR_11);
}
