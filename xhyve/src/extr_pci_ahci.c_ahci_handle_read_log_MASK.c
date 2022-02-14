
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahci_port {int err_cfis; scalar_t__ atapi; scalar_t__ cmd_lst; } ;
struct ahci_cmd_hdr {scalar_t__ prdtl; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (struct ahci_port*,int,int*,int) ;
 int FUNC_2 (struct ahci_port*) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct ahci_port*,int,int*,void*,int) ;

__attribute__((used)) static void
FUNC_6(struct ahci_port *VAR_6, int VAR_7, uint8_t *VAR_8)
{
 struct ahci_cmd_hdr *VAR_9;
 uint8_t VAR_10[512];

 VAR_9 = (struct ahci_cmd_hdr *)((void *) (VAR_6->cmd_lst + VAR_7 * VAR_0));
 if (VAR_6->atapi || VAR_9->prdtl == 0 || VAR_8[4] != 0x10 ||
     VAR_8[5] != 0 || VAR_8[9] != 0 || VAR_8[12] != 1 || VAR_8[13] != 0) {
  FUNC_1(VAR_6, VAR_7, VAR_8,
      (VAR_1 << 8) | VAR_5 | VAR_4);
  return;
 }

 FUNC_4(VAR_10, 0, sizeof(VAR_10));
 FUNC_3(VAR_10, VAR_6->err_cfis, sizeof(VAR_6->err_cfis));
 FUNC_0(VAR_10, sizeof(VAR_10));

 if (VAR_8[2] == VAR_2)
  FUNC_2(VAR_6);
 FUNC_5(VAR_6, VAR_7, VAR_8, (void *)VAR_10, sizeof(VAR_10));
 FUNC_1(VAR_6, VAR_7, VAR_8, VAR_3 | VAR_5);
}
