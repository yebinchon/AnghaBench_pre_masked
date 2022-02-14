
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {unsigned long uio_iovcnt; int uio_loffset; size_t uio_resid; size_t uio_skip; int uio_limit; int uio_segflg; struct iovec const* uio_iov; int member_1; TYPE_1__ member_0; } ;
typedef TYPE_2__ uio_t ;
typedef int uio_seg_t ;
struct iovec {int dummy; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int fstrans_cookie_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,TYPE_2__*,int,int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct inode *VAR_1, const struct iovec *VAR_2, size_t VAR_3,
    unsigned long VAR_4, loff_t *VAR_5, uio_seg_t VAR_6, int VAR_7,
    cred_t *VAR_8, size_t VAR_9)
{
 ssize_t VAR_10;
 uio_t VAR_11 = { 0 , 0 };
 int VAR_12;
 fstrans_cookie_t VAR_13;

 VAR_11.uio_iov = VAR_2;
 VAR_11.uio_iovcnt = VAR_4;
 VAR_11.uio_loffset = *VAR_5;
 VAR_11.uio_segflg = VAR_6;
 VAR_11.uio_limit = VAR_0;
 VAR_11.uio_resid = VAR_3;
 VAR_11.uio_skip = VAR_9;

 VAR_13 = FUNC_0();
 VAR_12 = -FUNC_2(VAR_1, &VAR_11, VAR_7, VAR_8);
 FUNC_1(VAR_13);
 if (VAR_12 < 0)
  return (VAR_12);

 VAR_10 = VAR_3 - VAR_11.uio_resid;
 *VAR_5 += VAR_10;

 return (VAR_10);
}
