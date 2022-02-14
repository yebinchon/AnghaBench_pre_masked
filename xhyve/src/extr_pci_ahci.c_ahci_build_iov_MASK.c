
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct blockif_req {int br_iovcnt; int br_resid; TYPE_1__* br_iov; } ;
struct ahci_prdt_entry {int dbc; scalar_t__ dba; } ;
struct ahci_port {int bctx; } ;
struct ahci_ioreq {unsigned int done; unsigned int len; int more; struct blockif_req io_req; } ;
struct TYPE_2__ {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct ahci_port *VAR_2, struct ahci_ioreq *VAR_3,
    struct ahci_prdt_entry *VAR_4, uint16_t VAR_5)
{
 struct blockif_req *VAR_6 = &VAR_3->io_req;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13;


 VAR_9 = (int) VAR_3->done;
 VAR_11 = (int) (VAR_3->len - VAR_3->done);
 VAR_10 = 0;
 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_5 && VAR_8 < VAR_0 && VAR_11 > 0;
     VAR_7++, VAR_4++) {
  VAR_13 = (VAR_4->dbc & VAR_1) + 1;

  if (VAR_13 <= ((uint32_t) VAR_9)) {
   VAR_9 -= VAR_13;
   continue;
  }
  VAR_13 -= ((unsigned) VAR_9);
  if (VAR_13 > ((uint32_t) VAR_11)) {
   VAR_13 = ((uint32_t) VAR_11);
  }
  VAR_6->br_iov[VAR_8].iov_base =
   FUNC_2((VAR_4->dba + ((uint64_t) VAR_9)), VAR_13);
  VAR_6->br_iov[VAR_8].iov_len = VAR_13;
  VAR_10 += VAR_13;
  VAR_11 -= VAR_13;
  VAR_9 = 0;
  VAR_8++;
 }


 if (VAR_8 == VAR_0) {
  VAR_12 = VAR_10 % FUNC_1(VAR_2->bctx);
  VAR_10 -= VAR_12;
  FUNC_0(VAR_10 > 0);
  while (VAR_12 > 0) {
   if (VAR_6->br_iov[VAR_8 - 1].iov_len > ((size_t) VAR_12)) {
    VAR_6->br_iov[VAR_8 - 1].iov_len -= ((size_t) VAR_12);
    break;
   }
   VAR_12 -= VAR_6->br_iov[VAR_8 - 1].iov_len;
   VAR_8--;
  }
 }

 VAR_6->br_iovcnt = VAR_8;
 VAR_6->br_resid = VAR_10;
 VAR_3->done += ((unsigned) VAR_10);
 VAR_3->more = (VAR_3->done < VAR_3->len && VAR_7 < VAR_5);
}
