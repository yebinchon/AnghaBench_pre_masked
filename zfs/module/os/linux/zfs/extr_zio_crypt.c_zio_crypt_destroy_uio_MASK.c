
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uio_iovcnt; scalar_t__ uio_iov; } ;
typedef TYPE_1__ uio_t ;
typedef int iovec_t ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1(uio_t *VAR_0)
{
 if (VAR_0->uio_iov)
  FUNC_0(VAR_0->uio_iov, VAR_0->uio_iovcnt * sizeof (iovec_t));
}
